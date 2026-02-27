#include "omc_simulation_settings.h"
#include "NFConnection.h"
#define _OMC_LIT0_data "NFConnection.checkBalance got unbalanced connection "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,52,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "\n  lhs: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,8,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,2,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "\n  rhs: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,8,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFConnection.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,79,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT8_6,1.770032059e9);
#define _OMC_LIT8_6 MMC_REFREALLIT(_OMC_LIT_STRUCT8_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(134)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(136)),MMC_IMMEDIATE(MMC_TAGFIXNUM(109)),_OMC_LIT8_6}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "connect("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,8,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,1,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#include "util/modelica.h"

#include "NFConnection_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_NFConnection_checkBalance(threadData_t *threadData, modelica_metatype _leftConnectors, modelica_metatype _rightConnectors, modelica_metatype _conn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnection_checkBalance,2,0) {(void*) boxptr_NFConnection_checkBalance,0}};
#define boxvar_NFConnection_checkBalance MMC_REFSTRUCTLIT(boxvar_lit_NFConnection_checkBalance)

PROTECTED_FUNCTION_STATIC void omc_NFConnection_checkBalance(threadData_t *threadData, modelica_metatype _leftConnectors, modelica_metatype _rightConnectors, modelica_metatype _conn)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((listLength(_leftConnectors) != listLength(_rightConnectors)))
  {
    tmpMeta1 = stringAppend(_OMC_LIT0,omc_NFConnection_toString(threadData, _conn));
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT1);
    tmpMeta3 = stringAppend(tmpMeta2,omc_List_toString(threadData, _leftConnectors, boxvar_NFConnector_toString, _OMC_LIT2, _OMC_LIT3, _OMC_LIT4, _OMC_LIT5, 1 /* true */, ((modelica_integer) 0)));
    tmpMeta4 = stringAppend(tmpMeta3,omc_List_toString(threadData, _rightConnectors, boxvar_NFConnector_toString, _OMC_LIT6, _OMC_LIT3, _OMC_LIT4, _OMC_LIT5, 1 /* true */, ((modelica_integer) 0)));
    omc_Error_assertion(threadData, 0 /* false */, tmpMeta4, _OMC_LIT8);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_string omc_NFConnection_toString(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT9,omc_NFConnector_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2)))));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT4);
  tmpMeta3 = stringAppend(tmpMeta2,omc_NFConnector_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 3)))));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT10);
  _str = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NFConnection_scalarizePrefix(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_metatype _conns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _cls = NULL;
  modelica_metatype _crs = NULL;
  modelica_metatype _cr = NULL;
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
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _conns = tmpMeta1;
  // _cls has no default value.
  // _crs has no default value.
  // _cr has no default value.
  if((!omc_NFConnector_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))))))
  {
    tmpMeta2 = mmc_mk_cons(_conn, MMC_REFSTRUCTLIT(mmc_nil));
    _conns = tmpMeta2;

    goto _return;
  }

  _cls = omc_NFConnector_scalarizePrefix(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))));

  _crs = omc_NFConnector_scalarizePrefix(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 3))));

  omc_NFConnection_checkBalance(threadData, _cls, _crs, _conn);

  {
    modelica_metatype _cl;
    for (tmpMeta3 = _cls; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _cl = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _crs;
      if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
      tmpMeta5 = MMC_CAR(tmpMeta4);
      tmpMeta6 = MMC_CDR(tmpMeta4);
      _cr = tmpMeta5;
      _crs = tmpMeta6;

      tmpMeta8 = mmc_mk_box3(3, &NFConnection_CONNECTION__desc, _cl, _cr);
      tmpMeta7 = mmc_mk_cons(tmpMeta8, _conns);
      _conns = tmpMeta7;
    }
  }

  _conns = listReverseInPlace(_conns);
  _return: OMC_LABEL_UNUSED
  return _conns;
}

DLLDirection
modelica_metatype omc_NFConnection_scalarize(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_metatype _conns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _cls = NULL;
  modelica_metatype _crs = NULL;
  modelica_metatype _cr = NULL;
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
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _conns = tmpMeta1;
  // _cls has no default value.
  // _crs has no default value.
  // _cr has no default value.
  if((!omc_NFConnector_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))))))
  {
    tmpMeta2 = mmc_mk_cons(_conn, MMC_REFSTRUCTLIT(mmc_nil));
    _conns = tmpMeta2;

    goto _return;
  }

  _cls = omc_NFConnector_scalarize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))));

  _crs = omc_NFConnector_scalarize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 3))));

  omc_NFConnection_checkBalance(threadData, _cls, _crs, _conn);

  {
    modelica_metatype _cl;
    for (tmpMeta3 = _cls; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _cl = MMC_CAR(tmpMeta3);
      /* Pattern-matching assignment */
      tmpMeta4 = _crs;
      if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
      tmpMeta5 = MMC_CAR(tmpMeta4);
      tmpMeta6 = MMC_CDR(tmpMeta4);
      _cr = tmpMeta5;
      _crs = tmpMeta6;

      tmpMeta8 = mmc_mk_box3(3, &NFConnection_CONNECTION__desc, _cl, _cr);
      tmpMeta7 = mmc_mk_cons(tmpMeta8, _conns);
      _conns = tmpMeta7;
    }
  }

  _conns = listReverseInPlace(_conns);
  _return: OMC_LABEL_UNUSED
  return _conns;
}

DLLDirection
modelica_metatype omc_NFConnection_split(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_metatype _conns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _cls = NULL;
  modelica_metatype _crs = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _conns = tmpMeta1;
  // _cls has no default value.
  // _crs has no default value.
  // _cr has no default value.
  _cls = omc_NFConnector_split(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))));

  _crs = omc_NFConnector_split(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 3))));

  omc_NFConnection_checkBalance(threadData, _cls, _crs, _conn);

  {
    modelica_metatype _cl;
    for (tmpMeta2 = _cls; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _cl = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _crs;
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
      tmpMeta4 = MMC_CAR(tmpMeta3);
      tmpMeta5 = MMC_CDR(tmpMeta3);
      _cr = tmpMeta4;
      _crs = tmpMeta5;

      if((!(omc_NFConnector_isDeleted(threadData, _cl) || omc_NFConnector_isDeleted(threadData, _cr))))
      {
        tmpMeta7 = mmc_mk_box3(3, &NFConnection_CONNECTION__desc, _cl, _cr);
        tmpMeta6 = mmc_mk_cons(tmpMeta7, _conns);
        _conns = tmpMeta6;
      }
    }
  }

  _conns = listReverseInPlace(_conns);
  _return: OMC_LABEL_UNUSED
  return _conns;
}

