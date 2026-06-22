#include "omc_simulation_settings.h"
#include "NBBackendUtil.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "$fDER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,5,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "/projects/OpenModelica-session2/OMCompiler/Compiler/NBackEnd/Util/NBBackendUtil.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,82,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4_6,1.781983298e9);
#define _OMC_LIT4_6 MMC_REFREALLIT(_OMC_LIT_STRUCT4_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(250)),MMC_IMMEDIATE(MMC_TAGFIXNUM(32)),MMC_IMMEDIATE(MMC_TAGFIXNUM(251)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),_OMC_LIT4_6}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT5_6,1.781983298e9);
#define _OMC_LIT5_6 MMC_REFREALLIT(_OMC_LIT_STRUCT5_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(229)),MMC_IMMEDIATE(MMC_TAGFIXNUM(32)),MMC_IMMEDIATE(MMC_TAGFIXNUM(230)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),_OMC_LIT5_6}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT6_6,1.781983298e9);
#define _OMC_LIT6_6 MMC_REFREALLIT(_OMC_LIT_STRUCT6_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(118)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(118)),MMC_IMMEDIATE(MMC_TAGFIXNUM(56)),_OMC_LIT6_6}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "end"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,3,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "empty"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,5,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#include "util/modelica.h"

#include "NBBackendUtil_includes.h"



DLLDirection
modelica_string omc_NBBackendUtil_makeFDerString(threadData_t *threadData, modelica_string __omcQ_24in_5Fstr, modelica_metatype _i_opt)
{
  modelica_string _str = NULL;
  modelica_string _i = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  _i = (isSome(_i_opt)?intString(mmc_unbox_integer(omc_Util_getOption(threadData, _i_opt))):_OMC_LIT0);
  tmpMeta1 = stringAppend(_OMC_LIT1,_i);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT2);
  tmpMeta3 = stringAppend(tmpMeta2,_str);
  _str = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NBBackendUtil_getLocalSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _eqn_indices, modelica_metatype *out_matching_loc, modelica_metatype *out_map_back)
{
  modelica_metatype _m_loc = NULL;
  modelica_metatype _matching_loc = NULL;
  modelica_metatype _map_back = NULL;
  modelica_integer _N;
  modelica_metatype _var_to_eqn = NULL;
  modelica_metatype _eqn_to_var = NULL;
  modelica_metatype _var_loc = NULL;
  modelica_integer _j;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _m_loc has no default value.
  // _matching_loc has no default value.
  // _map_back has no default value.
  _N = listLength(_eqn_indices);
  _var_to_eqn = arrayCreate(listLength(_eqn_indices), mmc_mk_integer(((modelica_integer) -1)));
  _eqn_to_var = arrayCreate(listLength(_eqn_indices), mmc_mk_integer(((modelica_integer) -1)));
  _var_loc = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, listLength(_eqn_indices));
  _j = ((modelica_integer) 1);
  _map_back = arrayCreate(listLength(_eqn_indices), mmc_mk_integer(((modelica_integer) -1)));

  {
    modelica_metatype _i;
    for (tmpMeta1 = _eqn_indices; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      arrayUpdate(_map_back,_j,_i);

      omc_UnorderedMap_addUnique(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))),mmc_unbox_integer(_i)) /* DAE.ASUB */, mmc_mk_integer(_j), _var_loc);

      arrayUpdate(_eqn_to_var,_j,mmc_mk_integer(_j));

      arrayUpdate(_var_to_eqn,_j,mmc_mk_integer(_j));

      _j = ((modelica_integer) 1) + _j;
    }
  }

  tmpMeta3 = mmc_mk_box3(3, &NBMatching_MATCHING__desc, _var_to_eqn, _eqn_to_var);
  _matching_loc = tmpMeta3;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _m_loc = arrayCreate(listLength(_eqn_indices), tmpMeta4);

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = listLength(_eqn_indices);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp5, tmp7); _j += tmp6)
    {
      arrayUpdate(_m_loc,_j,omc_UnorderedMap_getList(threadData, arrayGet(_m,mmc_unbox_integer(arrayGet(_map_back,_j) /* DAE.ASUB */)) /* DAE.ASUB */, _var_loc));
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_matching_loc) { *out_matching_loc = _matching_loc; }
  if (out_map_back) { *out_map_back = _map_back; }
  return _m_loc;
}

static modelica_metatype closure0_NBVariable_isContinuous(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype staticAsContinuous = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isContinuous(thData, var_ptr, staticAsContinuous);
}
DLLDirection
modelica_boolean omc_NBBackendUtil_isContinuousFold(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _staticAsContinuous, modelica_boolean __omcQ_24in_5Fb)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = __omcQ_24in_5Fb;
  if(_b)
  {
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = _exp;
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            modelica_metatype tmpMeta6;
            if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
            
            /* Pattern matching succeeded */
            tmpMeta6 = mmc_mk_box1(0, mmc_mk_boolean(_staticAsContinuous));
            tmp1 = omc_NBVariable_checkCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (modelica_fnptr) mmc_mk_box2(0,closure0_NBVariable_isContinuous,tmpMeta6), _OMC_LIT4);
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
    _b = tmp1;
  }
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBBackendUtil_isContinuousFold(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _staticAsContinuous, modelica_metatype __omcQ_24in_5Fb)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_staticAsContinuous);
  tmp2 = mmc_unbox_integer(__omcQ_24in_5Fb);
  _b = omc_NBBackendUtil_isContinuousFold(threadData, _exp, tmp1, tmp2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

static modelica_metatype closure1_NBBackendUtil_isContinuousFold(threadData_t *thData, modelica_metatype closure, modelica_metatype exp, modelica_metatype $in_b)
{
  modelica_metatype staticAsContinuous = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBBackendUtil_isContinuousFold(thData, exp, staticAsContinuous, $in_b);
}
DLLDirection
modelica_boolean omc_NBBackendUtil_isContinuous(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _staticAsContinuous)
{
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  tmpMeta1 = mmc_mk_box1(0, mmc_mk_boolean(_staticAsContinuous));
  _b = mmc_unbox_boolean(omc_NFExpression_fold(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure1_NBBackendUtil_isContinuousFold,tmpMeta1), mmc_mk_boolean(1 /* true */)));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBBackendUtil_isContinuous(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _staticAsContinuous)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_staticAsContinuous);
  _b = omc_NBBackendUtil_isContinuous(threadData, _exp, tmp1);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NBBackendUtil_isOnlyTimeDependentFold(threadData_t *threadData, modelica_metatype _exp, modelica_boolean __omcQ_24in_5Fb)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = __omcQ_24in_5Fb;
  if(_b)
  {
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = _exp;
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
            
            /* Pattern matching succeeded */
            tmp1 = (omc_NFComponentRef_isTime(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))) || omc_NBVariable_checkCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), boxvar_NBVariable_isParamOrConst, _OMC_LIT5));
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
    _b = tmp1;
  }
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBBackendUtil_isOnlyTimeDependentFold(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fb)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fb);
  _b = omc_NBBackendUtil_isOnlyTimeDependentFold(threadData, _exp, tmp1);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NBBackendUtil_isOnlyTimeDependent(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = mmc_unbox_boolean(omc_NFExpression_fold(threadData, _exp, boxvar_NBBackendUtil_isOnlyTimeDependentFold, mmc_mk_boolean(1 /* true */)));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBBackendUtil_isOnlyTimeDependent(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBBackendUtil_isOnlyTimeDependent(threadData, _exp);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_NBBackendUtil_noNameHashExp(threadData_t *threadData, modelica_metatype _exp, modelica_integer _mod)
{
  modelica_integer _hash;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hash = ((modelica_integer) 0);
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _var = NULL;
      modelica_integer _hash1;
      modelica_integer _hash2;
      int tmp4;
      // _var has no default value.
      // _hash1 has no default value.
      // _hash2 has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer)floor(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = stringHashDjb2Mod((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _mod);
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_Util_boolInt(threadData, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          _var = omc_NBVariable_getVar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _OMC_LIT6);
          tmp1 = stringHashDjb2Mod(omc_NFBackendExtension_BackendInfo_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 11)))), _mod);
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_integer tmp8;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _elem;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), tmp8 = arrayLength(tmpMeta5), tmp7 = 1; tmp7 <= tmp8; tmp7++)
            {
              _elem = arrayGet(tmpMeta5,tmp7);
              _hash = _hash + omc_NBBackendUtil_noNameHashExp(threadData, _elem, _mod);
            }
          }
          tmp1 = _hash + omc_Util_boolInt(threadData, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))));
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _lst;
            for (tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _lst = MMC_CAR(tmpMeta9);
              {
                modelica_metatype _elem;
                for (tmpMeta10 = _lst; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
                {
                  _elem = MMC_CAR(tmpMeta10);
                  _hash = _hash + omc_NBBackendUtil_noNameHashExp(threadData, _elem, _mod);
                }
              }
            }
          }
          tmp1 = _hash;
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))))
          {
            _hash = omc_NBBackendUtil_noNameHashExp(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))), _mod);
          }
          tmp1 = _hash + omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _mod) + omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5))), _mod);
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _elem;
            for (tmpMeta13 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))); !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
            {
              _elem = MMC_CAR(tmpMeta13);
              _hash = _hash + omc_NBBackendUtil_noNameHashExp(threadData, _elem, _mod);
            }
          }
          tmp1 = _hash;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _elem;
            for (tmpMeta15 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))); !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
            {
              _elem = MMC_CAR(tmpMeta15);
              _hash = _hash + omc_NBBackendUtil_noNameHashExp(threadData, _elem, _mod);
            }
          }
          tmp1 = _hash;
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 2);
          goto tmp3_done;
        }
        case 17: {
          
          /* Pattern matching succeeded */
          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))))
          {
            _hash = omc_NBBackendUtil_noNameHashExp(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))), _mod);
          }
          tmp1 = _hash + omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _mod);
          goto tmp3_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          tmp1 = stringHashDjb2Mod(_OMC_LIT7, _mod);
          goto tmp3_done;
        }
        case 19: {
          modelica_integer tmp17 = 0;
          
          /* Pattern matching succeeded */
          _hash1 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _mod);

          _hash2 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _mod);
          { /* match expression */
            modelica_metatype tmp20_1;
            tmp20_1 = omc_NFOperator_classify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));
            {
              volatile mmc_switch_type tmp20;
              int tmp21;
              tmp20 = 0;
              for (; tmp20 < 8; tmp20++) {
                switch (MMC_SWITCH_CAST(tmp20)) {
                case 0: {
                  modelica_metatype tmpMeta22;
                  modelica_integer tmp23;
                  tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp20_1), 1));
                  tmp23 = mmc_unbox_integer(tmpMeta22);
                  if (1 != tmp23) goto tmp19_end;
                  
                  /* Pattern matching succeeded */
                  tmp17 = _hash1 + _hash2;
                  goto tmp19_done;
                }
                case 1: {
                  modelica_metatype tmpMeta24;
                  modelica_integer tmp25;
                  tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp20_1), 1));
                  tmp25 = mmc_unbox_integer(tmpMeta24);
                  if (2 != tmp25) goto tmp19_end;
                  
                  /* Pattern matching succeeded */
                  tmp17 = _hash1 - _hash2;
                  goto tmp19_done;
                }
                case 2: {
                  modelica_metatype tmpMeta26;
                  modelica_integer tmp27;
                  tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp20_1), 1));
                  tmp27 = mmc_unbox_integer(tmpMeta26);
                  if (3 != tmp27) goto tmp19_end;
                  
                  /* Pattern matching succeeded */
                  tmp17 = (_hash1) * (_hash2);
                  goto tmp19_done;
                }
                case 3: {
                  modelica_metatype tmpMeta28;
                  modelica_integer tmp29;
                  modelica_real tmp30;
                  tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp20_1), 1));
                  tmp29 = mmc_unbox_integer(tmpMeta28);
                  if (4 != tmp29) goto tmp19_end;
                  
                  /* Pattern matching succeeded */
                  tmp30 = ((modelica_real)_hash2);
                  if (tmp30 == 0) {goto goto_18;}
                  tmp17 = ((modelica_integer)floor((((modelica_real)_hash1)) / tmp30));
                  goto tmp19_done;
                }
                case 4: {
                  modelica_metatype tmpMeta31;
                  modelica_integer tmp32;
                  modelica_real tmp33;
                  modelica_real tmp34;
                  modelica_real tmp35;
                  modelica_real tmp36;
                  modelica_real tmp37;
                  modelica_real tmp38;
                  modelica_real tmp39;
                  tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp20_1), 1));
                  tmp32 = mmc_unbox_integer(tmpMeta31);
                  if (5 != tmp32) goto tmp19_end;
                  
                  /* Pattern matching succeeded */
                  tmp33 = ((modelica_real)_hash1);
                  tmp34 = ((modelica_real)_hash2);
                  if(tmp33 < 0.0 && tmp34 != 0.0)
                  {
                    tmp36 = modf(tmp34, &tmp37);
                    
                    if(tmp36 > 0.5)
                    {
                      tmp36 -= 1.0;
                      tmp37 += 1.0;
                    }
                    else if(tmp36 < -0.5)
                    {
                      tmp36 += 1.0;
                      tmp37 -= 1.0;
                    }
                    
                    if(fabs(tmp36) < 1e-10)
                      tmp35 = pow(tmp33, tmp37);
                    else
                    {
                      tmp39 = modf(1.0/tmp34, &tmp38);
                      if(tmp39 > 0.5)
                      {
                        tmp39 -= 1.0;
                        tmp38 += 1.0;
                      }
                      else if(tmp39 < -0.5)
                      {
                        tmp39 += 1.0;
                        tmp38 -= 1.0;
                      }
                      if(fabs(tmp39) < 1e-10 && ((unsigned long)tmp38 & 1))
                      {
                        tmp35 = -pow(-tmp33, tmp36)*pow(tmp33, tmp37);
                      }
                      else
                      {
                        goto goto_18;
                      }
                    }
                  }
                  else
                  {
                    tmp35 = pow(tmp33, tmp34);
                  }
                  if(isnan(tmp35) || isinf(tmp35))
                  {
                    goto goto_18;
                  }tmp17 = ((modelica_integer)floor(tmp35));
                  goto tmp19_done;
                }
                case 5: {
                  modelica_metatype tmpMeta40;
                  modelica_integer tmp41;
                  tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp20_1), 1));
                  tmp41 = mmc_unbox_integer(tmpMeta40);
                  if (6 != tmp41) goto tmp19_end;
                  
                  /* Pattern matching succeeded */
                  tmp17 = (-_hash1) - _hash2;
                  goto tmp19_done;
                }
                case 6: {
                  modelica_metatype tmpMeta42;
                  modelica_integer tmp43;
                  tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp20_1), 1));
                  tmp43 = mmc_unbox_integer(tmpMeta42);
                  if (7 != tmp43) goto tmp19_end;
                  
                  /* Pattern matching succeeded */
                  tmp17 = _hash2 - _hash1;
                  goto tmp19_done;
                }
                case 7: {
                  
                  /* Pattern matching succeeded */
                  tmp17 = _hash2 - _hash1;
                  goto tmp19_done;
                }
                }
                goto tmp19_end;
                tmp19_end: ;
              }
              goto goto_18;
              goto_18:;
              goto goto_2;
              goto tmp19_done;
              tmp19_done:;
            }
          }tmp1 = tmp17;
          goto tmp3_done;
        }
        case 20: {
          
          /* Pattern matching succeeded */
          tmp1 = (-omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _mod));
          goto tmp3_done;
        }
        case 21: {
          modelica_integer tmp44 = 0;
          
          /* Pattern matching succeeded */
          _hash1 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _mod);

          _hash2 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _mod);
          { /* match expression */
            modelica_metatype tmp47_1;
            tmp47_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))), 3)));
            {
              int tmp47;
              {
                switch (MMC_SWITCH_CAST(mmc_unbox_integer(tmp47_1))) {
                case 27: {
                  modelica_integer tmp48;
                  tmp48 = mmc_unbox_integer(tmp47_1);
                  if (27 != tmp48) goto tmp46_end;
                  /* Pattern matching succeeded */
                  tmp44 = _hash1 + _hash2;
                  goto tmp46_done;
                }
                case 28: {
                  modelica_integer tmp49;
                  tmp49 = mmc_unbox_integer(tmp47_1);
                  if (28 != tmp49) goto tmp46_end;
                  /* Pattern matching succeeded */
                  tmp44 = _hash1 - _hash2;
                  goto tmp46_done;
                }
                default:
                tmp46_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  tmp44 = _hash2 - _hash1;
                  goto tmp46_done;
                }
                }
                goto tmp46_end;
                tmp46_end: ;
              }
              goto goto_45;
              goto_45:;
              goto goto_2;
              goto tmp46_done;
              tmp46_done:;
            }
          }tmp1 = tmp44;
          goto tmp3_done;
        }
        case 22: {
          
          /* Pattern matching succeeded */
          tmp1 = (-omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _mod));
          goto tmp3_done;
        }
        case 23: {
          modelica_integer tmp50 = 0;
          
          /* Pattern matching succeeded */
          _hash1 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _mod);

          _hash2 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _mod);
          { /* match expression */
            modelica_metatype tmp53_1;
            tmp53_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))), 3)));
            {
              int tmp53;
              {
                switch (MMC_SWITCH_CAST(mmc_unbox_integer(tmp53_1))) {
                case 30: {
                  modelica_integer tmp54;
                  tmp54 = mmc_unbox_integer(tmp53_1);
                  if (30 != tmp54) goto tmp52_end;
                  /* Pattern matching succeeded */
                  tmp50 = _hash1 + _hash2;
                  goto tmp52_done;
                }
                case 31: {
                  modelica_integer tmp55;
                  tmp55 = mmc_unbox_integer(tmp53_1);
                  if (31 != tmp55) goto tmp52_end;
                  /* Pattern matching succeeded */
                  tmp50 = (-_hash1) - _hash2;
                  goto tmp52_done;
                }
                case 32: {
                  modelica_integer tmp56;
                  tmp56 = mmc_unbox_integer(tmp53_1);
                  if (32 != tmp56) goto tmp52_end;
                  /* Pattern matching succeeded */
                  tmp50 = _hash1 - _hash2;
                  goto tmp52_done;
                }
                case 33: {
                  modelica_integer tmp57;
                  tmp57 = mmc_unbox_integer(tmp53_1);
                  if (33 != tmp57) goto tmp52_end;
                  /* Pattern matching succeeded */
                  tmp50 = _hash2 - _hash1;
                  goto tmp52_done;
                }
                case 34: {
                  modelica_integer tmp58;
                  tmp58 = mmc_unbox_integer(tmp53_1);
                  if (34 != tmp58) goto tmp52_end;
                  /* Pattern matching succeeded */
                  tmp50 = (_hash1) * (_hash2);
                  goto tmp52_done;
                }
                case 35: {
                  modelica_integer tmp59;
                  modelica_real tmp60;
                  modelica_real tmp61;
                  modelica_real tmp62;
                  modelica_real tmp63;
                  modelica_real tmp64;
                  modelica_real tmp65;
                  modelica_real tmp66;
                  tmp59 = mmc_unbox_integer(tmp53_1);
                  if (35 != tmp59) goto tmp52_end;
                  /* Pattern matching succeeded */
                  tmp60 = ((modelica_real)_hash1);
                  tmp61 = ((modelica_real)_hash2);
                  if(tmp60 < 0.0 && tmp61 != 0.0)
                  {
                    tmp63 = modf(tmp61, &tmp64);
                    
                    if(tmp63 > 0.5)
                    {
                      tmp63 -= 1.0;
                      tmp64 += 1.0;
                    }
                    else if(tmp63 < -0.5)
                    {
                      tmp63 += 1.0;
                      tmp64 -= 1.0;
                    }
                    
                    if(fabs(tmp63) < 1e-10)
                      tmp62 = pow(tmp60, tmp64);
                    else
                    {
                      tmp66 = modf(1.0/tmp61, &tmp65);
                      if(tmp66 > 0.5)
                      {
                        tmp66 -= 1.0;
                        tmp65 += 1.0;
                      }
                      else if(tmp66 < -0.5)
                      {
                        tmp66 += 1.0;
                        tmp65 -= 1.0;
                      }
                      if(fabs(tmp66) < 1e-10 && ((unsigned long)tmp65 & 1))
                      {
                        tmp62 = -pow(-tmp60, tmp63)*pow(tmp60, tmp64);
                      }
                      else
                      {
                        goto goto_51;
                      }
                    }
                  }
                  else
                  {
                    tmp62 = pow(tmp60, tmp61);
                  }
                  if(isnan(tmp62) || isinf(tmp62))
                  {
                    goto goto_51;
                  }tmp50 = ((modelica_integer)floor(tmp62));
                  goto tmp52_done;
                }
                default:
                tmp52_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  tmp50 = _hash2 - _hash1;
                  goto tmp52_done;
                }
                }
                goto tmp52_end;
                tmp52_end: ;
              }
              goto goto_51;
              goto_51:;
              goto goto_2;
              goto tmp52_done;
              tmp52_done:;
            }
          }tmp1 = tmp50;
          goto tmp3_done;
        }
        case 25: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _mod) + omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _mod) + omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5))), _mod);
          goto tmp3_done;
        }
        case 26: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _mod);
          goto tmp3_done;
        }
        case 27: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _mod);
          goto tmp3_done;
        }
        case 28: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _mod);
          goto tmp3_done;
        }
        case 29: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _mod);
          goto tmp3_done;
        }
        case 30: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _mod) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));
          goto tmp3_done;
        }
        case 31: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBBackendUtil_noNameHashExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _mod) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));
          goto tmp3_done;
        }
        case 32: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NBBackendUtil_noNameHashExp(threadData, omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))), _mod);
          goto tmp3_done;
        }
        case 33: {
          
          /* Pattern matching succeeded */
          tmp1 = stringHashDjb2Mod(_OMC_LIT8, _mod);
          goto tmp3_done;
        }
        case 34: {
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _arg;
            for (tmpMeta67 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))); !listEmpty(tmpMeta67); tmpMeta67=MMC_CDR(tmpMeta67))
            {
              _arg = MMC_CAR(tmpMeta67);
              _hash = _hash + omc_NBBackendUtil_noNameHashExp(threadData, _arg, _mod);
            }
          }
          tmp1 = _hash;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _hash = tmp1;

  _hash = modelica_integer_mod(labs(_hash), _mod);
  _return: OMC_LABEL_UNUSED
  return _hash;
}
modelica_metatype boxptr_NBBackendUtil_noNameHashExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _mod)
{
  modelica_integer tmp1;
  modelica_integer _hash;
  modelica_metatype out_hash;
  tmp1 = mmc_unbox_integer(_mod);
  _hash = omc_NBBackendUtil_noNameHashExp(threadData, _exp, tmp1);
  out_hash = mmc_mk_icon(_hash);
  return out_hash;
}

DLLDirection
modelica_integer omc_NBBackendUtil_noNameHashEq(threadData_t *threadData, modelica_metatype _eq, modelica_integer _mod)
{
  modelica_integer _hash;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hash has no default value.
  _hash = omc_NBBackendUtil_noNameHashExp(threadData, omc_NBEquation_Equation_getResidualExp(threadData, _eq, 1 /* true */), _mod);
  _return: OMC_LABEL_UNUSED
  return _hash;
}
modelica_metatype boxptr_NBBackendUtil_noNameHashEq(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _mod)
{
  modelica_integer tmp1;
  modelica_integer _hash;
  modelica_metatype out_hash;
  tmp1 = mmc_unbox_integer(_mod);
  _hash = omc_NBBackendUtil_noNameHashEq(threadData, _eq, tmp1);
  out_hash = mmc_mk_icon(_hash);
  return out_hash;
}

DLLDirection
modelica_boolean omc_NBBackendUtil_indexTplGt(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2)
{
  modelica_boolean _gt;
  modelica_integer _i1;
  modelica_integer _i2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _gt has no default value.
  // _i1 has no default value.
  // _i2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _i1 = tmp3  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta4 = _tpl2;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _i2 = tmp6  /* pattern as ty=Integer */;

  _gt = (_i1 > _i2);
  _return: OMC_LABEL_UNUSED
  return _gt;
}
modelica_metatype boxptr_NBBackendUtil_indexTplGt(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2)
{
  modelica_boolean _gt;
  modelica_metatype out_gt;
  _gt = omc_NBBackendUtil_indexTplGt(threadData, _tpl1, _tpl2);
  out_gt = mmc_mk_icon(_gt);
  return out_gt;
}

DLLDirection
modelica_integer omc_NBBackendUtil_countElem(threadData_t *threadData, modelica_metatype _m)
{
  modelica_integer _count;
  modelica_integer tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_integer __omcQ_24tmpVar1;
    modelica_integer __omcQ_24tmpVar0;
    modelica_integer tmp2;
    modelica_metatype _lst_loopVar = 0;
    modelica_integer tmp3;
    modelica_metatype _lst;
    _lst_loopVar = _m;
    tmp3 = 1;
    __omcQ_24tmpVar1 = ((modelica_integer) 0); /* defaultValue */
    while(1) {
      tmp2 = 1;
      if (tmp3 <= arrayLength(_lst_loopVar)) {
        _lst = arrayGet(_lst_loopVar, tmp3++);
        tmp2--;
      }
      if (tmp2 == 0) {
        __omcQ_24tmpVar0 = listLength(_lst);
        __omcQ_24tmpVar1 = __omcQ_24tmpVar1 + __omcQ_24tmpVar0;
      } else if (tmp2 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmp1 = __omcQ_24tmpVar1;
  }
  _count = tmp1;
  _return: OMC_LABEL_UNUSED
  return _count;
}
modelica_metatype boxptr_NBBackendUtil_countElem(threadData_t *threadData, modelica_metatype _m)
{
  modelica_integer _count;
  modelica_integer tmp1;
  modelica_metatype out_count;
  _count = omc_NBBackendUtil_countElem(threadData, _m);
  out_count = mmc_mk_icon(_count);
  return out_count;
}

DLLDirection
modelica_metatype omc_NBBackendUtil_findTrueIndices(threadData_t *threadData, modelica_metatype _arr)
{
  modelica_metatype _indices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_integer tmp5;
    modelica_integer tmp6;
    modelica_integer _i;
    tmp5 = ((modelica_integer) -1) /* Range step-value */;
    tmp6 = ((modelica_integer) 1) /* Range stop-value */;
    _i = arrayLength(_arr) /* Range start-value */;
    _i = (arrayLength(_arr) /* Range start-value */)-tmp5;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      while (tmp5 > 0 ? _i+tmp5 <= tmp6 : _i+tmp5 >= tmp6) {
        _i += tmp5;
        if (mmc_unbox_boolean(arrayGet(_arr,_i) /* DAE.ASUB */)) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = mmc_mk_integer(_i);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  _indices = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _indices;
}

DLLDirection
modelica_metatype omc_NBBackendUtil_convertRational(threadData_t *threadData, modelica_metatype _r)
{
  modelica_metatype _oldR = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_r), 3))));
  _oldR = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldR;
}

