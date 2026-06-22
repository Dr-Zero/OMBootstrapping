#ifndef NFConnections__H
#define NFConnections__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_ComponentRef_CREF__IDENT__desc;

extern struct record_description DAE_Prefix_NOPRE__desc;

extern struct record_description DAE_Type_T__UNKNOWN__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description NFConnection_CONNECTION__desc;

extern struct record_description NFConnections_CONNECTIONS__desc;

extern struct record_description NFExpression_CREF__desc;


DLLDirection
modelica_metatype omc_NFConnections_toStringList(threadData_t *threadData, modelica_metatype _conns);
#define boxptr_NFConnections_toStringList omc_NFConnections_toStringList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_toStringList,2,0) {(void*) boxptr_NFConnections_toStringList,0}};
#define boxvar_NFConnections_toStringList MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_toStringList)


DLLDirection
modelica_string omc_NFConnections_toString(threadData_t *threadData, modelica_metatype _conns);
#define boxptr_NFConnections_toString omc_NFConnections_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_toString,2,0) {(void*) boxptr_NFConnections_toString,0}};
#define boxvar_NFConnections_toString MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_toString)


DLLDirection
void omc_NFConnections_analyseArrayConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _connectCounts);
#define boxptr_NFConnections_analyseArrayConnector omc_NFConnections_analyseArrayConnector
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_analyseArrayConnector,2,0) {(void*) boxptr_NFConnections_analyseArrayConnector,0}};
#define boxvar_NFConnections_analyseArrayConnector MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_analyseArrayConnector)


DLLDirection
modelica_metatype omc_NFConnections_analyseArrayConnections(threadData_t *threadData, modelica_metatype _conns);
#define boxptr_NFConnections_analyseArrayConnections omc_NFConnections_analyseArrayConnections
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_analyseArrayConnections,2,0) {(void*) boxptr_NFConnections_analyseArrayConnections,0}};
#define boxvar_NFConnections_analyseArrayConnections MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_analyseArrayConnections)


DLLDirection
modelica_metatype omc_NFConnections_scalarize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconns, modelica_boolean _keepSingleConnectedArrays);
DLLDirection
modelica_metatype boxptr_NFConnections_scalarize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconns, modelica_metatype _keepSingleConnectedArrays);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_scalarize,2,0) {(void*) boxptr_NFConnections_scalarize,0}};
#define boxvar_NFConnections_scalarize MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_scalarize)


DLLDirection
modelica_integer omc_NFConnections_connectCount(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _connectCounts);
DLLDirection
modelica_metatype boxptr_NFConnections_connectCount(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _connectCounts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_connectCount,2,0) {(void*) boxptr_NFConnections_connectCount,0}};
#define boxvar_NFConnections_connectCount MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_connectCount)


DLLDirection
modelica_metatype omc_NFConnections_split(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconns);
#define boxptr_NFConnections_split omc_NFConnections_split
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_split,2,0) {(void*) boxptr_NFConnections_split,0}};
#define boxvar_NFConnections_split MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_split)


DLLDirection
modelica_metatype omc_NFConnections_makeConnectors(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _ty, modelica_metatype _source);
#define boxptr_NFConnections_makeConnectors omc_NFConnections_makeConnectors
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_makeConnectors,2,0) {(void*) boxptr_NFConnections_makeConnectors,0}};
#define boxvar_NFConnections_makeConnectors MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_makeConnectors)


DLLDirection
modelica_metatype omc_NFConnections_makeConnections(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _lhsType, modelica_metatype _rhsCref, modelica_metatype _rhsType, modelica_metatype _source, modelica_fnptr _isDeleted, modelica_metatype __omcQ_24in_5Fconnections);
#define boxptr_NFConnections_makeConnections omc_NFConnections_makeConnections
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_makeConnections,2,0) {(void*) boxptr_NFConnections_makeConnections,0}};
#define boxvar_NFConnections_makeConnections MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_makeConnections)


DLLDirection
modelica_metatype omc_NFConnections_collectFlows(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype __omcQ_24in_5Fconns);
#define boxptr_NFConnections_collectFlows omc_NFConnections_collectFlows
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_collectFlows,2,0) {(void*) boxptr_NFConnections_collectFlows,0}};
#define boxvar_NFConnections_collectFlows MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_collectFlows)


DLLDirection
modelica_metatype omc_NFConnections_collectConnections(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel, modelica_fnptr _isDeleted, modelica_metatype *out_conns);
#define boxptr_NFConnections_collectConnections omc_NFConnections_collectConnections
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_collectConnections,2,0) {(void*) boxptr_NFConnections_collectConnections,0}};
#define boxvar_NFConnections_collectConnections MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_collectConnections)


DLLDirection
modelica_metatype omc_NFConnections_addBroken(threadData_t *threadData, modelica_metatype _broken, modelica_metatype __omcQ_24in_5Fconns);
#define boxptr_NFConnections_addBroken omc_NFConnections_addBroken
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_addBroken,2,0) {(void*) boxptr_NFConnections_addBroken,0}};
#define boxvar_NFConnections_addBroken MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_addBroken)


DLLDirection
modelica_metatype omc_NFConnections_addFlow(threadData_t *threadData, modelica_metatype _conn, modelica_metatype __omcQ_24in_5Fconns);
#define boxptr_NFConnections_addFlow omc_NFConnections_addFlow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_addFlow,2,0) {(void*) boxptr_NFConnections_addFlow,0}};
#define boxvar_NFConnections_addFlow MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_addFlow)


DLLDirection
modelica_metatype omc_NFConnections_addConnection(threadData_t *threadData, modelica_metatype _conn, modelica_metatype __omcQ_24in_5Fconns);
#define boxptr_NFConnections_addConnection omc_NFConnections_addConnection
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_addConnection,2,0) {(void*) boxptr_NFConnections_addConnection,0}};
#define boxvar_NFConnections_addConnection MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_addConnection)


DLLDirection
modelica_metatype omc_NFConnections_fromConnectionList(threadData_t *threadData, modelica_metatype _connl);
#define boxptr_NFConnections_fromConnectionList omc_NFConnections_fromConnectionList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_fromConnectionList,2,0) {(void*) boxptr_NFConnections_fromConnectionList,0}};
#define boxvar_NFConnections_fromConnectionList MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_fromConnectionList)


DLLDirection
modelica_metatype omc_NFConnections_new(threadData_t *threadData);
#define boxptr_NFConnections_new omc_NFConnections_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnections_new,2,0) {(void*) boxptr_NFConnections_new,0}};
#define boxvar_NFConnections_new MMC_REFSTRUCTLIT(boxvar_lit_NFConnections_new)

#ifdef __cplusplus
}
#endif
#endif
