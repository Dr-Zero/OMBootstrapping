#include "omc_simulation_settings.h"
#include "NFExpandableConnectors.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "The connectors in connect(%s, %s) are not type compatible."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,58,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(406)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(128)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT5,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "virtual variable in expandable connector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,40,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,1) {_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,35) {&NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,17,3) {&NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,5,3) {&NFBackendExtension_Annotations_ANNOTATIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,10,3) {&NFBackendExtension_BackendInfo_BACKEND__INFO__desc,_OMC_LIT10,_OMC_LIT11,_OMC_LIT12,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Augmenting a virtual element in an expandable connector is not yet supported."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,77,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "NFExpandableConnectors.augmentExpandableConnector got non-component element"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,75,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "/projects/OpenModelica-session2/OMCompiler/Compiler/NFFrontEnd/NFExpandableConnectors.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,88,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT18_6,1.781983298e9);
#define _OMC_LIT18_6 MMC_REFREALLIT(_OMC_LIT_STRUCT18_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT17,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(409)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(409)),MMC_IMMEDIATE(MMC_TAGFIXNUM(95)),_OMC_LIT18_6}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,1,3) {&DAE_Prefix_NOPRE__desc,}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,0,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,11) {&DAE_Type_T__UNKNOWN__desc,}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,4,4) {&DAE_ComponentRef_CREF__IDENT__desc,_OMC_LIT20,_OMC_LIT21,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,2,0) {_OMC_LIT22,_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "Cannot connect undeclared connectors %s with %s. At least one of them must be declared."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,87,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(50)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT24}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "Cannot connect expandable connector %s with non-expandable connector %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,72,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(49)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#include "util/modelica.h"

#include "NFExpandableConnectors_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFExpandableConnectors_hashConnector(threadData_t *threadData, modelica_metatype _conn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFExpandableConnectors_hashConnector(threadData_t *threadData, modelica_metatype _conn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_hashConnector,2,0) {(void*) boxptr_NFExpandableConnectors_hashConnector,0}};
#define boxvar_NFExpandableConnectors_hashConnector MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_hashConnector)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_updatePotentiallyPresentVariable(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_updatePotentiallyPresentVariable,2,0) {(void*) boxptr_NFExpandableConnectors_updatePotentiallyPresentVariable,0}};
#define boxvar_NFExpandableConnectors_updatePotentiallyPresentVariable MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_updatePotentiallyPresentVariable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_updateExpandableConnector(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconn, modelica_metatype *out_ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_updateExpandableConnector,2,0) {(void*) boxptr_NFExpandableConnectors_updateExpandableConnector,0}};
#define boxvar_NFExpandableConnectors_updateExpandableConnector MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_updateExpandableConnector)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_updateExpandableConnection(threadData_t *threadData, modelica_metatype _conn, modelica_metatype __omcQ_24in_5Fconns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_updateExpandableConnection,2,0) {(void*) boxptr_NFExpandableConnectors_updateExpandableConnection,0}};
#define boxvar_NFExpandableConnectors_updateExpandableConnection MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_updateExpandableConnection)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_updateUndeclaredConnection(threadData_t *threadData, modelica_metatype _conn, modelica_metatype __omcQ_24in_5Fconns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_updateUndeclaredConnection,2,0) {(void*) boxptr_NFExpandableConnectors_updateUndeclaredConnection,0}};
#define boxvar_NFExpandableConnectors_updateUndeclaredConnection MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_updateUndeclaredConnection)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_createVirtualVariables(threadData_t *threadData, modelica_metatype _connectorName, modelica_metatype _connectorType, modelica_metatype _info, modelica_metatype __omcQ_24in_5Fvars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_createVirtualVariables,2,0) {(void*) boxptr_NFExpandableConnectors_createVirtualVariables,0}};
#define boxvar_NFExpandableConnectors_createVirtualVariables MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_createVirtualVariables)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_augmentExpandableConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _expandableSet, modelica_metatype __omcQ_24in_5Fvars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_augmentExpandableConnector,2,0) {(void*) boxptr_NFExpandableConnectors_augmentExpandableConnector,0}};
#define boxvar_NFExpandableConnectors_augmentExpandableConnector MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_augmentExpandableConnector)
PROTECTED_FUNCTION_STATIC void omc_NFExpandableConnectors_markComponentPresent(threadData_t *threadData, modelica_metatype _node);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_markComponentPresent,2,0) {(void*) boxptr_NFExpandableConnectors_markComponentPresent,0}};
#define boxvar_NFExpandableConnectors_markComponentPresent MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_markComponentPresent)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_elaborateExpandableSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype __omcQ_24in_5Fvars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_elaborateExpandableSet,2,0) {(void*) boxptr_NFExpandableConnectors_elaborateExpandableSet,0}};
#define boxvar_NFExpandableConnectors_elaborateExpandableSet MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_elaborateExpandableSet)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_makeVirtualConnector(threadData_t *threadData, modelica_metatype _virtualConnector, modelica_metatype _normalConnector);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_makeVirtualConnector,2,0) {(void*) boxptr_NFExpandableConnectors_makeVirtualConnector,0}};
#define boxvar_NFExpandableConnectors_makeVirtualConnector MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_makeVirtualConnector)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_addConnectionToSets(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2, modelica_metatype __omcQ_24in_5Fcsets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_addConnectionToSets,2,0) {(void*) boxptr_NFExpandableConnectors_addConnectionToSets,0}};
#define boxvar_NFExpandableConnectors_addConnectionToSets MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_addConnectionToSets)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_addUndeclaredConnectorToSets(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconn, modelica_metatype __omcQ_24in_5Fcsets, modelica_metatype *out_csets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_addUndeclaredConnectorToSets,2,0) {(void*) boxptr_NFExpandableConnectors_addUndeclaredConnectorToSets,0}};
#define boxvar_NFExpandableConnectors_addUndeclaredConnectorToSets MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_addUndeclaredConnectorToSets)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_getExpandableConnectorsInConnector(threadData_t *threadData, modelica_metatype _c1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_getExpandableConnectorsInConnector,2,0) {(void*) boxptr_NFExpandableConnectors_getExpandableConnectorsInConnector,0}};
#define boxvar_NFExpandableConnectors_getExpandableConnectorsInConnector MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_getExpandableConnectorsInConnector)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_addNestedExpandableConnectorsToSets(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2, modelica_metatype __omcQ_24in_5Fcsets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_addNestedExpandableConnectorsToSets,2,0) {(void*) boxptr_NFExpandableConnectors_addNestedExpandableConnectorsToSets,0}};
#define boxvar_NFExpandableConnectors_addNestedExpandableConnectorsToSets MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_addNestedExpandableConnectorsToSets)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_addExpandableConnectorsToSets(threadData_t *threadData, modelica_metatype _conns, modelica_metatype __omcQ_24in_5Fcsets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_addExpandableConnectorsToSets,2,0) {(void*) boxptr_NFExpandableConnectors_addExpandableConnectorsToSets,0}};
#define boxvar_NFExpandableConnectors_addExpandableConnectorsToSets MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_addExpandableConnectorsToSets)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_sortConnections(threadData_t *threadData, modelica_metatype _conns, modelica_metatype *out_undeclaredConnections, modelica_metatype *out_normalConnections);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_sortConnections,2,0) {(void*) boxptr_NFExpandableConnectors_sortConnections,0}};
#define boxvar_NFExpandableConnectors_sortConnections MMC_REFSTRUCTLIT(boxvar_lit_NFExpandableConnectors_sortConnections)

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFExpandableConnectors_hashConnector(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_integer _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = stringHashDjb2(omc_NFComponentRef_firstName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2))), 0 /* false */));
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFExpandableConnectors_hashConnector(threadData_t *threadData, modelica_metatype _conn)
{
  modelica_integer _res;
  modelica_metatype out_res;
  _res = omc_NFExpandableConnectors_hashConnector(threadData, _conn);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_updatePotentiallyPresentVariable(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar)
{
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  if(omc_NFPrefixes_ConnectorType_isPotentiallyPresent(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6)))), 2))))))
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(12));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[6] = omc_NFComponent_getAttributes(threadData, omc_NFInstNode_InstNode_component(threadData, omc_NFComponentRef_node(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))))));
    _var = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _var;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_updateExpandableConnector(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconn, modelica_metatype *out_ty)
{
  modelica_metatype _conn = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conn = __omcQ_24in_5Fconn;
  // _ty has no default value.
  // _name has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _conn;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _name = tmpMeta2;
  _ty = tmpMeta3;

  _name = omc_NFComponentRef_updateNodeType(threadData, _name);

  _ty = omc_NFType_setArrayElementType(threadData, _ty, omc_NFType_arrayElementType(threadData, omc_NFComponentRef_nodeType(threadData, _name)));

  tmpMeta4 = mmc_mk_box6(3, &NFConnector_CONNECTOR__desc, _name, _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 6))));
  _conn = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  if (out_ty) { *out_ty = _ty; }
  return _conn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_updateExpandableConnection(threadData_t *threadData, modelica_metatype _conn, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_metatype _conns = NULL;
  modelica_metatype _c1 = NULL;
  modelica_metatype _c2 = NULL;
  modelica_metatype _ty1 = NULL;
  modelica_metatype _ty2 = NULL;
  modelica_integer _mk;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = __omcQ_24in_5Fconns;
  // _c1 has no default value.
  // _c2 has no default value.
  // _ty1 has no default value.
  // _ty2 has no default value.
  // _mk has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _conn;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _c1 = tmpMeta2;
  _c2 = tmpMeta3;

  _c1 = omc_NFExpandableConnectors_updateExpandableConnector(threadData, _c1 ,&_ty1);

  _c2 = omc_NFExpandableConnectors_updateExpandableConnector(threadData, _c2 ,&_ty2);

  tmpMeta4 = mmc_mk_box3(9, &NFExpression_CREF__desc, _ty1, omc_NFConnector_name(threadData, _c1));
  _e1 = tmpMeta4;

  tmpMeta5 = mmc_mk_box3(9, &NFExpression_CREF__desc, _ty2, omc_NFConnector_name(threadData, _c2));
  _e2 = tmpMeta5;

  omc_NFTypeCheck_matchExpressions(threadData, _e1, _ty1, _e2, _ty2, ((modelica_integer) 1) ,NULL ,NULL ,&_mk);

  if(omc_NFTypeCheck_isIncompatibleMatch(threadData, (modelica_integer)_mk))
  {
    tmpMeta6 = mmc_mk_cons(omc_NFExpression_toString(threadData, _e1), mmc_mk_cons(omc_NFExpression_toString(threadData, _e2), MMC_REFSTRUCTLIT(mmc_nil)));
    omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT3, tmpMeta6, omc_NFConnector_getInfo(threadData, _c1));
  }

  tmpMeta8 = mmc_mk_box3(3, &NFConnection_CONNECTION__desc, _c1, _c2);
  tmpMeta7 = mmc_mk_cons(tmpMeta8, _conns);
  _conns = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _conns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_updateUndeclaredConnection(threadData_t *threadData, modelica_metatype _conn, modelica_metatype __omcQ_24in_5Fconns)
{
  modelica_metatype _conns = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conns = __omcQ_24in_5Fconns;
  tmpMeta1 = mmc_mk_cons(_conn, _conns);
  _conns = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _conns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_createVirtualVariables(threadData_t *threadData, modelica_metatype _connectorName, modelica_metatype _connectorType, modelica_metatype _info, modelica_metatype __omcQ_24in_5Fvars)
{
  modelica_metatype _vars = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vars = __omcQ_24in_5Fvars;
  // _var has no default value.
  // _name has no default value.
  // _ty has no default value.
  if(omc_NFType_isComplex(threadData, _connectorType))
  {
    {
      modelica_metatype _comp;
      for (tmpMeta1 = omc_NFType_complexComponents(threadData, _connectorType), tmp5 = arrayLength(tmpMeta1), tmp4 = 1; tmp4 <= tmp5; tmp4++)
      {
        _comp = arrayGet(tmpMeta1,tmp4);
        _ty = omc_NFInstNode_InstNode_getType(threadData, _comp);

        tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
        _name = omc_NFComponentRef_prefixCref(threadData, _comp, _ty, tmpMeta2, _connectorName);

        _vars = omc_NFExpandableConnectors_createVirtualVariables(threadData, _name, _ty, _info, _vars);
      }
    }
  }
  else
  {
    tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta8 = mmc_mk_box11(3, &NFVariable_VARIABLE__desc, _connectorName, _connectorType, _OMC_LIT4, mmc_mk_integer(1), _OMC_LIT6, tmpMeta6, tmpMeta7, _OMC_LIT9, _info, _OMC_LIT13);
    _var = tmpMeta8;

    tmpMeta9 = mmc_mk_cons(_var, _vars);
    _vars = tmpMeta9;
  }
  _return: OMC_LABEL_UNUSED
  return _vars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_augmentExpandableConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _expandableSet, modelica_metatype __omcQ_24in_5Fvars)
{
  modelica_metatype _vars = NULL;
  modelica_metatype _exp_name = NULL;
  modelica_metatype _elem_name = NULL;
  modelica_metatype _exp_node = NULL;
  modelica_metatype _comp_node = NULL;
  modelica_metatype _cls_node = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _cls_tree = NULL;
  modelica_metatype _nodes = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ty = NULL;
  modelica_metatype _complex_ty = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vars = __omcQ_24in_5Fvars;
  // _exp_name has no default value.
  // _elem_name has no default value.
  // _exp_node has no default value.
  // _comp_node has no default value.
  // _cls_node has no default value.
  // _node has no default value.
  // _cls has no default value.
  // _cls_tree has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _nodes = tmpMeta1;
  // _ty has no default value.
  // _complex_ty has no default value.
  _exp_name = omc_NFConnector_name(threadData, _conn);

  _exp_node = omc_NFComponentRef_node(threadData, _exp_name);

  if(omc_NFInstNode_InstNode_isName(threadData, _exp_node))
  {
    omc_Error_addInternalError(threadData, _OMC_LIT14, omc_NFConnector_getInfo(threadData, _conn));

    MMC_THROW_INTERNAL();
  }

  _cls_node = omc_NFInstNode_InstNode_classScope(threadData, _exp_node);

  _cls_node = omc_NFInstNode_InstNode_clone(threadData, _cls_node);

  _cls = omc_NFInstNode_InstNode_getClass(threadData, _cls_node);

  _cls_tree = omc_NFClass_classTree(threadData, _cls);

  {
    modelica_metatype _c;
    for (tmpMeta2 = _expandableSet; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _c = MMC_CAR(tmpMeta2);
      _elem_name = omc_NFConnector_name(threadData, _c);

      _node = omc_NFComponentRef_node(threadData, _elem_name);

      { /* matchcontinue expression */
        {
          volatile mmc_switch_type tmp5;
          int tmp6;
          tmp5 = 0;
          MMC_TRY_INTERNAL(mmc_jumper)
          tmp4_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp5 < 2; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              /* Pattern matching succeeded */
              _comp_node = omc_NFClassTree_ClassTree_lookupElement(threadData, omc_NFInstNode_InstNode_name(threadData, _node), _cls_tree, NULL);
              goto tmp4_done;
            }
            case 1: {
              /* Pattern matching succeeded */
              _comp_node = _OMC_LIT15;
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          tmp4_done:
          (void)tmp5;
          MMC_RESTORE_INTERNAL(mmc_jumper);
          goto tmp4_done2;
          goto_3:;
          MMC_CATCH_INTERNAL(mmc_jumper);
          if (++tmp5 < 2) {
            goto tmp4_top;
          }
          MMC_THROW_INTERNAL();
          tmp4_done2:;
        }
      }
      ;

      if(omc_NFInstNode_InstNode_isEmpty(threadData, _comp_node))
      {
        tmpMeta7 = mmc_mk_cons(_node, _nodes);
        _nodes = tmpMeta7;

        _ty = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 3)));

        tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
        _elem_name = omc_NFComponentRef_prefixCref(threadData, _node, _ty, tmpMeta8, _exp_name);

        _vars = omc_NFExpandableConnectors_createVirtualVariables(threadData, _elem_name, _ty, omc_ElementSource_getInfo(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 6)))), _vars);
      }
      else
      {
        _comp_node = omc_NFInstNode_InstNode_resolveInner(threadData, _comp_node);

        if(omc_NFInstNode_InstNode_isComponent(threadData, _comp_node))
        {
          omc_NFExpandableConnectors_markComponentPresent(threadData, _comp_node);
        }
        else
        {
          omc_Error_addInternalError(threadData, _OMC_LIT16, _OMC_LIT18);
        }
      }
    }
  }

  if((!listEmpty(_nodes)))
  {
    _cls_tree = omc_NFClassTree_ClassTree_addElementsToFlatTree(threadData, _nodes, _cls_tree);

    _cls = omc_NFClass_setClassTree(threadData, _cls_tree, _cls);
  }

  _complex_ty = omc_NFTyping_makeConnectorType(threadData, _cls_tree, 0 /* false */);

  tmpMeta10 = mmc_mk_box3(14, &NFType_COMPLEX__desc, _cls_node, _complex_ty);
  _ty = tmpMeta10;

  _ty = omc_NFType_liftArrayLeftList(threadData, _ty, omc_NFType_arrayDims(threadData, omc_NFInstNode_InstNode_getType(threadData, _exp_node)));

  _cls = omc_NFClass_setType(threadData, _ty, _cls);

  omc_NFInstNode_InstNode_updateClass(threadData, _cls, _cls_node);

  omc_NFInstNode_InstNode_componentApply(threadData, _exp_node, boxvar_NFComponent_setType, _ty);
  _return: OMC_LABEL_UNUSED
  return _vars;
}

PROTECTED_FUNCTION_STATIC void omc_NFExpandableConnectors_markComponentPresent(threadData_t *threadData, modelica_metatype _node)
{
  modelica_metatype _comp = NULL;
  modelica_integer _cty;
  modelica_metatype _cls = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  // _cty has no default value.
  // _cls has no default value.
  _comp = omc_NFInstNode_InstNode_component(threadData, _node);

  _cty = omc_NFComponent_connectorType(threadData, _comp);

  if(omc_NFPrefixes_ConnectorType_isPotentiallyPresent(threadData, _cty))
  {
    _cty = omc_NFPrefixes_ConnectorType_setPresent(threadData, _cty);

    _comp = omc_NFComponent_setConnectorType(threadData, _cty, _comp);

    omc_NFInstNode_InstNode_updateComponent(threadData, _comp, _node);

    if(omc_NFType_isComplex(threadData, omc_NFComponent_getType(threadData, _comp)))
    {
      _cls = omc_NFInstNode_InstNode_getClass(threadData, omc_NFComponent_classInstance(threadData, _comp));

      omc_NFClassTree_ClassTree_applyComponents(threadData, omc_NFClass_classTree(threadData, _cls), boxvar_NFExpandableConnectors_markComponentPresent);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_elaborateExpandableSet(threadData_t *threadData, modelica_metatype _set, modelica_metatype __omcQ_24in_5Fvars)
{
  modelica_metatype _vars = NULL;
  modelica_metatype _exp_set = NULL;
  modelica_metatype _exp_conns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _exp_set_lst = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _vars = __omcQ_24in_5Fvars;
  // _exp_set has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _exp_conns = tmpMeta1;
  // _exp_set_lst has no default value.
  _exp_set = omc_UnorderedSet_new(threadData, boxvar_NFExpandableConnectors_hashConnector, boxvar_NFConnector_isNodeNameEqual, ((modelica_integer) 13));

  {
    modelica_metatype _c;
    for (tmpMeta2 = _set; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _c = MMC_CAR(tmpMeta2);
      if(omc_NFPrefixes_ConnectorType_isExpandable(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 5))))))
      {
        tmpMeta3 = mmc_mk_cons(_c, _exp_conns);
        _exp_conns = tmpMeta3;
      }
      else
      {
        if(omc_NFPrefixes_ConnectorType_isUndeclared(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 5))))))
        {
          omc_UnorderedSet_add(threadData, _c, _exp_set);

          omc_NFExpandableConnectors_markComponentPresent(threadData, omc_NFComponentRef_node(threadData, omc_NFConnector_name(threadData, _c)));
        }
      }
    }
  }

  _exp_set_lst = omc_UnorderedSet_toList(threadData, _exp_set);

  {
    modelica_metatype _ec;
    for (tmpMeta5 = _exp_conns; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _ec = MMC_CAR(tmpMeta5);
      _vars = omc_NFExpandableConnectors_augmentExpandableConnector(threadData, _ec, _exp_set_lst, _vars);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _vars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_makeVirtualConnector(threadData_t *threadData, modelica_metatype _virtualConnector, modelica_metatype _normalConnector)
{
  modelica_metatype _newConnector = NULL;
  modelica_metatype _virtual_cref = NULL;
  modelica_metatype _normal_cref = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newConnector has no default value.
  // _virtual_cref has no default value.
  // _normal_cref has no default value.
  // _ty has no default value.
  // _node has no default value.
  _virtual_cref = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_virtualConnector), 2)));

  _normal_cref = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_normalConnector), 2)));

  _ty = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_normalConnector), 3)));

  _node = omc_NFComponentRef_node(threadData, _normal_cref);

  _node = omc_NFInstNode_InstNode_clone(threadData, _node);

  _node = omc_NFInstNode_InstNode_rename(threadData, omc_NFComponentRef_firstName(threadData, _virtual_cref, 0 /* false */), _node);

  _node = omc_NFInstNode_InstNode_setParent(threadData, omc_NFComponentRef_node(threadData, omc_NFComponentRef_rest(threadData, _virtual_cref)), _node);

  _node = omc_NFInstNode_InstNode_componentApply(threadData, _node, boxvar_NFComponent_setType, _ty);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _virtual_cref = omc_NFComponentRef_prefixCref(threadData, _node, _ty, tmpMeta1, omc_NFComponentRef_rest(threadData, _virtual_cref));

  tmpMeta2 = mmc_mk_box6(3, &NFConnector_CONNECTOR__desc, _virtual_cref, _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_virtualConnector), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_virtualConnector), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_virtualConnector), 6))));
  _newConnector = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _newConnector;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_addConnectionToSets(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2, modelica_metatype __omcQ_24in_5Fcsets)
{
  modelica_metatype _csets = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _csets = __omcQ_24in_5Fcsets;
  _csets = omc_NFConnectionSets_ConnectionSets_merge(threadData, omc_NFConnector_setOutside(threadData, _c1), omc_NFConnector_setOutside(threadData, _c2), _csets);
  _return: OMC_LABEL_UNUSED
  return _csets;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_addUndeclaredConnectorToSets(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconn, modelica_metatype __omcQ_24in_5Fcsets, modelica_metatype *out_csets)
{
  modelica_metatype _conn = NULL;
  modelica_metatype _csets = NULL;
  modelica_metatype _c1 = NULL;
  modelica_metatype _c2 = NULL;
  modelica_metatype _c = NULL;
  modelica_metatype _ec = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _conn = __omcQ_24in_5Fconn;
  _csets = __omcQ_24in_5Fcsets;
  // _c1 has no default value.
  // _c2 has no default value.
  // _c has no default value.
  // _ec has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _conn;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _c1 = tmpMeta2;
  _c2 = tmpMeta3;

  if(omc_NFPrefixes_ConnectorType_isUndeclared(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 5))))))
  {
    if(omc_NFPrefixes_ConnectorType_isVirtual(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 5))))))
    {
      _c1 = omc_NFExpandableConnectors_makeVirtualConnector(threadData, _c1, _c2);

      tmpMeta4 = mmc_mk_box3(3, &NFConnection_CONNECTION__desc, _c1, _c2);
      _conn = tmpMeta4;
    }

    _c = _c1;
  }
  else
  {
    if(omc_NFPrefixes_ConnectorType_isVirtual(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 5))))))
    {
      _c2 = omc_NFExpandableConnectors_makeVirtualConnector(threadData, _c2, _c1);

      tmpMeta5 = mmc_mk_box3(3, &NFConnection_CONNECTION__desc, _c1, _c2);
      _conn = tmpMeta5;
    }

    _c = _c2;
  }

  tmpMeta6 = mmc_mk_box6(3, &NFConnector_CONNECTOR__desc, omc_NFComponentRef_rest(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 4))), mmc_mk_integer(((modelica_integer) 64)), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 6))));
  _ec = tmpMeta6;

  _csets = omc_NFExpandableConnectors_addConnectionToSets(threadData, _c, _ec, _csets);
  _return: OMC_LABEL_UNUSED
  if (out_csets) { *out_csets = _csets; }
  return _conn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_getExpandableConnectorsInConnector(threadData_t *threadData, modelica_metatype _c1)
{
  modelica_metatype _ecl = NULL;
  modelica_metatype _nodes = NULL;
  modelica_metatype _par_name = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ecl has no default value.
  // _nodes has no default value.
  // _par_name has no default value.
  // _name has no default value.
  // _ty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _c1;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
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
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,11,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,3,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          
          _par_name = tmpMeta6;
          _nodes = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _ecl = tmpMeta10;

          {
            modelica_metatype _n;
            for (tmpMeta11 = _nodes; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _n = MMC_CAR(tmpMeta11);
              _ty = omc_NFInstNode_InstNode_getType(threadData, _n);

              tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
              _name = omc_NFComponentRef_prefixCref(threadData, _n, _ty, tmpMeta12, _par_name);

              tmpMeta13 = mmc_mk_cons(omc_NFConnector_fromCref(threadData, _name, _ty, omc_ElementSource_createElementSource(threadData, omc_NFInstNode_InstNode_info(threadData, _n), mmc_mk_none(), _OMC_LIT19, _OMC_LIT23)), _ecl);
              _ecl = tmpMeta13;
            }
          }
          tmpMeta1 = _ecl;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta15;
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
  _ecl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ecl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_addNestedExpandableConnectorsToSets(threadData_t *threadData, modelica_metatype _c1, modelica_metatype _c2, modelica_metatype __omcQ_24in_5Fcsets)
{
  modelica_metatype _csets = NULL;
  modelica_metatype _ecl1 = NULL;
  modelica_metatype _ecl2 = NULL;
  modelica_metatype _oec = NULL;
  modelica_metatype _conns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _csets = __omcQ_24in_5Fcsets;
  // _ecl1 has no default value.
  // _ecl2 has no default value.
  // _oec has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _conns = tmpMeta1;
  _ecl1 = omc_NFExpandableConnectors_getExpandableConnectorsInConnector(threadData, _c1);

  _ecl2 = omc_NFExpandableConnectors_getExpandableConnectorsInConnector(threadData, _c2);

  if((listEmpty(_ecl1) && listEmpty(_ecl2)))
  {
    goto _return;
  }

  {
    modelica_metatype _ec1;
    for (tmpMeta2 = _ecl1; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _ec1 = MMC_CAR(tmpMeta2);
      _ecl2 = omc_List_deleteMemberOnTrue(threadData, _ec1, _ecl2, boxvar_NFConnector_isNodeNameEqual ,&_oec);

      if(isSome(_oec))
      {
        tmpMeta4 = mmc_mk_box3(3, &NFConnection_CONNECTION__desc, _ec1, omc_Util_getOption(threadData, _oec));
        tmpMeta3 = mmc_mk_cons(tmpMeta4, _conns);
        _conns = tmpMeta3;
      }
    }
  }

  _csets = omc_NFExpandableConnectors_addExpandableConnectorsToSets(threadData, _conns, _csets);
  _return: OMC_LABEL_UNUSED
  return _csets;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_addExpandableConnectorsToSets(threadData_t *threadData, modelica_metatype _conns, modelica_metatype __omcQ_24in_5Fcsets)
{
  modelica_metatype _csets = NULL;
  modelica_metatype _c1 = NULL;
  modelica_metatype _c2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _csets = __omcQ_24in_5Fcsets;
  // _c1 has no default value.
  // _c2 has no default value.
  {
    modelica_metatype _conn;
    for (tmpMeta1 = _conns; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _conn = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _conn;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,2) == 0) MMC_THROW_INTERNAL();
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
      _c1 = tmpMeta3;
      _c2 = tmpMeta4;

      _csets = omc_NFExpandableConnectors_addConnectionToSets(threadData, _c1, _c2, _csets);

      _csets = omc_NFExpandableConnectors_addNestedExpandableConnectorsToSets(threadData, _c1, _c2, _csets);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _csets;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFExpandableConnectors_sortConnections(threadData_t *threadData, modelica_metatype _conns, modelica_metatype *out_undeclaredConnections, modelica_metatype *out_normalConnections)
{
  modelica_metatype _expandableConnections = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _undeclaredConnections = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _normalConnections = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _c1 = NULL;
  modelica_metatype _c2 = NULL;
  modelica_boolean _is_undeclared1;
  modelica_boolean _is_undeclared2;
  modelica_boolean _is_expandable1;
  modelica_boolean _is_expandable2;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _expandableConnections = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _undeclaredConnections = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _normalConnections = tmpMeta3;
  // _c1 has no default value.
  // _c2 has no default value.
  // _is_undeclared1 has no default value.
  // _is_undeclared2 has no default value.
  // _is_expandable1 has no default value.
  // _is_expandable2 has no default value.
  {
    modelica_metatype _conn;
    for (tmpMeta4 = _conns; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _conn = MMC_CAR(tmpMeta4);
      /* Pattern-matching assignment */
      tmpMeta5 = _conn;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,2) == 0) MMC_THROW_INTERNAL();
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
      _c1 = tmpMeta6;
      _c2 = tmpMeta7;

      _is_undeclared1 = omc_NFPrefixes_ConnectorType_isUndeclared(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 5)))));

      _is_undeclared2 = omc_NFPrefixes_ConnectorType_isUndeclared(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 5)))));

      _is_expandable1 = omc_NFPrefixes_ConnectorType_isExpandable(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 5)))));

      _is_expandable2 = omc_NFPrefixes_ConnectorType_isExpandable(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 5)))));

      if((_is_expandable1 || _is_expandable2))
      {
        if((_is_expandable1 && _is_expandable2))
        {
          tmpMeta8 = mmc_mk_cons(_conn, _expandableConnections);
          _expandableConnections = tmpMeta8;
        }
        else
        {
          tmpMeta9 = mmc_mk_cons(omc_NFConnector_toString(threadData, (_is_expandable1?_c1:_c2)), mmc_mk_cons(omc_NFConnector_toString(threadData, (_is_expandable1?_c2:_c1)), MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT27, tmpMeta9, omc_NFConnector_getInfo(threadData, _c1));
        }
      }
      else
      {
        if((_is_undeclared1 || _is_undeclared2))
        {
          if((_is_undeclared1 && _is_undeclared2))
          {
            tmpMeta10 = mmc_mk_cons(omc_NFConnector_toString(threadData, _c1), mmc_mk_cons(omc_NFConnector_toString(threadData, _c2), MMC_REFSTRUCTLIT(mmc_nil)));
            omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT25, tmpMeta10, omc_NFConnector_getInfo(threadData, _c1));
          }
          else
          {
            tmpMeta11 = mmc_mk_cons(_conn, _undeclaredConnections);
            _undeclaredConnections = tmpMeta11;
          }
        }
        else
        {
          tmpMeta12 = mmc_mk_cons(_conn, _normalConnections);
          _normalConnections = tmpMeta12;
        }
      }
    }
  }

  _normalConnections = listReverseInPlace(_normalConnections);
  _return: OMC_LABEL_UNUSED
  if (out_undeclaredConnections) { *out_undeclaredConnections = _undeclaredConnections; }
  if (out_normalConnections) { *out_normalConnections = _normalConnections; }
  return _expandableConnections;
}

DLLDirection
modelica_metatype omc_NFExpandableConnectors_elaborate(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel, modelica_metatype __omcQ_24in_5Fconnections, modelica_metatype *out_connections)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype _connections = NULL;
  modelica_metatype _expandable_conns = NULL;
  modelica_metatype _undeclared_conns = NULL;
  modelica_metatype _conns = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _csets = NULL;
  modelica_metatype _csets_array = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  _connections = __omcQ_24in_5Fconnections;
  // _expandable_conns has no default value.
  // _undeclared_conns has no default value.
  // _conns has no default value.
  // _vars has no default value.
  // _csets has no default value.
  // _csets_array has no default value.
  _expandable_conns = omc_NFExpandableConnectors_sortConnections(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_connections), 2))) ,&_undeclared_conns ,&_conns);

  if((listEmpty(_expandable_conns) && listEmpty(_undeclared_conns)))
  {
    goto _return;
  }

  _csets = omc_NFConnectionSets_ConnectionSets_emptySets(threadData, listLength(_expandable_conns) + listLength(_undeclared_conns));

  _csets = omc_NFExpandableConnectors_addExpandableConnectorsToSets(threadData, _expandable_conns, _csets);

  _undeclared_conns = omc_List_mapFold(threadData, _undeclared_conns, boxvar_NFExpandableConnectors_addUndeclaredConnectorToSets, _csets ,&_csets);

  _csets_array = omc_NFConnectionSets_ConnectionSets_extractSets(threadData, _csets, NULL);

  _vars = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3)));

  {
    modelica_metatype _set;
    for (tmpMeta1 = _csets_array, tmp4 = arrayLength(tmpMeta1), tmp3 = 1; tmp3 <= tmp4; tmp3++)
    {
      _set = arrayGet(tmpMeta1,tmp3);
      _vars = omc_NFExpandableConnectors_elaborateExpandableSet(threadData, _set, _vars);
    }
  }

  _conns = omc_List_fold(threadData, _undeclared_conns, boxvar_NFExpandableConnectors_updateUndeclaredConnection, _conns);

  _conns = omc_List_fold(threadData, _expandable_conns, boxvar_NFExpandableConnectors_updateExpandableConnection, _conns);

  tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_connections), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = _conns;
  _connections = tmpMeta5;

  {
    modelica_metatype __omcQ_24tmpVar1;
    modelica_metatype* tmp7;
    modelica_metatype tmpMeta8;
    modelica_metatype __omcQ_24tmpVar0;
    modelica_integer tmp9;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = _vars;
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar1 = tmpMeta8; /* defaultValue */
    tmp7 = &__omcQ_24tmpVar1;
    while(1) {
      tmp9 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp9--;
      }
      if (tmp9 == 0) {
        __omcQ_24tmpVar0 = omc_NFExpandableConnectors_updatePotentiallyPresentVariable(threadData, _v);
        *tmp7 = mmc_mk_cons(__omcQ_24tmpVar0,0);
        tmp7 = &MMC_CDR(*tmp7);
      } else if (tmp9 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp7 = mmc_mk_nil();
    tmpMeta6 = __omcQ_24tmpVar1;
  }
  _vars = tmpMeta6;

  tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _vars;
  _flatModel = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  if (out_connections) { *out_connections = _connections; }
  return _flatModel;
}

