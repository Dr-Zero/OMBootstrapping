#include "omc_simulation_settings.h"
#include "MidToMid.h"
#include "util/modelica.h"

#include "MidToMid_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_MidToMid_isPopJmp(threadData_t *threadData, modelica_metatype _t);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_MidToMid_isPopJmp(threadData_t *threadData, modelica_metatype _t);
static const MMC_DEFSTRUCTLIT(boxvar_lit_MidToMid_isPopJmp,2,0) {(void*) boxptr_MidToMid_isPopJmp,0}};
#define boxvar_MidToMid_isPopJmp MMC_REFSTRUCTLIT(boxvar_lit_MidToMid_isPopJmp)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_MidToMid_isPushJmp(threadData_t *threadData, modelica_metatype _t);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_MidToMid_isPushJmp(threadData_t *threadData, modelica_metatype _t);
static const MMC_DEFSTRUCTLIT(boxvar_lit_MidToMid_isPushJmp,2,0) {(void*) boxptr_MidToMid_isPushJmp,0}};
#define boxvar_MidToMid_isPushJmp MMC_REFSTRUCTLIT(boxvar_lit_MidToMid_isPushJmp)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_MidToMid_isLongJmp(threadData_t *threadData, modelica_metatype _t);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_MidToMid_isLongJmp(threadData_t *threadData, modelica_metatype _t);
static const MMC_DEFSTRUCTLIT(boxvar_lit_MidToMid_isLongJmp,2,0) {(void*) boxptr_MidToMid_isLongJmp,0}};
#define boxvar_MidToMid_isLongJmp MMC_REFSTRUCTLIT(boxvar_lit_MidToMid_isLongJmp)
PROTECTED_FUNCTION_STATIC modelica_integer omc_MidToMid_tupleSnd(threadData_t *threadData, modelica_metatype _t);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_MidToMid_tupleSnd(threadData_t *threadData, modelica_metatype _t);
static const MMC_DEFSTRUCTLIT(boxvar_lit_MidToMid_tupleSnd,2,0) {(void*) boxptr_MidToMid_tupleSnd,0}};
#define boxvar_MidToMid_tupleSnd MMC_REFSTRUCTLIT(boxvar_lit_MidToMid_tupleSnd)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_MidToMid_getSuccessors(threadData_t *threadData, modelica_metatype _block_);
static const MMC_DEFSTRUCTLIT(boxvar_lit_MidToMid_getSuccessors,2,0) {(void*) boxptr_MidToMid_getSuccessors,0}};
#define boxvar_MidToMid_getSuccessors MMC_REFSTRUCTLIT(boxvar_lit_MidToMid_getSuccessors)

PROTECTED_FUNCTION_STATIC modelica_boolean omc_MidToMid_isPopJmp(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _t;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_MidToMid_isPopJmp(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_MidToMid_isPopJmp(threadData, _t);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_MidToMid_isPushJmp(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _t;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,3) == 0) goto tmp3_end;
          
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_MidToMid_isPushJmp(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_MidToMid_isPushJmp(threadData, _t);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_MidToMid_isLongJmp(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _t;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,0) == 0) goto tmp3_end;
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_MidToMid_isLongJmp(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_MidToMid_isLongJmp(threadData, _t);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_MidToMid_tupleSnd(threadData_t *threadData, modelica_metatype _t)
{
  modelica_integer _i;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _t;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _i = tmp3  /* pattern as ty=Integer */;
  _return: OMC_LABEL_UNUSED
  return _i;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_MidToMid_tupleSnd(threadData_t *threadData, modelica_metatype _t)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_MidToMid_tupleSnd(threadData, _t);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_MidToMid_getSuccessors(threadData_t *threadData, modelica_metatype _block_)
{
  modelica_metatype _neighbours = NULL;
  modelica_integer _l0;
  modelica_integer _l1;
  modelica_metatype _switchList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _neighbours has no default value.
  // _l0 has no default value.
  // _l1 has no default value.
  // _switchList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_block_), 4)));
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp6 = mmc_unbox_integer(tmpMeta5);
          _l0 = tmp6  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(mmc_mk_integer(_l0), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          _l0 = tmp9  /* pattern as ty=Integer */;
          _l1 = tmp11  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_cons(mmc_mk_integer(_l0), mmc_mk_cons(mmc_mk_integer(_l1), MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,5) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          _l0 = tmp14  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_cons(mmc_mk_integer(_l0), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta16;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _switchList = tmpMeta17;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp19;
            modelica_metatype tmpMeta20;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp21;
            modelica_metatype _x_loopVar = 0;
            modelica_metatype _x;
            _x_loopVar = _switchList;
            tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta20; /* defaultValue */
            tmp19 = &__omcQ_24tmpVar1;
            while(1) {
              tmp21 = 1;
              if (!listEmpty(_x_loopVar)) {
                _x = MMC_CAR(_x_loopVar);
                _x_loopVar = MMC_CDR(_x_loopVar);
                tmp21--;
              }
              if (tmp21 == 0) {
                __omcQ_24tmpVar0 = mmc_mk_integer(omc_MidToMid_tupleSnd(threadData, _x));
                *tmp19 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp19 = &MMC_CDR(*tmp19);
              } else if (tmp21 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp19 = mmc_mk_nil();
            tmpMeta18 = __omcQ_24tmpVar1;
          }
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta22;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,3) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          _l0 = tmp24  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta25 = mmc_mk_cons(mmc_mk_integer(_l0), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta25;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          _l0 = tmp27  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta28 = mmc_mk_cons(mmc_mk_integer(_l0), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta28;
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
  _neighbours = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _neighbours;
}

DLLDirection
modelica_metatype omc_MidToMid_lookupId(threadData_t *threadData, modelica_metatype _blocks, modelica_integer _id)
{
  modelica_metatype _block_ = NULL;
  modelica_metatype _blocks_local = NULL;
  modelica_metatype _block_local = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _block_ has no default value.
  // _blocks_local has no default value.
  // _block_local has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _blocks;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _block_local = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_block_local), 2)))) == _id)) goto tmp3_end;
          tmpMeta1 = _block_local;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          _blocks_local = tmpMeta9;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _blocks = _blocks_local;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _block_ = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _block_;
}
modelica_metatype boxptr_MidToMid_lookupId(threadData_t *threadData, modelica_metatype _blocks, modelica_metatype _id)
{
  modelica_integer tmp1;
  modelica_metatype _block_ = NULL;
  tmp1 = mmc_unbox_integer(_id);
  _block_ = omc_MidToMid_lookupId(threadData, _blocks, tmp1);
  /* skip box _block_; MidCode.Block */
  return _block_;
}

DLLDirection
modelica_metatype omc_MidToMid_longJmpGoto(threadData_t *threadData, modelica_metatype _oldFunction)
{
  modelica_metatype _newFunction = NULL;
  modelica_metatype _newBody = NULL;
  modelica_metatype _oldBody = NULL;
  modelica_metatype _newBlock = NULL;
  modelica_metatype _oldBlock = NULL;
  modelica_integer _node;
  modelica_integer _jump;
  modelica_metatype _jumps = NULL;
  modelica_metatype _nodes_tmp = NULL;
  modelica_metatype _checkedNodes = NULL;
  modelica_metatype _tasks = NULL;
  modelica_metatype _tasks_tmp = NULL;
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
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta28;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newFunction has no default value.
  // _newBody has no default value.
  // _oldBody has no default value.
  // _newBlock has no default value.
  // _oldBlock has no default value.
  // _node has no default value.
  // _jump has no default value.
  // _jumps has no default value.
  // _nodes_tmp has no default value.
  // _checkedNodes has no default value.
  // _tasks has no default value.
  // _tasks_tmp has no default value.
  _oldBody = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldFunction), 8)));

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _newBody = tmpMeta1;

  tmpMeta2 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldFunction), 9))), MMC_REFSTRUCTLIT(mmc_nil));
  _checkedNodes = tmpMeta2;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box2(0, tmpMeta4, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldFunction), 9))));
  tmpMeta3 = mmc_mk_cons(tmpMeta5, MMC_REFSTRUCTLIT(mmc_nil));
  _tasks = tmpMeta3;

  while(1)
  {
    if(!(!listEmpty(_tasks))) break;
    /* Pattern-matching assignment */
    tmpMeta6 = _tasks;
    if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
    tmpMeta7 = MMC_CAR(tmpMeta6);
    tmpMeta8 = MMC_CDR(tmpMeta6);
    tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
    tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
    tmp11 = mmc_unbox_integer(tmpMeta10);
    _jumps = tmpMeta9;
    _node = tmp11  /* pattern as ty=Integer */;
    _tasks = tmpMeta8;

    _oldBlock = omc_MidToMid_lookupId(threadData, _oldBody, _node);

    _newBlock = _oldBlock;

    if(omc_MidToMid_isPushJmp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldBlock), 4)))))
    {
      tmpMeta12 = mmc_mk_cons(listHead(omc_MidToMid_getSuccessors(threadData, _oldBlock)), _jumps);
      _jumps = tmpMeta12;
    }
    else
    {
      if((omc_MidToMid_isLongJmp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldBlock), 4)))) && (!listEmpty(_jumps))))
      {
        /* Pattern-matching assignment */
        tmpMeta13 = _jumps;
        if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
        tmpMeta14 = MMC_CAR(tmpMeta13);
        tmpMeta15 = MMC_CDR(tmpMeta13);
        tmp16 = mmc_unbox_integer(tmpMeta14);
        _jump = tmp16  /* pattern as ty=Integer */;

        tmpMeta17 = mmc_mk_box2(3, &MidCode_Terminator_GOTO__desc, mmc_mk_integer(_jump));
        tmpMeta18 = mmc_mk_box4(3, &MidCode_Block_BLOCK__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldBlock), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldBlock), 3))), tmpMeta17);
        _newBlock = tmpMeta18;
      }
      else
      {
        if(omc_MidToMid_isPopJmp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldBlock), 4)))))
        {
          /* Pattern-matching assignment */
          tmpMeta19 = _jumps;
          if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
          tmpMeta20 = MMC_CAR(tmpMeta19);
          tmpMeta21 = MMC_CDR(tmpMeta19);
          _jumps = tmpMeta21;
        }
      }
    }

    tmpMeta22 = mmc_mk_cons(_newBlock, _newBody);
    _newBody = tmpMeta22;

    _nodes_tmp = omc_List_setDifference(threadData, omc_MidToMid_getSuccessors(threadData, _oldBlock), _checkedNodes);

    _checkedNodes = listAppend(_nodes_tmp, _checkedNodes);

    {
      modelica_metatype __omcQ_24tmpVar3;
      modelica_metatype* tmp24;
      modelica_metatype tmpMeta25;
      modelica_metatype tmpMeta26;
      modelica_metatype __omcQ_24tmpVar2;
      modelica_integer tmp27;
      modelica_metatype _node_tmp_loopVar = 0;
      modelica_metatype _node_tmp;
      _node_tmp_loopVar = _nodes_tmp;
      tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar3 = tmpMeta25; /* defaultValue */
      tmp24 = &__omcQ_24tmpVar3;
      while(1) {
        tmp27 = 1;
        if (!listEmpty(_node_tmp_loopVar)) {
          _node_tmp = MMC_CAR(_node_tmp_loopVar);
          _node_tmp_loopVar = MMC_CDR(_node_tmp_loopVar);
          tmp27--;
        }
        if (tmp27 == 0) {
          tmpMeta26 = mmc_mk_box2(0, _jumps, _node_tmp);
          __omcQ_24tmpVar2 = tmpMeta26;
          *tmp24 = mmc_mk_cons(__omcQ_24tmpVar2,0);
          tmp24 = &MMC_CDR(*tmp24);
        } else if (tmp27 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp24 = mmc_mk_nil();
      tmpMeta23 = __omcQ_24tmpVar3;
    }
    _tasks_tmp = tmpMeta23;

    _tasks = listAppend(_tasks_tmp, _tasks);
  }

  _newBody = listReverse(_newBody);

  tmpMeta28 = mmc_mk_box10(3, &MidCode_Function_FUNCTION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldFunction), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldFunction), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldFunction), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldFunction), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldFunction), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldFunction), 7))), _newBody, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldFunction), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oldFunction), 10))));
  _newFunction = tmpMeta28;
  _return: OMC_LABEL_UNUSED
  return _newFunction;
}

