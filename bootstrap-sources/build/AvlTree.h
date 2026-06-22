#ifndef AvlTree__H
#define AvlTree__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description AvlTree_Item_ITEM__desc;

extern struct record_description AvlTree_Item_NO__ITEM__desc;

extern struct record_description AvlTree_Node_NODE__desc;

extern struct record_description AvlTree_Node_NO__NODE__desc;

extern struct record_description AvlTree_Tree_TREE__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;


#define boxptr_AvlTree_addNodeUnique omc_AvlTree_addNodeUnique


DLLDirection
modelica_metatype omc_AvlTree_addUnique(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_metatype _inVal, modelica_metatype *out_outItem);
#define boxptr_AvlTree_addUnique omc_AvlTree_addUnique
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_addUnique,2,0) {(void*) boxptr_AvlTree_addUnique,0}};
#define boxvar_AvlTree_addUnique MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_addUnique)


#define boxptr_AvlTree_getKeyOfValNode omc_AvlTree_getKeyOfValNode


DLLDirection
modelica_metatype omc_AvlTree_getKeyOfVal(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inVal);
#define boxptr_AvlTree_getKeyOfVal omc_AvlTree_getKeyOfVal
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_getKeyOfVal,2,0) {(void*) boxptr_AvlTree_getKeyOfVal,0}};
#define boxvar_AvlTree_getKeyOfVal MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_getKeyOfVal)


DLLDirection
modelica_string omc_AvlTree_printItemStr(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inItem);
#define boxptr_AvlTree_printItemStr omc_AvlTree_printItemStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_printItemStr,2,0) {(void*) boxptr_AvlTree_printItemStr,0}};
#define boxvar_AvlTree_printItemStr MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_printItemStr)


#define boxptr_AvlTree_printNodeStr omc_AvlTree_printNodeStr


DLLDirection
modelica_string omc_AvlTree_printTreeStr(threadData_t *threadData, modelica_metatype _inTree);
#define boxptr_AvlTree_printTreeStr omc_AvlTree_printTreeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_printTreeStr,2,0) {(void*) boxptr_AvlTree_printTreeStr,0}};
#define boxvar_AvlTree_printTreeStr MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_printTreeStr)


#define boxptr_AvlTree_prettyPrintNodeStr omc_AvlTree_prettyPrintNodeStr


#define boxptr_AvlTree_prettyPrintTreeStr__dispatch omc_AvlTree_prettyPrintTreeStr__dispatch


DLLDirection
modelica_string omc_AvlTree_prettyPrintTreeStr(threadData_t *threadData, modelica_metatype _inTree);
#define boxptr_AvlTree_prettyPrintTreeStr omc_AvlTree_prettyPrintTreeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_prettyPrintTreeStr,2,0) {(void*) boxptr_AvlTree_prettyPrintTreeStr,0}};
#define boxvar_AvlTree_prettyPrintTreeStr MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_prettyPrintTreeStr)


#define boxptr_AvlTree_computeHeight omc_AvlTree_computeHeight


#define boxptr_AvlTree_rotateRight omc_AvlTree_rotateRight


#define boxptr_AvlTree_rotateLeft omc_AvlTree_rotateLeft


#define boxptr_AvlTree_exchangeRight omc_AvlTree_exchangeRight


#define boxptr_AvlTree_exchangeLeft omc_AvlTree_exchangeLeft


#define boxptr_AvlTree_rightNode omc_AvlTree_rightNode


#define boxptr_AvlTree_leftNode omc_AvlTree_leftNode


#define boxptr_AvlTree_setLeft omc_AvlTree_setLeft


#define boxptr_AvlTree_setRight omc_AvlTree_setRight


#define boxptr_AvlTree_doBalance4 omc_AvlTree_doBalance4


#define boxptr_AvlTree_doBalance3 omc_AvlTree_doBalance3


#define boxptr_AvlTree_balance omc_AvlTree_balance


#define boxptr_AvlTree_emptyNodeIfNoNode omc_AvlTree_emptyNodeIfNoNode


DLLDirection
modelica_metatype omc_AvlTree_replaceNode(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inNode, modelica_metatype _inKey, modelica_metatype _inVal);
#define boxptr_AvlTree_replaceNode omc_AvlTree_replaceNode
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_replaceNode,2,0) {(void*) boxptr_AvlTree_replaceNode,0}};
#define boxvar_AvlTree_replaceNode MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_replaceNode)


DLLDirection
modelica_metatype omc_AvlTree_replace(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_metatype _inVal);
#define boxptr_AvlTree_replace omc_AvlTree_replace
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_replace,2,0) {(void*) boxptr_AvlTree_replace,0}};
#define boxvar_AvlTree_replace MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_replace)


#define boxptr_AvlTree_getNode omc_AvlTree_getNode


DLLDirection
modelica_metatype omc_AvlTree_get(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey);
#define boxptr_AvlTree_get omc_AvlTree_get
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_get,2,0) {(void*) boxptr_AvlTree_get,0}};
#define boxvar_AvlTree_get MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_get)


#define boxptr_AvlTree_addNode omc_AvlTree_addNode


DLLDirection
modelica_metatype omc_AvlTree_add(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_metatype _inVal);
#define boxptr_AvlTree_add omc_AvlTree_add
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_add,2,0) {(void*) boxptr_AvlTree_add,0}};
#define boxvar_AvlTree_add MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_add)


DLLDirection
modelica_fnptr omc_AvlTree_getValToStrFunc(threadData_t *threadData, modelica_metatype _tree);
#define boxptr_AvlTree_getValToStrFunc omc_AvlTree_getValToStrFunc
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_getValToStrFunc,2,0) {(void*) boxptr_AvlTree_getValToStrFunc,0}};
#define boxvar_AvlTree_getValToStrFunc MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_getValToStrFunc)


DLLDirection
modelica_fnptr omc_AvlTree_getKeyToStrFunc(threadData_t *threadData, modelica_metatype _tree);
#define boxptr_AvlTree_getKeyToStrFunc omc_AvlTree_getKeyToStrFunc
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_getKeyToStrFunc,2,0) {(void*) boxptr_AvlTree_getKeyToStrFunc,0}};
#define boxvar_AvlTree_getKeyToStrFunc MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_getKeyToStrFunc)


DLLDirection
modelica_fnptr omc_AvlTree_getKeyCompareFunc(threadData_t *threadData, modelica_metatype _tree);
#define boxptr_AvlTree_getKeyCompareFunc omc_AvlTree_getKeyCompareFunc
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_getKeyCompareFunc,2,0) {(void*) boxptr_AvlTree_getKeyCompareFunc,0}};
#define boxvar_AvlTree_getKeyCompareFunc MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_getKeyCompareFunc)


DLLDirection
modelica_fnptr omc_AvlTree_getUpdateCheckFunc(threadData_t *threadData, modelica_metatype _tree);
#define boxptr_AvlTree_getUpdateCheckFunc omc_AvlTree_getUpdateCheckFunc
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_getUpdateCheckFunc,2,0) {(void*) boxptr_AvlTree_getUpdateCheckFunc,0}};
#define boxvar_AvlTree_getUpdateCheckFunc MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_getUpdateCheckFunc)


DLLDirection
modelica_boolean omc_AvlTree_hasUpdateCheckFunction(threadData_t *threadData, modelica_metatype _tree);
DLLDirection
modelica_metatype boxptr_AvlTree_hasUpdateCheckFunction(threadData_t *threadData, modelica_metatype _tree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_hasUpdateCheckFunction,2,0) {(void*) boxptr_AvlTree_hasUpdateCheckFunction,0}};
#define boxvar_AvlTree_hasUpdateCheckFunction MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_hasUpdateCheckFunction)


DLLDirection
modelica_boolean omc_AvlTree_hasPrintingFunctions(threadData_t *threadData, modelica_metatype _tree);
DLLDirection
modelica_metatype boxptr_AvlTree_hasPrintingFunctions(threadData_t *threadData, modelica_metatype _tree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_hasPrintingFunctions,2,0) {(void*) boxptr_AvlTree_hasPrintingFunctions,0}};
#define boxvar_AvlTree_hasPrintingFunctions MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_hasPrintingFunctions)


DLLDirection
modelica_metatype omc_AvlTree_create(threadData_t *threadData, modelica_string _name, modelica_fnptr _inKeyCompareFunc, modelica_metatype _inKeyStrFuncOpt, modelica_metatype _inValStrFuncOpt, modelica_metatype _inUpdateCheckFuncOpt);
#define boxptr_AvlTree_create omc_AvlTree_create
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_create,2,0) {(void*) boxptr_AvlTree_create,0}};
#define boxvar_AvlTree_create MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_create)


DLLDirection
modelica_string omc_AvlTree_name(threadData_t *threadData, modelica_metatype _tree);
#define boxptr_AvlTree_name omc_AvlTree_name
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTree_name,2,0) {(void*) boxptr_AvlTree_name,0}};
#define boxvar_AvlTree_name MMC_REFSTRUCTLIT(boxvar_lit_AvlTree_name)

#ifdef __cplusplus
}
#endif
#endif
