#include "omc_simulation_settings.h"
#include "NFConnections.h"
#define _OMC_LIT0_data "FLOWS:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,6,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\nCONNECTIONS:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,13,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "nfScalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,11,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Run scalarization in NF, default true."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,38,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(168)),_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "NFConnections.makeConnectors failed to expand connector `"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,57,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,3) {&DAE_Prefix_NOPRE__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,0,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,11) {&DAE_Type_T__UNKNOWN__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,4,4) {&DAE_ComponentRef_CREF__IDENT__desc,_OMC_LIT9,_OMC_LIT10,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,0) {_OMC_LIT11,_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,4,3) {&NFConnections_CONNECTIONS__desc,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#include "util/modelica.h"

#include "NFConnections_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnections_analyseArrayConnector_update(threadData_t *threadData, modelica_metatype _count);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnections_analyseArrayConnector_update(threadData_t *threadData, modelica_metatype _count);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_analyseArrayConnector_update,2,0) {(void*) boxptr_NFConnections_analyseArrayConnector_update,0}};
#define boxvar_NFConnections_analyseArrayConnector_update MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_analyseArrayConnector_update)

DLLDirection
modelica_metatype omc_NFConnections_toStringList(threadData_t *threadData, modelica_metatype _conns)
{
  modelica_metatype _strl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _strl = tmpMeta1;
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype tmpMeta5;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp6;
    modelica_metatype _c_loopVar = 0;
    modelica_metatype _c;
    _c_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 2)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar3;
    while(1) {
      tmp6 = 1;
      if (!listEmpty(_c_loopVar)) {
        _c = MMC_CAR(_c_loopVar);
        _c_loopVar = MMC_CDR(_c_loopVar);
        tmp6--;
      }
      if (tmp6 == 0) {
        tmpMeta5 = mmc_mk_cons(omc_NFConnector_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2)))), mmc_mk_cons(omc_NFConnector_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 3)))), MMC_REFSTRUCTLIT(mmc_nil)));
        __omcQ_24tmpVar2 = tmpMeta5;
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp6 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar3;
  }
  _strl = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _strl;
}

DLLDirection
modelica_string omc_NFConnections_toString(threadData_t *threadData, modelica_metatype _conns)
{
  modelica_string _str = NULL;
  modelica_metatype _strl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _strl = tmpMeta1;
  tmpMeta2 = mmc_mk_cons(_OMC_LIT0, _strl);
  _strl = tmpMeta2;

  {
    modelica_metatype _f;
    for (tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 3))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _f = MMC_CAR(tmpMeta3);
      tmpMeta4 = mmc_mk_cons(omc_NFConnector_toString(threadData, _f), _strl);
      _strl = tmpMeta4;
    }
  }

  tmpMeta6 = mmc_mk_cons(_OMC_LIT1, _strl);
  _strl = tmpMeta6;

  {
    modelica_metatype _c;
    for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 2))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _c = MMC_CAR(tmpMeta7);
      tmpMeta8 = mmc_mk_cons(omc_NFConnection_toString(threadData, _c), _strl);
      _strl = tmpMeta8;
    }
  }

  _strl = listReverseInPlace(_strl);

  _str = stringDelimitList(_strl, _OMC_LIT2);
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnections_analyseArrayConnector_update(threadData_t *threadData, modelica_metatype _count)
{
  modelica_integer _outCount;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCount has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _count;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          _outCount = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = ((_outCount >= ((modelica_integer) 0))?((modelica_integer) 1) + _outCount:((modelica_integer) -1));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
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
  _outCount = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outCount;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnections_analyseArrayConnector_update(threadData_t *threadData, modelica_metatype _count)
{
  modelica_integer _outCount;
  modelica_metatype out_outCount;
  _outCount = omc_NFConnections_analyseArrayConnector_update(threadData, _count);
  out_outCount = mmc_mk_icon(_outCount);
  return out_outCount;
}

DLLDirection
void omc_NFConnections_analyseArrayConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _connectCounts)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if(omc_NFConnector_isArray(threadData, _conn))
  {
    omc_UnorderedMap_addUpdate(threadData, _conn, boxvar_NFConnections_analyseArrayConnector_update, _connectCounts);
  }
  else
  {
    if(omc_NFComponentRef_hasSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2)))))
    {
      omc_UnorderedMap_add(threadData, _conn, mmc_mk_integer(((modelica_integer) -1)), _connectCounts);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFConnections_analyseArrayConnections(threadData_t *threadData, modelica_metatype _conns)
{
  modelica_metatype _connectCounts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _connectCounts has no default value.
  _connectCounts = omc_UnorderedMap_new(threadData, boxvar_NFConnector_hashNoSubs, boxvar_NFConnector_isEqualNoSubs, listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 2)))));

  {
    modelica_metatype _conn;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 2))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _conn = MMC_CAR(tmpMeta1);
      omc_NFConnections_analyseArrayConnector(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))), _connectCounts);

      omc_NFConnections_analyseArrayConnector(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 3))), _connectCounts);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _connectCounts;
}

DLLDirection
modelica_metatype omc_NFConnections_scalarize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconns, modelica_boolean _keepSingleConnectedArrays)
{
  modelica_metatype _conns = NULL;
  modelica_metatype _connect_counts = NULL;
  modelica_metatype _flows = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _connections = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _count;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = __omcQ_24in_5Fconns;
  // _connect_counts has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _flows = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _connections = tmpMeta2;
  // _count has no default value.
  if(_keepSingleConnectedArrays)
  {
    _connect_counts = omc_NFConnections_analyseArrayConnections(threadData, _conns);

    {
      modelica_metatype _f;
      for (tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 3))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
      {
        _f = MMC_CAR(tmpMeta3);
        _count = omc_NFConnections_connectCount(threadData, _f, _connect_counts);

        if((_count == ((modelica_integer) 0)))
        {
          tmpMeta4 = mmc_mk_cons(_f, _flows);
          _flows = tmpMeta4;
        }
        else
        {
          if(((_count > ((modelica_integer) 1)) || (_count == ((modelica_integer) -1))))
          {
            _flows = listAppend(omc_NFConnector_scalarize(threadData, _f), _flows);
          }
        }
      }
    }

    {
      modelica_metatype _c;
      for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
      {
        _c = MMC_CAR(tmpMeta6);
        if((((!omc_NFPrefixes_ConnectorType_isStream(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2)))), 5)))))) && (omc_NFConnections_connectCount(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2))), _connect_counts) == ((modelica_integer) 1))) && (omc_NFConnections_connectCount(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 3))), _connect_counts) == ((modelica_integer) 1))))
        {
          tmpMeta7 = mmc_mk_cons(_c, _connections);
          _connections = tmpMeta7;
        }
        else
        {
          _connections = listAppend(omc_NFConnection_scalarize(threadData, _c), _connections);
        }
      }
    }

    tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_conns), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = listReverseInPlace(_flows);
    _conns = tmpMeta9;

    tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_conns), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = listReverseInPlace(_connections);
    _conns = tmpMeta10;
  }
  else
  {
    tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_conns), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = omc_List_mapFlat(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 3))), boxvar_NFConnector_scalarize);
    _conns = tmpMeta11;

    tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_conns), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = omc_List_mapFlat(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 2))), boxvar_NFConnection_scalarize);
    _conns = tmpMeta12;
  }
  _return: OMC_LABEL_UNUSED
  return _conns;
}
modelica_metatype boxptr_NFConnections_scalarize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconns, modelica_metatype _keepSingleConnectedArrays)
{
  modelica_integer tmp1;
  modelica_metatype _conns = NULL;
  tmp1 = mmc_unbox_integer(_keepSingleConnectedArrays);
  _conns = omc_NFConnections_scalarize(threadData, __omcQ_24in_5Fconns, tmp1);
  /* skip box _conns; NFConnections */
  return _conns;
}

DLLDirection
modelica_integer omc_NFConnections_connectCount(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _connectCounts)
{
  modelica_integer _count;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _count has no default value.
  _count = mmc_unbox_integer(omc_UnorderedMap_getOrDefault(threadData, _conn, _connectCounts, mmc_mk_integer(((modelica_integer) 0))));
  _return: OMC_LABEL_UNUSED
  return _count;
}
modelica_metatype boxptr_NFConnections_connectCount(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _connectCounts)
{
  modelica_integer _count;
  modelica_metatype out_count;
  _count = omc_NFConnections_connectCount(threadData, _conn, _connectCounts);
  out_count = mmc_mk_icon(_count);
  return out_count;
}

DLLDirection
modelica_metatype omc_NFConnections_split(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_metatype _conns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = __omcQ_24in_5Fconns;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_conns), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = omc_List_mapFlat(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 3))), boxvar_NFConnector_split);
  _conns = tmpMeta1;

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_conns), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[2] = omc_List_mapFlat(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 2))), boxvar_NFConnection_split);
  _conns = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _conns;
}

DLLDirection
modelica_metatype omc_NFConnections_makeConnectors(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _ty, modelica_metatype _source)
{
  modelica_metatype _connectors = NULL;
  modelica_metatype _cref_exp = NULL;
  modelica_metatype _cr = NULL;
  modelica_boolean _expanded;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _connectors has no default value.
  // _cref_exp has no default value.
  // _cr has no default value.
  // _expanded has no default value.
  if((!omc_Flags_isSet(threadData, _OMC_LIT6)))
  {
    tmpMeta1 = mmc_mk_cons(omc_NFConnector_fromCref(threadData, _cref, omc_NFComponentRef_getSubscriptedType(threadData, _cref, 0 /* false */), _source), MMC_REFSTRUCTLIT(mmc_nil));
    _connectors = tmpMeta1;

    goto _return;
  }

  tmpMeta2 = mmc_mk_box3(9, &NFExpression_CREF__desc, omc_NFComponentRef_getSubscriptedType(threadData, _cref, 0 /* false */), _cref);
  _cref_exp = tmpMeta2;

  _cref_exp = omc_NFExpandExp_expand(threadData, _cref_exp, 0 /* false */ ,&_expanded);

  if(_expanded)
  {
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    _connectors = omc_NFConnector_fromExp(threadData, _cref_exp, _source, tmpMeta3);
  }
  else
  {
    tmpMeta4 = stringAppend(_OMC_LIT7,omc_NFComponentRef_toString(threadData, _cref));
    tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT2);
    omc_Error_assertion(threadData, 0 /* false */, tmpMeta5, omc_ElementSource_getInfo(threadData, _source));
  }
  _return: OMC_LABEL_UNUSED
  return _connectors;
}

DLLDirection
modelica_metatype omc_NFConnections_makeConnections(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _lhsType, modelica_metatype _rhsCref, modelica_metatype _rhsType, modelica_metatype _source, modelica_fnptr _isDeleted, modelica_metatype __omcQ_24in_5Fconnections)
{
  modelica_metatype _connections = NULL;
  modelica_metatype _cl1 = NULL;
  modelica_metatype _cl2 = NULL;
  modelica_metatype _c2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _connections = __omcQ_24in_5Fconnections;
  // _cl1 has no default value.
  // _cl2 has no default value.
  // _c2 has no default value.
  if((mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 2))), _lhsCref) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 1)))) (threadData, _lhsCref)) || mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 2))), _rhsCref) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 1)))) (threadData, _rhsCref))))
  {
    goto _return;
  }

  if((omc_NFInstNode_InstNode_isName(threadData, omc_NFComponentRef_node(threadData, _lhsCref)) || omc_NFInstNode_InstNode_isName(threadData, omc_NFComponentRef_node(threadData, _rhsCref))))
  {
    tmpMeta1 = mmc_mk_cons(omc_NFConnector_fromCref(threadData, _lhsCref, _lhsType, _source), MMC_REFSTRUCTLIT(mmc_nil));
    _cl1 = tmpMeta1;

    tmpMeta2 = mmc_mk_cons(omc_NFConnector_fromCref(threadData, _rhsCref, _rhsType, _source), MMC_REFSTRUCTLIT(mmc_nil));
    _cl2 = tmpMeta2;
  }
  else
  {
    _cl1 = omc_NFConnections_makeConnectors(threadData, _lhsCref, _lhsType, _source);

    _cl2 = omc_NFConnections_makeConnectors(threadData, _rhsCref, _rhsType, _source);
  }

  {
    modelica_metatype _c1;
    for (tmpMeta3 = _cl1; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _c1 = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _cl2;
      if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
      tmpMeta5 = MMC_CAR(tmpMeta4);
      tmpMeta6 = MMC_CDR(tmpMeta4);
      _c2 = tmpMeta5;
      _cl2 = tmpMeta6;

      if((!(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 2))))) || mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isDeleted), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 2))))))))
      {
        tmpMeta8 = mmc_mk_box3(3, &NFConnection_CONNECTION__desc, _c1, _c2);
        tmpMeta7 = mmc_mk_cons(tmpMeta8, _connections);
        _connections = tmpMeta7;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _connections;
}

DLLDirection
modelica_metatype omc_NFConnections_collectFlows(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_metatype _conns = NULL;
  modelica_metatype _comp = NULL;
  modelica_metatype _c = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = __omcQ_24in_5Fconns;
  // _comp has no default value.
  // _c has no default value.
  // _src has no default value.
  {
    modelica_metatype _var;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _var = MMC_CAR(tmpMeta1);
      _comp = omc_NFInstNode_InstNode_component(threadData, omc_NFComponentRef_node(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))));

      if(omc_NFComponent_isFlow(threadData, _comp))
      {
        _src = omc_ElementSource_createElementSource(threadData, omc_NFComponent_info(threadData, _comp), mmc_mk_none(), _OMC_LIT8, _OMC_LIT12);

        _c = omc_NFConnector_fromFacedCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))), 1, _src);

        _conns = omc_NFConnections_addFlow(threadData, _c, _conns);

        if(omc_NFPrefixes_ConnectorType_isAugmented(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6)))), 2))))))
        {
          _c = omc_NFConnector_fromFacedCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))), 2, _src);

          _conns = omc_NFConnections_addFlow(threadData, _c, _conns);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _conns;
}

DLLDirection
modelica_metatype omc_NFConnections_collectConnections(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel, modelica_fnptr _isDeleted, modelica_metatype *out_conns)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype _conns = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _source = NULL;
  modelica_metatype _eql = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ty1 = NULL;
  modelica_metatype _ty2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  _conns = omc_NFConnections_new(threadData);
  // _lhs has no default value.
  // _rhs has no default value.
  // _source has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eql = tmpMeta1;
  // _ty1 has no default value.
  // _ty2 has no default value.
  {
    modelica_metatype _eq;
    for (tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eq = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp6_1;
        tmp6_1 = _eq;
        {
          volatile mmc_switch_type tmp6;
          int tmp7;
          tmp6 = 0;
          for (; tmp6 < 2; tmp6++) {
            switch (MMC_SWITCH_CAST(tmp6)) {
            case 0: {
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              modelica_metatype tmpMeta10;
              modelica_metatype tmpMeta11;
              modelica_metatype tmpMeta12;
              modelica_metatype tmpMeta13;
              modelica_metatype tmpMeta14;
              modelica_metatype tmpMeta15;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,4) == 0) goto tmp5_end;
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,2) == 0) goto tmp5_end;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,6,2) == 0) goto tmp5_end;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
              _ty1 = tmpMeta9;
              _lhs = tmpMeta10;
              _ty2 = tmpMeta12;
              _rhs = tmpMeta13;
              _source = tmpMeta14;
              /* Pattern matching succeeded */
              _lhs = omc_NFComponentRef_evaluateSubscripts(threadData, _lhs);

              _rhs = omc_NFComponentRef_evaluateSubscripts(threadData, _rhs);

              tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_conns), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = omc_NFConnections_makeConnections(threadData, _lhs, _ty1, _rhs, _ty2, _source, ((modelica_fnptr) _isDeleted), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 2))));
              _conns = tmpMeta15;
              tmpMeta3 = _eql;
              goto tmp5_done;
            }
            case 1: {
              modelica_metatype tmpMeta16;
              
              /* Pattern matching succeeded */
              tmpMeta16 = mmc_mk_cons(_eq, _eql);
              tmpMeta3 = tmpMeta16;
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
      _eql = tmpMeta3;
    }
  }

  tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[4] = listReverseInPlace(_eql);
  _flatModel = tmpMeta18;
  _return: OMC_LABEL_UNUSED
  if (out_conns) { *out_conns = _conns; }
  return _flatModel;
}

DLLDirection
modelica_metatype omc_NFConnections_addBroken(threadData_t *threadData, modelica_metatype _broken, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_metatype _conns = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = __omcQ_24in_5Fconns;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_conns), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = _broken;
  _conns = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _conns;
}

DLLDirection
modelica_metatype omc_NFConnections_addFlow(threadData_t *threadData, modelica_metatype _conn, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_metatype _conns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = __omcQ_24in_5Fconns;
  tmpMeta2 = mmc_mk_cons(_conn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 3))));
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_conns), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
  _conns = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _conns;
}

DLLDirection
modelica_metatype omc_NFConnections_addConnection(threadData_t *threadData, modelica_metatype _conn, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_metatype _conns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = __omcQ_24in_5Fconns;
  tmpMeta2 = mmc_mk_cons(_conn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conns), 2))));
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_conns), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = tmpMeta2;
  _conns = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _conns;
}

DLLDirection
modelica_metatype omc_NFConnections_fromConnectionList(threadData_t *threadData, modelica_metatype _connl)
{
  modelica_metatype _conns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _conns has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = mmc_mk_box4(3, &NFConnections_CONNECTIONS__desc, _connl, tmpMeta1, tmpMeta2);
  _conns = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _conns;
}

DLLDirection
modelica_metatype omc_NFConnections_new(threadData_t *threadData)
{
  modelica_metatype _conns = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = _OMC_LIT13;
  _return: OMC_LABEL_UNUSED
  return _conns;
}

