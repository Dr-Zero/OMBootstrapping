#include "omc_simulation_settings.h"
#include "NFConnector.h"
#define _OMC_LIT0_data "inside"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,6,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "outside"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,7,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "NFConnector.fromExp got unknown expression "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,43,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFConnector.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,78,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4_6,1.770032059e9);
#define _OMC_LIT4_6 MMC_REFREALLIT(_OMC_LIT_STRUCT4_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(116)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(117)),MMC_IMMEDIATE(MMC_TAGFIXNUM(52)),_OMC_LIT4_6}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#include "util/modelica.h"

#include "NFConnector_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnector_splitImpl2(threadData_t *threadData, modelica_metatype _name, modelica_integer _face, modelica_metatype _source, modelica_metatype _comps, modelica_metatype _dims, modelica_metatype __omcQ_24in_5Fconns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnector_splitImpl2(threadData_t *threadData, modelica_metatype _name, modelica_metatype _face, modelica_metatype _source, modelica_metatype _comps, modelica_metatype _dims, modelica_metatype __omcQ_24in_5Fconns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_splitImpl2,2,0) {(void*) boxptr_NFConnector_splitImpl2,0}};
#define boxvar_NFConnector_splitImpl2 MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_splitImpl2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnector_splitImpl(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_integer _face, modelica_metatype _source, modelica_integer _cty, modelica_metatype _dims, modelica_metatype __omcQ_24in_5Fconns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnector_splitImpl(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_metatype _face, modelica_metatype _source, modelica_metatype _cty, modelica_metatype _dims, modelica_metatype __omcQ_24in_5Fconns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_splitImpl,2,0) {(void*) boxptr_NFConnector_splitImpl,0}};
#define boxvar_NFConnector_splitImpl MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_splitImpl)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnector_crefFace(threadData_t *threadData, modelica_metatype _cref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnector_crefFace(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_crefFace,2,0) {(void*) boxptr_NFConnector_crefFace,0}};
#define boxvar_NFConnector_crefFace MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_crefFace)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnector_splitImpl2(threadData_t *threadData, modelica_metatype _name, modelica_integer _face, modelica_metatype _source, modelica_metatype _comps, modelica_metatype _dims, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_metatype _conns = NULL;
  modelica_metatype _c = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _cty;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = __omcQ_24in_5Fconns;
  // _c has no default value.
  // _cref has no default value.
  // _ty has no default value.
  // _cty has no default value.
  {
    modelica_metatype _comp;
    for (tmpMeta1 = _comps; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _comp = MMC_CAR(tmpMeta1);
      _c = omc_NFInstNode_InstNode_component(threadData, _comp);

      _ty = omc_NFComponent_getType(threadData, _c);

      _cty = omc_NFComponent_connectorType(threadData, _c);

      if((!omc_NFPrefixes_ConnectorType_isPotentiallyPresent(threadData, _cty)))
      {
        tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
        _cref = omc_NFComponentRef_append(threadData, omc_NFComponentRef_fromNode(threadData, _comp, _ty, tmpMeta2, 1), _name);

        _conns = omc_NFConnector_splitImpl(threadData, _cref, _ty, (modelica_integer)_face, _source, _cty, _dims, _conns);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _conns;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnector_splitImpl2(threadData_t *threadData, modelica_metatype _name, modelica_metatype _face, modelica_metatype _source, modelica_metatype _comps, modelica_metatype _dims, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_integer tmp1;
  modelica_metatype _conns = NULL;
  tmp1 = mmc_unbox_integer(_face);
  _conns = omc_NFConnector_splitImpl2(threadData, _name, tmp1, _source, _comps, _dims, __omcQ_24in_5Fconns);
  /* skip box _conns; list<NFConnector> */
  return _conns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnector_splitImpl(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_integer _face, modelica_metatype _source, modelica_integer _cty, modelica_metatype _dims, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_metatype _conns = NULL;
  modelica_metatype _ct = NULL;
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = __omcQ_24in_5Fconns;
  // _ct has no default value.
  // _tree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ty;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,3) == 0) goto tmp3_end;
          
          _ct = tmpMeta6;
          /* Pattern matching succeeded */
          _conns = omc_NFConnector_splitImpl2(threadData, _name, (modelica_integer)_face, _source, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ct), 2))), _dims, _conns);

          _conns = omc_NFConnector_splitImpl2(threadData, _name, (modelica_integer)_face, _source, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ct), 3))), _dims, _conns);
          tmpMeta1 = omc_NFConnector_splitImpl2(threadData, _name, (modelica_integer)_face, _source, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ct), 4))), _dims, _conns);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box6(3, &NFConnector_CONNECTOR__desc, _name, omc_NFType_liftArrayLeftList(threadData, _ty, _dims), mmc_mk_integer((modelica_integer)_face), mmc_mk_integer(_cty), _source);
          tmpMeta8 = mmc_mk_cons(tmpMeta9, _conns);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _tree = omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2)))));
          tmpMeta1 = omc_NFConnector_splitImpl2(threadData, _name, (modelica_integer)_face, _source, arrayList(omc_NFClassTree_ClassTree_getComponents(threadData, _tree)), _dims, _conns);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2)));
          _face = (modelica_integer)_face;
          _dims = listAppend(_dims, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3))));
          __omcQ_24in_5Fconns = _conns;
          _ty = tmpMeta10;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box6(3, &NFConnector_CONNECTOR__desc, _name, omc_NFType_liftArrayLeftList(threadData, _ty, _dims), mmc_mk_integer((modelica_integer)_face), mmc_mk_integer(_cty), _source);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, _conns);
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
  _conns = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _conns;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnector_splitImpl(threadData_t *threadData, modelica_metatype _name, modelica_metatype _ty, modelica_metatype _face, modelica_metatype _source, modelica_metatype _cty, modelica_metatype _dims, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _conns = NULL;
  tmp1 = mmc_unbox_integer(_face);
  tmp2 = mmc_unbox_integer(_cty);
  _conns = omc_NFConnector_splitImpl(threadData, _name, _ty, tmp1, _source, tmp2, _dims, __omcQ_24in_5Fconns);
  /* skip box _conns; list<NFConnector> */
  return _conns;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnector_crefFace(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _face;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _face has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cref;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 2;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFInstNode_InstNode_isConnector(threadData, omc_NFComponentRef_node(threadData, omc_NFComponentRef_firstNonScope(threadData, _cref)))?2:1);
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
  _face = tmp1;
  _return: OMC_LABEL_UNUSED
  return _face;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnector_crefFace(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _face;
  modelica_metatype out_face;
  _face = omc_NFConnector_crefFace(threadData, _cref);
  out_face = mmc_mk_icon(_face);
  return out_face;
}

DLLDirection
modelica_metatype omc_NFConnector_addSubscripts(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype __omcQ_24in_5Fconn)
{
  modelica_metatype _conn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conn = __omcQ_24in_5Fconn;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_conn), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_NFComponentRef_mergeSubscripts(threadData, _subscripts, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))), 1 /* true */, 0 /* false */, 0 /* false */);
  _conn = tmpMeta1;

  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_conn), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[3] = omc_NFType_subscript(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 3))), _subscripts, 1 /* true */);
  _conn = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _conn;
}

DLLDirection
modelica_metatype omc_NFConnector_scalarizePrefix(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_metatype _connl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _name = NULL;
  modelica_metatype _prefix = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _face;
  modelica_metatype _source = NULL;
  modelica_integer _cty;
  modelica_metatype _prefixes = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _connl = tmpMeta1;
  // _name has no default value.
  // _prefix has no default value.
  // _ty has no default value.
  // _face has no default value.
  // _source has no default value.
  // _cty has no default value.
  // _prefixes has no default value.
  /* Pattern-matching assignment */
  tmpMeta2 = _conn;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 6));
  _name = tmpMeta3;
  _ty = tmpMeta4;
  _face = tmp6  /* pattern as ty=enumeration(INSIDE, OUTSIDE) */;
  _cty = tmp8  /* pattern as ty=Integer */;
  _source = tmpMeta9;

  _prefix = omc_NFComponentRef_rest(threadData, _name);

  if(omc_NFComponentRef_isEmpty(threadData, _prefix))
  {
    tmpMeta10 = mmc_mk_cons(_conn, MMC_REFSTRUCTLIT(mmc_nil));
    _connl = tmpMeta10;

    goto _return;
  }

  _prefixes = omc_NFComponentRef_scalarizeAll(threadData, _prefix, 0 /* false */);

  _ty = omc_NFComponentRef_getSubscriptedType(threadData, omc_NFComponentRef_first(threadData, _name), 0 /* false */);

  {
    modelica_metatype _p;
    for (tmpMeta11 = _prefixes; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
    {
      _p = MMC_CAR(tmpMeta11);
      _name = omc_NFComponentRef_prepend(threadData, _p, _name);

      tmpMeta13 = mmc_mk_box6(3, &NFConnector_CONNECTOR__desc, _name, _ty, mmc_mk_integer((modelica_integer)_face), mmc_mk_integer(_cty), _source);
      tmpMeta12 = mmc_mk_cons(tmpMeta13, _connl);
      _connl = tmpMeta12;
    }
  }

  _connl = listReverseInPlace(_connl);
  _return: OMC_LABEL_UNUSED
  return _connl;
}

DLLDirection
modelica_metatype omc_NFConnector_scalarize(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_metatype _connl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _name = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _face;
  modelica_metatype _source = NULL;
  modelica_integer _cty;
  modelica_metatype _names = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _connl = tmpMeta1;
  // _name has no default value.
  // _ty has no default value.
  // _face has no default value.
  // _source has no default value.
  // _cty has no default value.
  // _names has no default value.
  /* Pattern-matching assignment */
  tmpMeta2 = _conn;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 6));
  _name = tmpMeta3;
  _ty = tmpMeta4;
  _face = tmp6  /* pattern as ty=enumeration(INSIDE, OUTSIDE) */;
  _cty = tmp8  /* pattern as ty=Integer */;
  _source = tmpMeta9;

  _names = omc_NFComponentRef_scalarizeAll(threadData, _name, 0 /* false */);

  _ty = omc_NFType_arrayElementType(threadData, _ty);

  {
    modelica_metatype _n;
    for (tmpMeta10 = _names; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
    {
      _n = MMC_CAR(tmpMeta10);
      tmpMeta12 = mmc_mk_box6(3, &NFConnector_CONNECTOR__desc, _n, _ty, mmc_mk_integer((modelica_integer)_face), mmc_mk_integer(_cty), _source);
      tmpMeta11 = mmc_mk_cons(tmpMeta12, _connl);
      _connl = tmpMeta11;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _connl;
}

DLLDirection
modelica_metatype omc_NFConnector_split(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_metatype _connl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _connl has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _connl = omc_NFConnector_splitImpl(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 3))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 4)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 6))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 5)))), tmpMeta1, tmpMeta2);

  _connl = listReverseInPlace(_connl);
  _return: OMC_LABEL_UNUSED
  return _connl;
}

DLLDirection
modelica_integer omc_NFConnector_hashNoSubs(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_integer _hash;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hash has no default value.
  _hash = omc_NFComponentRef_hashStrip(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))));
  _return: OMC_LABEL_UNUSED
  return _hash;
}
modelica_metatype boxptr_NFConnector_hashNoSubs(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_integer _hash;
  modelica_metatype out_hash;
  _hash = omc_NFConnector_hashNoSubs(threadData, _conn);
  out_hash = mmc_mk_icon(_hash);
  return out_hash;
}

DLLDirection
modelica_integer omc_NFConnector_hash(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_integer _hash;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hash = omc_NFComponentRef_hash(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))));
  _return: OMC_LABEL_UNUSED
  return _hash;
}
modelica_metatype boxptr_NFConnector_hash(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_integer _hash;
  modelica_metatype out_hash;
  _hash = omc_NFConnector_hash(threadData, _conn);
  out_hash = mmc_mk_icon(_hash);
  return out_hash;
}

DLLDirection
modelica_string omc_NFConnector_faceString(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = ((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 4)))) == 1)?_OMC_LIT0:_OMC_LIT1);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NFConnector_toString(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))));
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NFConnector_name(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_metatype _name = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _name = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2)));
  _return: OMC_LABEL_UNUSED
  return _name;
}

DLLDirection
modelica_boolean omc_NFConnector_isArray(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_boolean _isArray;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isArray = omc_NFType_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 3))));
  _return: OMC_LABEL_UNUSED
  return _isArray;
}
modelica_metatype boxptr_NFConnector_isArray(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_boolean _isArray;
  modelica_metatype out_isArray;
  _isArray = omc_NFConnector_isArray(threadData, _conn);
  out_isArray = mmc_mk_icon(_isArray);
  return out_isArray;
}

DLLDirection
modelica_boolean omc_NFConnector_isExpandable(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_boolean _isExpandable;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isExpandable = omc_NFPrefixes_ConnectorType_isExpandable(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 5)))));
  _return: OMC_LABEL_UNUSED
  return _isExpandable;
}
modelica_metatype boxptr_NFConnector_isExpandable(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_boolean _isExpandable;
  modelica_metatype out_isExpandable;
  _isExpandable = omc_NFConnector_isExpandable(threadData, _conn);
  out_isExpandable = mmc_mk_icon(_isExpandable);
  return out_isExpandable;
}

DLLDirection
modelica_boolean omc_NFConnector_isDeleted(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_boolean _isDeleted;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isDeleted = omc_NFComponentRef_isDeleted(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))));
  _return: OMC_LABEL_UNUSED
  return _isDeleted;
}
modelica_metatype boxptr_NFConnector_isDeleted(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_boolean _isDeleted;
  modelica_metatype out_isDeleted;
  _isDeleted = omc_NFConnector_isDeleted(threadData, _conn);
  out_isDeleted = mmc_mk_icon(_isDeleted);
  return out_isDeleted;
}

DLLDirection
modelica_metatype omc_NFConnector_setOutside(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconn)
{
  modelica_metatype _conn = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conn = __omcQ_24in_5Fconn;
  if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 4)))) != 2))
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_conn), 7*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = mmc_mk_integer(2);
    _conn = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _conn;
}

DLLDirection
modelica_boolean omc_NFConnector_isInside(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_boolean _isInside;
  modelica_integer _f;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isInside has no default value.
  _f = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 4))));
  _isInside = ((modelica_integer)_f == 1);
  _return: OMC_LABEL_UNUSED
  return _isInside;
}
modelica_metatype boxptr_NFConnector_isInside(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_boolean _isInside;
  modelica_metatype out_isInside;
  _isInside = omc_NFConnector_isInside(threadData, _conn);
  out_isInside = mmc_mk_icon(_isInside);
  return out_isInside;
}

DLLDirection
modelica_boolean omc_NFConnector_isOutside(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_boolean _isOutside;
  modelica_integer _f;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isOutside has no default value.
  _f = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 4))));
  _isOutside = ((modelica_integer)_f == 2);
  _return: OMC_LABEL_UNUSED
  return _isOutside;
}
modelica_metatype boxptr_NFConnector_isOutside(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_boolean _isOutside;
  modelica_metatype out_isOutside;
  _isOutside = omc_NFConnector_isOutside(threadData, _conn);
  out_isOutside = mmc_mk_icon(_isOutside);
  return out_isOutside;
}

DLLDirection
modelica_boolean omc_NFConnector_isNodeNameEqual(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2)
{
  modelica_boolean _isEqual;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isEqual = (stringEqual(omc_NFInstNode_InstNode_name(threadData, omc_NFComponentRef_node(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn1), 2))))), omc_NFInstNode_InstNode_name(threadData, omc_NFComponentRef_node(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn2), 2)))))));
  _return: OMC_LABEL_UNUSED
  return _isEqual;
}
modelica_metatype boxptr_NFConnector_isNodeNameEqual(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2)
{
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  _isEqual = omc_NFConnector_isNodeNameEqual(threadData, _conn1, _conn2);
  out_isEqual = mmc_mk_icon(_isEqual);
  return out_isEqual;
}

DLLDirection
modelica_boolean omc_NFConnector_isPrefix(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2)
{
  modelica_boolean _isPrefix;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isPrefix = omc_NFComponentRef_isPrefix(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn2), 2))));
  _return: OMC_LABEL_UNUSED
  return _isPrefix;
}
modelica_metatype boxptr_NFConnector_isPrefix(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2)
{
  modelica_boolean _isPrefix;
  modelica_metatype out_isPrefix;
  _isPrefix = omc_NFConnector_isPrefix(threadData, _conn1, _conn2);
  out_isPrefix = mmc_mk_icon(_isPrefix);
  return out_isPrefix;
}

DLLDirection
modelica_boolean omc_NFConnector_isEqualNoSubs(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2)
{
  modelica_boolean _isEqual;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isEqual = (omc_NFComponentRef_isEqualStrip(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn2), 2)))) && (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn1), 4)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn2), 4))))));
  _return: OMC_LABEL_UNUSED
  return _isEqual;
}
modelica_metatype boxptr_NFConnector_isEqualNoSubs(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2)
{
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  _isEqual = omc_NFConnector_isEqualNoSubs(threadData, _conn1, _conn2);
  out_isEqual = mmc_mk_icon(_isEqual);
  return out_isEqual;
}

DLLDirection
modelica_boolean omc_NFConnector_isEqual(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2)
{
  modelica_boolean _isEqual;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isEqual = (omc_NFComponentRef_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn2), 2)))) && (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn1), 4)))) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn2), 4))))));
  _return: OMC_LABEL_UNUSED
  return _isEqual;
}
modelica_metatype boxptr_NFConnector_isEqual(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2)
{
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  _isEqual = omc_NFConnector_isEqual(threadData, _conn1, _conn2);
  out_isEqual = mmc_mk_icon(_isEqual);
  return out_isEqual;
}

DLLDirection
modelica_integer omc_NFConnector_variability(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_integer _var;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = omc_NFComponent_variability(threadData, omc_NFInstNode_InstNode_component(threadData, omc_NFComponentRef_node(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))))));
  _return: OMC_LABEL_UNUSED
  return _var;
}
modelica_metatype boxptr_NFConnector_variability(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_integer _var;
  modelica_metatype out_var;
  _var = omc_NFConnector_variability(threadData, _conn);
  out_var = mmc_mk_icon(_var);
  return out_var;
}

DLLDirection
modelica_metatype omc_NFConnector_getInfo(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_metatype _info = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _info = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 6)))), 2)));
  _return: OMC_LABEL_UNUSED
  return _info;
}

DLLDirection
modelica_metatype omc_NFConnector_getType(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_metatype _ty = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ty = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 3)));
  _return: OMC_LABEL_UNUSED
  return _ty;
}

DLLDirection
modelica_metatype omc_NFConnector_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_metatype _conns = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = __omcQ_24in_5Fconns;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 9: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons(omc_NFConnector_fromCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _source), _conns);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 11: {
          modelica_integer tmp6;
          modelica_integer tmp7;
          modelica_integer tmp8;
          
          /* Pattern matching succeeded */
          tmp6 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))); tmp7 = ((modelica_integer) -1); tmp8 = ((modelica_integer) 1);
          if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
          {
            modelica_integer _i;
            for(_i = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))); in_range_integer(_i, tmp6, tmp8); _i += tmp7)
            {
              _conns = omc_NFConnector_fromExp(threadData, arrayGetNoBoundsChecking((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _i), _source, _conns);
            }
          }
          tmpMeta1 = _conns;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT2,omc_NFExpression_toString(threadData, _exp));
          omc_Error_assertion(threadData, 0 /* false */, tmpMeta9, _OMC_LIT4);
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
  _conns = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _conns;
}

DLLDirection
modelica_metatype omc_NFConnector_fromFacedCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _ty, modelica_integer _face, modelica_metatype _source)
{
  modelica_metatype _conn = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _comp = NULL;
  modelica_integer _cty;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _conn has no default value.
  _node = omc_NFComponentRef_node(threadData, _cref);
  // _comp has no default value.
  // _cty has no default value.
  // _res has no default value.
  if(omc_NFInstNode_InstNode_isComponent(threadData, _node))
  {
    _comp = omc_NFInstNode_InstNode_component(threadData, _node);

    _res = omc_NFClass_restriction(threadData, omc_NFInstNode_InstNode_getClass(threadData, omc_NFComponent_classInstance(threadData, _comp)));

    _cty = omc_NFComponent_connectorType(threadData, _comp);
  }
  else
  {
    _cty = ((modelica_integer) 17);
  }

  tmpMeta1 = mmc_mk_box6(3, &NFConnector_CONNECTOR__desc, omc_NFComponentRef_simplifySubscripts(threadData, _cref, 0 /* false */), _ty, mmc_mk_integer((modelica_integer)_face), mmc_mk_integer(_cty), _source);
  _conn = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _conn;
}
modelica_metatype boxptr_NFConnector_fromFacedCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _ty, modelica_metatype _face, modelica_metatype _source)
{
  modelica_integer tmp1;
  modelica_metatype _conn = NULL;
  tmp1 = mmc_unbox_integer(_face);
  _conn = omc_NFConnector_fromFacedCref(threadData, _cref, _ty, tmp1, _source);
  /* skip box _conn; NFConnector */
  return _conn;
}

DLLDirection
modelica_metatype omc_NFConnector_fromCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _ty, modelica_metatype _source)
{
  modelica_metatype _conn = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conn = omc_NFConnector_fromFacedCref(threadData, _cref, _ty, omc_NFConnector_crefFace(threadData, _cref), _source);
  _return: OMC_LABEL_UNUSED
  return _conn;
}

