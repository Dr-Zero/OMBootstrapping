#include "omc_simulation_settings.h"
#include "NFSimplifyModel.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1,0.0);
#define _OMC_LIT1 MMC_REFREALLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,4,3) {&NFCeval_EvalTarget_EVAL__TARGET__desc,_OMC_LIT2,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,5) {&NFComponentRef_WILD__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "NFSimplifyModel.simplify"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,24,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#include "util/modelica.h"

#include "NFSimplifyModel_includes.h"



DLLDirection
modelica_metatype omc_NFSimplifyModel_combineBinaries(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp5;
    modelica_metatype _var_loopVar = 0;
    modelica_metatype _var;
    _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar3;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_var_loopVar)) {
        _var = MMC_CAR(_var_loopVar);
        _var_loopVar = MMC_CDR(_var_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar2 = omc_NFVariable_mapExp(threadData, _var, boxvar_NFSimplifyExp_combineBinaries);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar3;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
  _flatModel = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp8;
    modelica_metatype tmpMeta9;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp10;
    modelica_metatype _eqn_loopVar = 0;
    modelica_metatype _eqn;
    _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4)));
    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta9; /* defaultValue */
    tmp8 = &__omcQ_24tmpVar5;
    while(1) {
      tmp10 = 1;
      if (!listEmpty(_eqn_loopVar)) {
        _eqn = MMC_CAR(_eqn_loopVar);
        _eqn_loopVar = MMC_CDR(_eqn_loopVar);
        tmp10--;
      }
      if (tmp10 == 0) {
        __omcQ_24tmpVar4 = omc_NFEquation_mapExp(threadData, _eqn, boxvar_NFSimplifyExp_combineBinaries);
        *tmp8 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp8 = &MMC_CDR(*tmp8);
      } else if (tmp10 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp8 = mmc_mk_nil();
    tmpMeta7 = __omcQ_24tmpVar5;
  }
  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = tmpMeta7;
  _flatModel = tmpMeta6;

  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp13;
    modelica_metatype tmpMeta14;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp15;
    modelica_metatype _eqn_loopVar = 0;
    modelica_metatype _eqn;
    _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5)));
    tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta14; /* defaultValue */
    tmp13 = &__omcQ_24tmpVar7;
    while(1) {
      tmp15 = 1;
      if (!listEmpty(_eqn_loopVar)) {
        _eqn = MMC_CAR(_eqn_loopVar);
        _eqn_loopVar = MMC_CDR(_eqn_loopVar);
        tmp15--;
      }
      if (tmp15 == 0) {
        __omcQ_24tmpVar6 = omc_NFEquation_mapExp(threadData, _eqn, boxvar_NFSimplifyExp_combineBinaries);
        *tmp13 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp13 = &MMC_CDR(*tmp13);
      } else if (tmp15 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp13 = mmc_mk_nil();
    tmpMeta12 = __omcQ_24tmpVar7;
  }
  tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[5] = tmpMeta12;
  _flatModel = tmpMeta11;

  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp18;
    modelica_metatype tmpMeta19;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp20;
    modelica_metatype _alg_loopVar = 0;
    modelica_metatype _alg;
    _alg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6)));
    tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta19; /* defaultValue */
    tmp18 = &__omcQ_24tmpVar9;
    while(1) {
      tmp20 = 1;
      if (!listEmpty(_alg_loopVar)) {
        _alg = MMC_CAR(_alg_loopVar);
        _alg_loopVar = MMC_CDR(_alg_loopVar);
        tmp20--;
      }
      if (tmp20 == 0) {
        __omcQ_24tmpVar8 = omc_NFAlgorithm_mapExp(threadData, _alg, boxvar_NFSimplifyExp_combineBinaries);
        *tmp18 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp18 = &MMC_CDR(*tmp18);
      } else if (tmp20 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp18 = mmc_mk_nil();
    tmpMeta17 = __omcQ_24tmpVar9;
  }
  tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[6] = tmpMeta17;
  _flatModel = tmpMeta16;

  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp23;
    modelica_metatype tmpMeta24;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp25;
    modelica_metatype _alg_loopVar = 0;
    modelica_metatype _alg;
    _alg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7)));
    tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta24; /* defaultValue */
    tmp23 = &__omcQ_24tmpVar11;
    while(1) {
      tmp25 = 1;
      if (!listEmpty(_alg_loopVar)) {
        _alg = MMC_CAR(_alg_loopVar);
        _alg_loopVar = MMC_CDR(_alg_loopVar);
        tmp25--;
      }
      if (tmp25 == 0) {
        __omcQ_24tmpVar10 = omc_NFAlgorithm_mapExp(threadData, _alg, boxvar_NFSimplifyExp_combineBinaries);
        *tmp23 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp23 = &MMC_CDR(*tmp23);
      } else if (tmp25 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp23 = mmc_mk_nil();
    tmpMeta22 = __omcQ_24tmpVar11;
  }
  tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[7] = tmpMeta22;
  _flatModel = tmpMeta21;
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

static modelica_metatype closure0_NFSimplifyExp_simplify(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype includeScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplify(thData, $in_exp, includeScope);
}static modelica_metatype closure1_NFSimplifyExp_simplify(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype includeScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplify(thData, $in_exp, includeScope);
}
DLLDirection
void omc_NFSimplifyModel_simplifyFunction(threadData_t *threadData, modelica_metatype _func)
{
  modelica_metatype _cls = NULL;
  modelica_metatype _fn_body = NULL;
  modelica_metatype _sections = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cls has no default value.
  // _fn_body has no default value.
  // _sections has no default value.
  if((!omc_NFFunction_Function_isSimplified(threadData, _func)))
  {
    omc_NFFunction_Function_markSimplified(threadData, _func);

    tmpMeta1 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
    tmpMeta2 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
    omc_NFFunction_Function_mapExp(threadData, _func, (modelica_fnptr) mmc_mk_box2(0,closure0_NFSimplifyExp_simplify,tmpMeta1), (modelica_fnptr) mmc_mk_box2(0,closure1_NFSimplifyExp_simplify,tmpMeta2), 1 /* true */, 0 /* false */);

    _cls = omc_NFInstNode_InstNode_getClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3))));

    { /* match expression */
      modelica_metatype tmp5_1;
      tmp5_1 = _cls;
      {
        volatile mmc_switch_type tmp5;
        int tmp6;
        tmp5 = 0;
        for (; tmp5 < 2; tmp5++) {
          switch (MMC_SWITCH_CAST(tmp5)) {
          case 0: {
            modelica_metatype tmpMeta7;
            if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,5,5) == 0) goto tmp4_end;
            tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 4));
            
            _sections = tmpMeta7;
            /* Pattern matching succeeded */
            { /* match expression */
              modelica_metatype tmp10_1;
              tmp10_1 = _sections;
              {
                volatile mmc_switch_type tmp10;
                int tmp11;
                tmp10 = 0;
                for (; tmp10 < 2; tmp10++) {
                  switch (MMC_SWITCH_CAST(tmp10)) {
                  case 0: {
                    modelica_metatype tmpMeta12;
                    modelica_metatype tmpMeta13;
                    modelica_metatype tmpMeta14;
                    modelica_metatype tmpMeta15;
                    modelica_metatype tmpMeta16;
                    modelica_metatype tmpMeta17;
                    modelica_metatype tmpMeta18;
                    if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,4) == 0) goto tmp9_end;
                    tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 4));
                    if (listEmpty(tmpMeta12)) goto tmp9_end;
                    tmpMeta13 = MMC_CAR(tmpMeta12);
                    tmpMeta14 = MMC_CDR(tmpMeta12);
                    if (!listEmpty(tmpMeta14)) goto tmp9_end;
                    
                    _fn_body = tmpMeta13;
                    /* Pattern matching succeeded */
                    tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(7));
                    memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_fn_body), 7*sizeof(modelica_metatype));
                    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = omc_NFSimplifyModel_simplifyStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn_body), 2))));
                    _fn_body = tmpMeta15;

                    tmpMeta17 = mmc_mk_cons(_fn_body, MMC_REFSTRUCTLIT(mmc_nil));
                    tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(6));
                    memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_sections), 6*sizeof(modelica_metatype));
                    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[4] = tmpMeta17;
                    _sections = tmpMeta16;

                    tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(7));
                    memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_cls), 7*sizeof(modelica_metatype));
                    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[4] = _sections;
                    _cls = tmpMeta18;

                    omc_NFInstNode_InstNode_updateClass(threadData, _cls, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3))));
                    goto tmp9_done;
                  }
                  case 1: {
                    
                    /* Pattern matching succeeded */
                    goto tmp9_done;
                  }
                  }
                  goto tmp9_end;
                  tmp9_end: ;
                }
                goto goto_8;
                goto_8:;
                goto goto_3;
                goto tmp9_done;
                tmp9_done:;
              }
            }
            ;
            goto tmp4_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
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
    ;

    {
      modelica_metatype _fn_der;
      for (tmpMeta19 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 10))); !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
      {
        _fn_der = MMC_CAR(tmpMeta19);
        {
          modelica_metatype _der_fn;
          for (tmpMeta20 = omc_NFFunction_Function_getCachedFuncs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn_der), 2)))); !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
          {
            _der_fn = MMC_CAR(tmpMeta20);
            omc_NFSimplifyModel_simplifyFunction(threadData, _der_fn);
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyIfStmtBranches(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _src, modelica_fnptr _makeFunc, modelica_fnptr _simplifyFunc, modelica_metatype __omcQ_24in_5Felements)
{
  modelica_metatype _elements = NULL;
  modelica_metatype _cond = NULL;
  modelica_metatype _body = NULL;
  modelica_metatype _accum = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _elements = __omcQ_24in_5Felements;
  // _cond has no default value.
  // _body has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _accum = tmpMeta1;
  {
    modelica_metatype _branch;
    for (tmpMeta2 = _branches; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _branch = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _branch;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _cond = tmpMeta4;
      _body = tmpMeta5;

      _cond = omc_NFSimplifyExp_simplify(threadData, _cond, 0 /* false */);

      if(omc_NFExpression_isTrue(threadData, _cond))
      {
        if(listEmpty(_accum))
        {
          _elements = listAppend(listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 2))), _body) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 1)))) (threadData, _body)), _elements);

          goto _return;
        }
        else
        {
          tmpMeta7 = mmc_mk_box2(0, _cond, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 2))), _body) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 1)))) (threadData, _body));
          tmpMeta6 = mmc_mk_cons(tmpMeta7, _accum);
          _accum = tmpMeta6;

          break;
        }
      }
      else
      {
        if((!omc_NFExpression_isFalse(threadData, _cond)))
        {
          tmpMeta9 = mmc_mk_box2(0, _cond, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 2))), _body) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simplifyFunc), 1)))) (threadData, _body));
          tmpMeta8 = mmc_mk_cons(tmpMeta9, _accum);
          _accum = tmpMeta8;
        }
      }
    }
  }

  if((!listEmpty(_accum)))
  {
    tmpMeta11 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeFunc), 2))), listReverseInPlace(_accum), _src) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeFunc), 1)))) (threadData, listReverseInPlace(_accum), _src), _elements);
    _elements = tmpMeta11;
  }
  _return: OMC_LABEL_UNUSED
  return _elements;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyIfEqBranches(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _scope, modelica_metatype _src, modelica_metatype __omcQ_24in_5Felements)
{
  modelica_metatype _elements = NULL;
  modelica_metatype _cond = NULL;
  modelica_metatype _body = NULL;
  modelica_integer _var;
  modelica_metatype _accum = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _elements = __omcQ_24in_5Felements;
  // _cond has no default value.
  // _body has no default value.
  // _var has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _accum = tmpMeta1;
  {
    modelica_metatype _branch;
    for (tmpMeta2 = _branches; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _branch = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp6_1;
        tmp6_1 = _branch;
        {
          volatile mmc_switch_type tmp6;
          int tmp7;
          tmp6 = 0;
          for (; tmp6 < 3; tmp6++) {
            switch (MMC_SWITCH_CAST(tmp6)) {
            case 0: {
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              modelica_integer tmp10;
              modelica_metatype tmpMeta11;
              modelica_metatype tmpMeta12;
              modelica_metatype tmpMeta13;
              modelica_metatype tmpMeta14;
              modelica_metatype tmpMeta15;
              modelica_metatype tmpMeta16;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,3) == 0) goto tmp5_end;
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmp10 = mmc_unbox_integer(tmpMeta9);
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              _cond = tmpMeta8;
              _var = tmp10  /* pattern as ty=enumeration(CONSTANT, STRUCTURAL_PARAMETER, PARAMETER, NON_STRUCTURAL_PARAMETER, DISCRETE, IMPLICITLY_DISCRETE, CONTINUOUS) */;
              _body = tmpMeta11;
              /* Pattern matching succeeded */
              _cond = omc_NFSimplifyExp_simplify(threadData, _cond, 0 /* false */);

              if(omc_NFExpression_isTrue(threadData, _cond))
              {
                if(listEmpty(_accum))
                {
                  {
                    modelica_metatype _eq;
                    for (tmpMeta12 = _body; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
                    {
                      _eq = MMC_CAR(tmpMeta12);
                      _elements = omc_NFSimplifyModel_simplifyEquation(threadData, _eq, _elements);
                    }
                  }

                  goto _return;
                }
                else
                {
                  tmpMeta14 = mmc_mk_cons(omc_NFEquation_makeBranch(threadData, _cond, omc_NFSimplifyModel_simplifyEquations(threadData, _body), 7), _accum);
                  _accum = tmpMeta14;

                  _accum = omc_List_trim(threadData, _accum, boxvar_NFEquation_Branch_isEmpty);

                  tmpMeta15 = mmc_mk_cons(omc_NFEquation_makeIf(threadData, listReverseInPlace(_accum), _scope, _src), _elements);
                  _elements = tmpMeta15;

                  goto _return;
                }
              }
              else
              {
                if((!omc_NFExpression_isFalse(threadData, _cond)))
                {
                  tmpMeta16 = mmc_mk_cons(omc_NFEquation_makeBranch(threadData, _cond, omc_NFSimplifyModel_simplifyEquations(threadData, _body), 7), _accum);
                  _accum = tmpMeta16;
                }
              }
              tmpMeta3 = _accum;
              goto tmp5_done;
            }
            case 1: {
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              modelica_integer tmp20;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,1,2) == 0) goto tmp5_end;
              tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,3) == 0) goto tmp5_end;
              tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
              tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 3));
              tmp20 = mmc_unbox_integer(tmpMeta19);
              
              _cond = tmpMeta18;
              _var = tmp20  /* pattern as ty=enumeration(CONSTANT, STRUCTURAL_PARAMETER, PARAMETER, NON_STRUCTURAL_PARAMETER, DISCRETE, IMPLICITLY_DISCRETE, CONTINUOUS) */;
              /* Pattern matching succeeded */
              if(((modelica_integer)_var <= 2))
              {
                _cond = omc_NFCeval_evalExp(threadData, _cond, _OMC_LIT3);
              }

              if((!omc_NFExpression_isFalse(threadData, _cond)))
              {
                omc_NFEquation_Branch_triggerErrors(threadData, _branch);
              }
              tmpMeta3 = _accum;
              goto tmp5_done;
            }
            case 2: {
              modelica_metatype tmpMeta21;
              
              /* Pattern matching succeeded */
              tmpMeta21 = mmc_mk_cons(_branch, _accum);
              tmpMeta3 = tmpMeta21;
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
      _accum = tmpMeta3;
    }
  }

  _accum = omc_List_trim(threadData, _accum, boxvar_NFEquation_Branch_isEmpty);

  if((!listEmpty(_accum)))
  {
    tmpMeta23 = mmc_mk_cons(omc_NFEquation_makeIf(threadData, listReverseInPlace(_accum), _scope, _src), _elements);
    _elements = tmpMeta23;
  }
  _return: OMC_LABEL_UNUSED
  return _elements;
}

static modelica_metatype closure2_NFSimplifyModel_removeEmptyFunctionArguments(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype isArg = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyModel_removeEmptyFunctionArguments(thData, exp, isArg);
}
DLLDirection
modelica_metatype omc_NFSimplifyModel_removeEmptyFunctionArguments(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _isArg)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _is_arg;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _is_arg has no default value.
  if(_isArg)
  {
    { /* match expression */
      modelica_metatype tmp3_1;
      tmp3_1 = _exp;
      {
        volatile mmc_switch_type tmp3;
        int tmp4;
        tmp3 = 0;
        for (; tmp3 < 2; tmp3++) {
          switch (MMC_SWITCH_CAST(tmp3)) {
          case 0: {
            if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
            
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!omc_NFType_isEmptyArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))))) goto tmp2_end;
            _outExp = omc_NFExpression_fillType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _OMC_LIT4);

            goto _return;
            goto tmp2_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            goto tmp2_done;
          }
          }
          goto tmp2_end;
          tmp2_end: ;
        }
        goto goto_1;
        goto_1:;
        MMC_THROW_INTERNAL();
        goto tmp2_done;
        tmp2_done:;
      }
    }
    ;
  }

  _is_arg = (_isArg || omc_NFExpression_isCall(threadData, _exp));

  tmpMeta5 = mmc_mk_box1(0, mmc_mk_boolean(_is_arg));
  _outExp = omc_NFExpression_mapShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure2_NFSimplifyModel_removeEmptyFunctionArguments,tmpMeta5));
  _return: OMC_LABEL_UNUSED
  return _outExp;
}
modelica_metatype boxptr_NFSimplifyModel_removeEmptyFunctionArguments(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _isArg)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_isArg);
  _outExp = omc_NFSimplifyModel_removeEmptyFunctionArguments(threadData, _exp, tmp1);
  /* skip box _outExp; NFExpression */
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_removeEmptyTupleElements(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      modelica_metatype _tyl = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _tyl has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,11,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,8,2) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          
          _tyl = tmpMeta6;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp9;
            modelica_metatype tmpMeta10;
            modelica_metatype tmpMeta11;
            modelica_boolean tmp12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp14;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            modelica_metatype _t_loopVar = 0;
            modelica_metatype _t;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
            _t_loopVar = _tyl;
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta10; /* defaultValue */
            tmp9 = &__omcQ_24tmpVar13;
            while(1) {
              tmp14 = 2;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp14--;
              }if (!listEmpty(_t_loopVar)) {
                _t = MMC_CAR(_t_loopVar);
                _t_loopVar = MMC_CDR(_t_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                tmp12 = (modelica_boolean)omc_NFType_isEmptyArray(threadData, _t);
                if(tmp12)
                {
                  tmpMeta11 = mmc_mk_box3(9, &NFExpression_CREF__desc, _t, _OMC_LIT5);
                  tmpMeta13 = tmpMeta11;
                }
                else
                {
                  tmpMeta13 = _e;
                }
                __omcQ_24tmpVar12 = tmpMeta13;
                *tmp9 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp9 = &MMC_CDR(*tmp9);
              } else if (tmp14 == 2) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp9 = mmc_mk_nil();
            tmpMeta8 = __omcQ_24tmpVar13;
          }
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = tmpMeta8;
          _exp = tmpMeta7;
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyTupleElement(threadData_t *threadData, modelica_metatype _lhsTuple, modelica_metatype _rhsTuple, modelica_metatype _ty, modelica_metatype _src, modelica_fnptr _makeFn, modelica_metatype __omcQ_24in_5Fstatements)
{
  modelica_metatype _statements = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _rest_rhs = NULL;
  modelica_metatype _ety = NULL;
  modelica_metatype _rest_ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _statements = __omcQ_24in_5Fstatements;
  // _rhs has no default value.
  _rest_rhs = _rhsTuple;
  // _ety has no default value.
  // _rest_ty has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _ty;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,8,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _rest_ty = tmpMeta2;

  {
    modelica_metatype _lhs;
    for (tmpMeta3 = _lhsTuple; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _lhs = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _rest_rhs;
      if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
      tmpMeta5 = MMC_CAR(tmpMeta4);
      tmpMeta6 = MMC_CDR(tmpMeta4);
      _rhs = tmpMeta5;
      _rest_rhs = tmpMeta6;

      /* Pattern-matching assignment */
      tmpMeta7 = _rest_ty;
      if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
      tmpMeta8 = MMC_CAR(tmpMeta7);
      tmpMeta9 = MMC_CDR(tmpMeta7);
      _ety = tmpMeta8;
      _rest_ty = tmpMeta9;

      if((!omc_NFExpression_isWildCref(threadData, _lhs)))
      {
        tmpMeta10 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeFn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeFn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeFn), 2))), _lhs, _rhs, _ety, _src) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeFn), 1)))) (threadData, _lhs, _rhs, _ety, _src), _statements);
        _statements = tmpMeta10;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _statements;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyAssignment(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype __omcQ_24in_5Fstatements)
{
  modelica_metatype _statements = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _rhs_exp = NULL;
  modelica_metatype _rhs_rest = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _statements = __omcQ_24in_5Fstatements;
  // _lhs has no default value.
  // _rhs has no default value.
  // _rhs_exp has no default value.
  // _rhs_rest has no default value.
  // _ty has no default value.
  // _src has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _stmt;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _lhs = tmpMeta2;
  _rhs = tmpMeta3;
  _ty = tmpMeta4;
  _src = tmpMeta5;

  _ty = omc_NFType_mapDims(threadData, _ty, boxvar_NFSimplifyModel_simplifyDimension);

  if(omc_NFType_isEmptyArray(threadData, _ty))
  {
    goto _return;
  }

  _lhs = omc_NFSimplifyExp_simplify(threadData, _lhs, 0 /* false */);

  _lhs = omc_NFSimplifyModel_removeEmptyTupleElements(threadData, _lhs);

  _rhs = omc_NFSimplifyExp_simplify(threadData, _rhs, 0 /* false */);

  _rhs = omc_NFSimplifyModel_removeEmptyFunctionArguments(threadData, _rhs, 0 /* false */);

  { /* match expression */
    modelica_metatype tmp9_1;modelica_metatype tmp9_2;
    tmp9_1 = _lhs;
    tmp9_2 = _rhs;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,11,2) == 0) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,11,2) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_NFSimplifyModel_simplifyTupleElement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 3))), _ty, _src, boxvar_NFStatement_makeAssignment, _statements);
          goto tmp8_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box5(3, &NFStatement_ASSIGNMENT__desc, _lhs, _rhs, _ty, _src);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, _statements);
          tmpMeta6 = tmpMeta11;
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      goto_7:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _statements = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _statements;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyWhenBranches(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbranches)
{
  modelica_metatype _branches = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _branches = __omcQ_24in_5Fbranches;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _branches;
    {
      modelica_metatype _condition = NULL;
      modelica_metatype _body = NULL;
      modelica_metatype _tail = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _condition has no default value.
      // _body has no default value.
      // _tail has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _condition = tmpMeta8;
          _body = tmpMeta9;
          _tail = tmpMeta7;
          /* Pattern matching succeeded */
          _condition = omc_NFSimplifyExp_simplify(threadData, _condition, 0 /* false */);

          _body = omc_NFSimplifyModel_simplifyStatements(threadData, _body);
          tmp12 = (modelica_boolean)omc_NFExpression_isBoolean(threadData, _condition);
          if(tmp12)
          {
            /* Tail recursive call */
            __omcQ_24in_5Fbranches = _tail;
            goto _tailrecursive;
            /* TODO: Make sure any eventual dead code below is never generated */
          }
          else
          {
            tmpMeta11 = mmc_mk_box2(0, _condition, _body);
            tmpMeta10 = mmc_mk_cons(tmpMeta11, omc_NFSimplifyModel_simplifyWhenBranches(threadData, _tail));
            tmpMeta13 = tmpMeta10;
          }
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _branches;
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
  _branches = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _branches;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyStatement(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype __omcQ_24in_5Fstatements)
{
  modelica_metatype _statements = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _statements = __omcQ_24in_5Fstatements;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _dim = NULL;
      modelica_metatype _body = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _dim has no default value.
      // _body has no default value.
      tmp4 = 0;
      for (; tmp4 < 10; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyModel_simplifyAssignment(threadData, _stmt, _statements);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!listEmpty(tmpMeta6)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _statements;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          
          _e = tmpMeta8;
          /* Pattern matching succeeded */
          _dim = omc_NFType_nthDimension(threadData, omc_NFExpression_typeOf(threadData, _e), ((modelica_integer) 1));

          if((!omc_NFDimension_isZero(threadData, _dim)))
          {
            tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_stmt), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = mmc_mk_some(omc_NFSimplifyExp_simplify(threadData, _e, 0 /* false */));
            _stmt = tmpMeta9;

            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_stmt), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[4] = omc_NFSimplifyModel_simplifyStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))));
            _stmt = tmpMeta10;

            tmpMeta11 = mmc_mk_cons(_stmt, _statements);
            _statements = tmpMeta11;
          }
          tmpMeta1 = _statements;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyModel_simplifyIfStmtBranches(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), boxvar_NFStatement_makeIf, boxvar_NFSimplifyModel_simplifyStatements, _statements);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = omc_NFSimplifyModel_simplifyWhenBranches(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          _stmt = tmpMeta12;
          tmp14 = (modelica_boolean)listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))));
          if(tmp14)
          {
            tmpMeta15 = _statements;
          }
          else
          {
            tmpMeta13 = mmc_mk_cons(_stmt, _statements);
            tmpMeta15 = tmpMeta13;
          }
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_stmt), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[2] = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), 0 /* false */);
          _stmt = tmpMeta16;

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_stmt), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[3] = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), 0 /* false */);
          _stmt = tmpMeta17;

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_stmt), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[4] = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), 0 /* false */);
          _stmt = tmpMeta18;
          tmpMeta19 = mmc_mk_cons(_stmt, _statements);
          tmpMeta1 = tmpMeta19;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[2] = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), 0 /* false */);
          _stmt = tmpMeta20;
          tmpMeta21 = mmc_mk_cons(_stmt, _statements);
          tmpMeta1 = tmpMeta21;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_stmt), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[2] = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), 0 /* false */);
          _stmt = tmpMeta22;

          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_stmt), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[3] = omc_NFSimplifyModel_simplifyStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))));
          _stmt = tmpMeta23;
          tmpMeta24 = mmc_mk_cons(_stmt, _statements);
          tmpMeta1 = tmpMeta24;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _e = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), 0 /* false */);

          if(omc_NFExpression_isCall(threadData, _e))
          {
            tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_stmt), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[2] = omc_NFSimplifyModel_removeEmptyFunctionArguments(threadData, _e, 0 /* false */);
            _stmt = tmpMeta25;

            tmpMeta26 = mmc_mk_cons(_stmt, _statements);
            _statements = tmpMeta26;
          }
          tmpMeta1 = _statements;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          tmpMeta27 = mmc_mk_cons(_stmt, _statements);
          tmpMeta1 = tmpMeta27;
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
  _statements = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _statements;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyStatements(threadData_t *threadData, modelica_metatype _stmts)
{
  modelica_metatype _outStmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outStmts = tmpMeta1;
  {
    modelica_metatype _s;
    for (tmpMeta2 = _stmts; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _s = MMC_CAR(tmpMeta2);
      _outStmts = omc_NFSimplifyModel_simplifyStatement(threadData, _s, _outStmts);
    }
  }

  _outStmts = listReverseInPlace(_outStmts);
  _return: OMC_LABEL_UNUSED
  return _outStmts;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyAlgorithm(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg)
{
  modelica_metatype _alg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = __omcQ_24in_5Falg;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_alg), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFSimplifyModel_simplifyStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))));
  _alg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _alg;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyAlgorithms(threadData_t *threadData, modelica_metatype _algs)
{
  modelica_metatype _outAlgs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outAlgs = tmpMeta1;
  {
    modelica_metatype _alg;
    for (tmpMeta2 = _algs; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _alg = MMC_CAR(tmpMeta2);
      _alg = omc_NFSimplifyModel_simplifyAlgorithm(threadData, _alg);

      if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))))))
      {
        tmpMeta3 = mmc_mk_cons(_alg, _outAlgs);
        _outAlgs = tmpMeta3;
      }
    }
  }

  _outAlgs = listReverseInPlace(_outAlgs);
  _return: OMC_LABEL_UNUSED
  return _outAlgs;
}

static modelica_metatype closure3_NFEquation_makeEquality(threadData_t *thData, modelica_metatype closure, modelica_metatype lhs, modelica_metatype rhs, modelica_metatype ty, modelica_metatype src)
{
  modelica_metatype scope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFEquation_makeEquality(thData, lhs, rhs, ty, scope, src);
}
DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyEqualityEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Fequations)
{
  modelica_metatype _equations = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype _scope = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equations = __omcQ_24in_5Fequations;
  // _lhs has no default value.
  // _rhs has no default value.
  // _ty has no default value.
  // _src has no default value.
  // _scope has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _eq;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  _lhs = tmpMeta2;
  _rhs = tmpMeta3;
  _ty = tmpMeta4;
  _scope = tmpMeta5;
  _src = tmpMeta6;

  _ty = omc_NFType_mapDims(threadData, _ty, boxvar_NFSimplifyModel_simplifyDimension);

  if(omc_NFType_isEmptyArray(threadData, _ty))
  {
    goto _return;
  }

  _lhs = omc_NFSimplifyExp_simplify(threadData, _lhs, 0 /* false */);

  _lhs = omc_NFSimplifyModel_removeEmptyTupleElements(threadData, _lhs);

  _rhs = omc_NFSimplifyExp_simplify(threadData, _rhs, 0 /* false */);

  _rhs = omc_NFSimplifyModel_removeEmptyFunctionArguments(threadData, _rhs, 0 /* false */);

  { /* match expression */
    modelica_metatype tmp10_1;modelica_metatype tmp10_2;
    tmp10_1 = _lhs;
    tmp10_2 = _rhs;
    {
      volatile mmc_switch_type tmp10;
      int tmp11;
      tmp10 = 0;
      for (; tmp10 < 2; tmp10++) {
        switch (MMC_SWITCH_CAST(tmp10)) {
        case 0: {
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,11,2) == 0) goto tmp9_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_2,11,2) == 0) goto tmp9_end;
          
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box1(0, _scope);
          tmpMeta7 = omc_NFSimplifyModel_simplifyTupleElement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 3))), _ty, _src, (modelica_fnptr) mmc_mk_box2(0,closure3_NFEquation_makeEquality,tmpMeta12), _equations);
          goto tmp9_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box6(3, &NFEquation_EQUALITY__desc, _lhs, _rhs, _ty, _scope, _src);
          tmpMeta13 = mmc_mk_cons(tmpMeta14, _equations);
          tmpMeta7 = tmpMeta13;
          goto tmp9_done;
        }
        }
        goto tmp9_end;
        tmp9_end: ;
      }
      goto goto_8;
      goto_8:;
      MMC_THROW_INTERNAL();
      goto tmp9_done;
      tmp9_done:;
    }
  }
  _equations = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _equations;
}

static modelica_metatype closure4_NFExpression_containsIterator(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype iterator = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFExpression_containsIterator(thData, exp, iterator);
}static modelica_metatype closure5_NFSimplifyExp_simplify(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype includeScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplify(thData, $in_exp, includeScope);
}
DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Fequations)
{
  modelica_metatype _equations = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equations = __omcQ_24in_5Fequations;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _body = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _rhs has no default value.
      // _ty has no default value.
      // _body has no default value.
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyModel_simplifyEqualityEquation(threadData, _eq, _equations);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _ty = omc_NFType_mapDims(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), boxvar_NFSimplifyModel_simplifyDimension);

          if((!omc_NFType_isEmptyArray(threadData, _ty)))
          {
            _rhs = omc_NFSimplifyModel_removeEmptyFunctionArguments(threadData, omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), 0 /* false */), 0 /* false */);

            tmpMeta7 = mmc_mk_box6(4, &NFEquation_ARRAY__EQUALITY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _rhs, _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))));
            tmpMeta6 = mmc_mk_cons(tmpMeta7, _equations);
            _equations = tmpMeta6;
          }
          tmpMeta1 = _equations;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          
          /* Pattern matching succeeded */
          _body = omc_NFSimplifyModel_simplifyEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));

          tmpMeta10 = mmc_mk_box1(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          if((!omc_NFEquation_containsExpList(threadData, _body, (modelica_fnptr) mmc_mk_box2(0,closure4_NFExpression_containsIterator,tmpMeta10))))
          {
            _equations = omc_List_append__reverse(threadData, _body, _equations);
          }
          else
          {
            tmpMeta12 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
            tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (modelica_fnptr) mmc_mk_box2(0,closure5_NFSimplifyExp_simplify,tmpMeta12));
            _eq = tmpMeta11;

            tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[4] = _body;
            _eq = tmpMeta13;

            tmpMeta14 = mmc_mk_cons(_eq, _equations);
            _equations = tmpMeta14;
          }
          tmpMeta1 = _equations;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyModel_simplifyIfEqBranches(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _equations);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp17;
            modelica_metatype tmpMeta18;
            modelica_metatype tmpMeta19;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp26;
            modelica_metatype _b_loopVar = 0;
            modelica_metatype _b;
            _b_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)));
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta18; /* defaultValue */
            tmp17 = &__omcQ_24tmpVar15;
            while(1) {
              tmp26 = 1;
              if (!listEmpty(_b_loopVar)) {
                _b = MMC_CAR(_b_loopVar);
                _b_loopVar = MMC_CDR(_b_loopVar);
                tmp26--;
              }
              if (tmp26 == 0) {
                { /* match expression */
                  modelica_metatype tmp22_1;
                  tmp22_1 = _b;
                  {
                    volatile mmc_switch_type tmp22;
                    int tmp23;
                    tmp22 = 0;
                    for (; tmp22 < 1; tmp22++) {
                      switch (MMC_SWITCH_CAST(tmp22)) {
                      case 0: {
                        modelica_metatype tmpMeta24;
                        modelica_metatype tmpMeta25;
                        if (mmc__uniontype__metarecord__typedef__equal(tmp22_1,0,3) == 0) goto tmp21_end;
                        
                        /* Pattern matching succeeded */
                        tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(5));
                        memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_b), 5*sizeof(modelica_metatype));
                        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[2] = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 2))), 0 /* false */);
                        _b = tmpMeta24;

                        tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(5));
                        memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_b), 5*sizeof(modelica_metatype));
                        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[4] = omc_NFSimplifyModel_simplifyEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_b), 4))));
                        _b = tmpMeta25;
                        tmpMeta19 = _b;
                        goto tmp21_done;
                      }
                      }
                      goto tmp21_end;
                      tmp21_end: ;
                    }
                    goto goto_20;
                    goto_20:;
                    goto goto_2;
                    goto tmp21_done;
                    tmp21_done:;
                  }
                }__omcQ_24tmpVar14 = tmpMeta19;
                *tmp17 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp17 = &MMC_CDR(*tmp17);
              } else if (tmp26 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp17 = mmc_mk_nil();
            tmpMeta16 = __omcQ_24tmpVar15;
          }
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = tmpMeta16;
          _eq = tmpMeta15;
          tmpMeta27 = mmc_mk_cons(_eq, _equations);
          tmpMeta1 = tmpMeta27;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_boolean tmp30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_eq), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[2] = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), 0 /* false */);
          _eq = tmpMeta28;
          tmp30 = (modelica_boolean)omc_NFExpression_isTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          if(tmp30)
          {
            tmpMeta31 = _equations;
          }
          else
          {
            tmpMeta29 = mmc_mk_cons(_eq, _equations);
            tmpMeta31 = tmpMeta29;
          }
          tmpMeta1 = tmpMeta31;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_eq), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[3] = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), 0 /* false */);
          _eq = tmpMeta32;
          tmpMeta33 = mmc_mk_cons(_eq, _equations);
          tmpMeta1 = tmpMeta33;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _e = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), 0 /* false */);

          if(omc_NFExpression_isCall(threadData, _e))
          {
            tmpMeta34 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta34), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta34))[2] = omc_NFSimplifyModel_removeEmptyFunctionArguments(threadData, _e, 0 /* false */);
            _eq = tmpMeta34;

            tmpMeta35 = mmc_mk_cons(_eq, _equations);
            _equations = tmpMeta35;
          }
          tmpMeta1 = _equations;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta36;
          
          /* Pattern matching succeeded */
          tmpMeta36 = mmc_mk_cons(_eq, _equations);
          tmpMeta1 = tmpMeta36;
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
  _equations = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _equations;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyEquations(threadData_t *threadData, modelica_metatype _eql)
{
  modelica_metatype _outEql = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEql = tmpMeta1;
  {
    modelica_metatype _eq;
    for (tmpMeta2 = _eql; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      _outEql = omc_NFSimplifyModel_simplifyEquation(threadData, _eq, _outEql);
    }
  }

  _outEql = listReverseInPlace(_outEql);
  _return: OMC_LABEL_UNUSED
  return _outEql;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyDimension(threadData_t *threadData, modelica_metatype _dim)
{
  modelica_metatype _outDim = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDim has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _e = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), 0 /* false */);
          tmpMeta1 = (referenceEq(_e, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))))?_dim:omc_NFDimension_fromExp(threadData, _e, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 3))))));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _dim;
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
  _outDim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outDim;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyTypeAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fattribute)
{
  modelica_metatype _attribute = NULL;
  modelica_string _name = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _sbinding = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _attribute = __omcQ_24in_5Fattribute;
  // _name has no default value.
  // _binding has no default value.
  // _sbinding has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _attribute;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _name = tmpMeta2;
  _binding = tmpMeta3;

  _sbinding = omc_NFSimplifyModel_simplifyBinding(threadData, _binding);

  if((!referenceEq(_binding, _sbinding)))
  {
    tmpMeta4 = mmc_mk_box2(0, _name, _sbinding);
    _attribute = tmpMeta4;
  }
  _return: OMC_LABEL_UNUSED
  return _attribute;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding)
{
  modelica_metatype _binding = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _sexp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _binding = __omcQ_24in_5Fbinding;
  // _exp has no default value.
  // _sexp has no default value.
  if(omc_NFBinding_isBound(threadData, _binding))
  {
    _exp = omc_NFBinding_getTypedExp(threadData, _binding);

    _sexp = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);

    _sexp = omc_NFSimplifyModel_removeEmptyFunctionArguments(threadData, _sexp, 0 /* false */);

    if((!referenceEq(_exp, _sexp)))
    {
      _binding = omc_NFBinding_setTypedExp(threadData, _sexp, _binding);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _binding;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplifyVariable(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar)
{
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = omc_NFSimplifyModel_simplifyBinding(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))));
  _var = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar17;
    modelica_metatype* tmp4;
    modelica_metatype tmpMeta5;
    modelica_metatype __omcQ_24tmpVar16;
    modelica_integer tmp6;
    modelica_metatype _a_loopVar = 0;
    modelica_metatype _a;
    _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7)));
    tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar17 = tmpMeta5; /* defaultValue */
    tmp4 = &__omcQ_24tmpVar17;
    while(1) {
      tmp6 = 1;
      if (!listEmpty(_a_loopVar)) {
        _a = MMC_CAR(_a_loopVar);
        _a_loopVar = MMC_CDR(_a_loopVar);
        tmp6--;
      }
      if (tmp6 == 0) {
        __omcQ_24tmpVar16 = omc_NFSimplifyModel_simplifyTypeAttribute(threadData, _a);
        *tmp4 = mmc_mk_cons(__omcQ_24tmpVar16,0);
        tmp4 = &MMC_CDR(*tmp4);
      } else if (tmp6 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp4 = mmc_mk_nil();
    tmpMeta3 = __omcQ_24tmpVar17;
  }
  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[7] = tmpMeta3;
  _var = tmpMeta2;

  {
    modelica_metatype __omcQ_24tmpVar19;
    modelica_metatype* tmp9;
    modelica_metatype tmpMeta10;
    modelica_metatype __omcQ_24tmpVar18;
    modelica_integer tmp11;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 8)));
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar19 = tmpMeta10; /* defaultValue */
    tmp9 = &__omcQ_24tmpVar19;
    while(1) {
      tmp11 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp11--;
      }
      if (tmp11 == 0) {
        __omcQ_24tmpVar18 = omc_NFSimplifyModel_simplifyVariable(threadData, _v);
        *tmp9 = mmc_mk_cons(__omcQ_24tmpVar18,0);
        tmp9 = &MMC_CDR(*tmp9);
      } else if (tmp11 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp9 = mmc_mk_nil();
    tmpMeta8 = __omcQ_24tmpVar19;
  }
  tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[8] = tmpMeta8;
  _var = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _var;
}

DLLDirection
modelica_metatype omc_NFSimplifyModel_simplify(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  {
    modelica_metatype __omcQ_24tmpVar21;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar20;
    modelica_integer tmp5;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar21 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar21;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar20 = omc_NFSimplifyModel_simplifyVariable(threadData, _v);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar20,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar21;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
  _flatModel = tmpMeta1;

  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = omc_NFSimplifyModel_simplifyEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))));
  _flatModel = tmpMeta6;

  tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_NFSimplifyModel_simplifyEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))));
  _flatModel = tmpMeta7;

  tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_NFSimplifyModel_simplifyAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6))));
  _flatModel = tmpMeta8;

  tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[7] = omc_NFSimplifyModel_simplifyAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7))));
  _flatModel = tmpMeta9;

  omc_ExecStat_execStat(threadData, _OMC_LIT6);
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

