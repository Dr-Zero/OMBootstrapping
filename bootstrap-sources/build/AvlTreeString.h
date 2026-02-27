#ifndef AvlTreeString__H
#define AvlTreeString__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description AvlTreeString_Tree_EMPTY__desc;

extern struct record_description AvlTreeString_Tree_LEAF__desc;

extern struct record_description AvlTreeString_Tree_NODE__desc;


DLLDirection
modelica_metatype omc_AvlTreeString_add(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey, modelica_integer _inValue, modelica_fnptr _conflictFunc);
DLLDirection
modelica_metatype boxptr_AvlTreeString_add(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_metatype _inValue, modelica_fnptr _conflictFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_add,2,0) {(void*) boxptr_AvlTreeString_add,0}};
#define boxvar_AvlTreeString_add MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_add)


DLLDirection
modelica_integer omc_AvlTreeString_addConflictDefault(threadData_t *threadData, modelica_integer _newValue, modelica_integer _oldValue, modelica_string _key);
DLLDirection
modelica_metatype boxptr_AvlTreeString_addConflictDefault(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_addConflictDefault,2,0) {(void*) boxptr_AvlTreeString_addConflictDefault,0}};
#define boxvar_AvlTreeString_addConflictDefault MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_addConflictDefault)


DLLDirection
modelica_integer omc_AvlTreeString_addConflictFail(threadData_t *threadData, modelica_integer _newValue, modelica_integer _oldValue, modelica_string _key);
DLLDirection
modelica_metatype boxptr_AvlTreeString_addConflictFail(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_addConflictFail,2,0) {(void*) boxptr_AvlTreeString_addConflictFail,0}};
#define boxvar_AvlTreeString_addConflictFail MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_addConflictFail)


DLLDirection
modelica_integer omc_AvlTreeString_addConflictKeep(threadData_t *threadData, modelica_integer _newValue, modelica_integer _oldValue, modelica_string _key);
DLLDirection
modelica_metatype boxptr_AvlTreeString_addConflictKeep(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_addConflictKeep,2,0) {(void*) boxptr_AvlTreeString_addConflictKeep,0}};
#define boxvar_AvlTreeString_addConflictKeep MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_addConflictKeep)


DLLDirection
modelica_integer omc_AvlTreeString_addConflictReplace(threadData_t *threadData, modelica_integer _newValue, modelica_integer _oldValue, modelica_string _key);
DLLDirection
modelica_metatype boxptr_AvlTreeString_addConflictReplace(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_addConflictReplace,2,0) {(void*) boxptr_AvlTreeString_addConflictReplace,0}};
#define boxvar_AvlTreeString_addConflictReplace MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_addConflictReplace)


DLLDirection
modelica_metatype omc_AvlTreeString_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc);
#define boxptr_AvlTreeString_addList omc_AvlTreeString_addList
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_addList,2,0) {(void*) boxptr_AvlTreeString_addList,0}};
#define boxvar_AvlTreeString_addList MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_addList)


DLLDirection
modelica_metatype omc_AvlTreeString_addUpdate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_string _key, modelica_fnptr _fn);
#define boxptr_AvlTreeString_addUpdate omc_AvlTreeString_addUpdate
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_addUpdate,2,0) {(void*) boxptr_AvlTreeString_addUpdate,0}};
#define boxvar_AvlTreeString_addUpdate MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_addUpdate)


#define boxptr_AvlTreeString_balance omc_AvlTreeString_balance


DLLDirection
modelica_metatype omc_AvlTreeString_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue);
#define boxptr_AvlTreeString_fold omc_AvlTreeString_fold
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_fold,2,0) {(void*) boxptr_AvlTreeString_fold,0}};
#define boxvar_AvlTreeString_fold MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_fold)


DLLDirection
modelica_metatype omc_AvlTreeString_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue);
#define boxptr_AvlTreeString_foldCond omc_AvlTreeString_foldCond
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_foldCond,2,0) {(void*) boxptr_AvlTreeString_foldCond,0}};
#define boxvar_AvlTreeString_foldCond MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_foldCond)


DLLDirection
modelica_metatype omc_AvlTreeString_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2);
#define boxptr_AvlTreeString_fold__2 omc_AvlTreeString_fold__2
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_fold__2,2,0) {(void*) boxptr_AvlTreeString_fold__2,0}};
#define boxvar_AvlTreeString_fold__2 MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_fold__2)


DLLDirection
void omc_AvlTreeString_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func);
#define boxptr_AvlTreeString_forEach omc_AvlTreeString_forEach
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_forEach,2,0) {(void*) boxptr_AvlTreeString_forEach,0}};
#define boxvar_AvlTreeString_forEach MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_forEach)


DLLDirection
modelica_metatype omc_AvlTreeString_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc);
#define boxptr_AvlTreeString_fromList omc_AvlTreeString_fromList
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_fromList,2,0) {(void*) boxptr_AvlTreeString_fromList,0}};
#define boxvar_AvlTreeString_fromList MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_fromList)


DLLDirection
modelica_integer omc_AvlTreeString_get(threadData_t *threadData, modelica_metatype _tree, modelica_string _key);
DLLDirection
modelica_metatype boxptr_AvlTreeString_get(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_get,2,0) {(void*) boxptr_AvlTreeString_get,0}};
#define boxvar_AvlTreeString_get MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_get)


DLLDirection
modelica_metatype omc_AvlTreeString_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_string _key);
#define boxptr_AvlTreeString_getOpt omc_AvlTreeString_getOpt
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_getOpt,2,0) {(void*) boxptr_AvlTreeString_getOpt,0}};
#define boxvar_AvlTreeString_getOpt MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_getOpt)


DLLDirection
modelica_boolean omc_AvlTreeString_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey);
DLLDirection
modelica_metatype boxptr_AvlTreeString_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_hasKey,2,0) {(void*) boxptr_AvlTreeString_hasKey,0}};
#define boxvar_AvlTreeString_hasKey MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_hasKey)


DLLDirection
void omc_AvlTreeString_intersection(threadData_t *threadData);
#define boxptr_AvlTreeString_intersection omc_AvlTreeString_intersection
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_intersection,2,0) {(void*) boxptr_AvlTreeString_intersection,0}};
#define boxvar_AvlTreeString_intersection MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_intersection)


DLLDirection
modelica_boolean omc_AvlTreeString_isEmpty(threadData_t *threadData, modelica_metatype _tree);
DLLDirection
modelica_metatype boxptr_AvlTreeString_isEmpty(threadData_t *threadData, modelica_metatype _tree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_isEmpty,2,0) {(void*) boxptr_AvlTreeString_isEmpty,0}};
#define boxvar_AvlTreeString_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_isEmpty)


DLLDirection
modelica_metatype omc_AvlTreeString_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc);
#define boxptr_AvlTreeString_join omc_AvlTreeString_join
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_join,2,0) {(void*) boxptr_AvlTreeString_join,0}};
#define boxvar_AvlTreeString_join MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_join)


DLLDirection
modelica_integer omc_AvlTreeString_keyCompare(threadData_t *threadData, modelica_string _inKey1, modelica_string _inKey2);
DLLDirection
modelica_metatype boxptr_AvlTreeString_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_keyCompare,2,0) {(void*) boxptr_AvlTreeString_keyCompare,0}};
#define boxvar_AvlTreeString_keyCompare MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_keyCompare)


DLLDirection
modelica_string omc_AvlTreeString_keyStr(threadData_t *threadData, modelica_string _inKey);
#define boxptr_AvlTreeString_keyStr omc_AvlTreeString_keyStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_keyStr,2,0) {(void*) boxptr_AvlTreeString_keyStr,0}};
#define boxvar_AvlTreeString_keyStr MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_keyStr)


DLLDirection
modelica_metatype omc_AvlTreeString_listKeys(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_AvlTreeString_listKeys omc_AvlTreeString_listKeys
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_listKeys,2,0) {(void*) boxptr_AvlTreeString_listKeys,0}};
#define boxvar_AvlTreeString_listKeys MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_listKeys)


DLLDirection
modelica_metatype omc_AvlTreeString_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_AvlTreeString_listKeysReverse omc_AvlTreeString_listKeysReverse
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_listKeysReverse,2,0) {(void*) boxptr_AvlTreeString_listKeysReverse,0}};
#define boxvar_AvlTreeString_listKeysReverse MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_listKeysReverse)


DLLDirection
modelica_metatype omc_AvlTreeString_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_AvlTreeString_listValues omc_AvlTreeString_listValues
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_listValues,2,0) {(void*) boxptr_AvlTreeString_listValues,0}};
#define boxvar_AvlTreeString_listValues MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_listValues)


DLLDirection
modelica_metatype omc_AvlTreeString_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc);
#define boxptr_AvlTreeString_map omc_AvlTreeString_map
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_map,2,0) {(void*) boxptr_AvlTreeString_map,0}};
#define boxvar_AvlTreeString_map MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_map)


DLLDirection
modelica_metatype omc_AvlTreeString_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult);
#define boxptr_AvlTreeString_mapFold omc_AvlTreeString_mapFold
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_mapFold,2,0) {(void*) boxptr_AvlTreeString_mapFold,0}};
#define boxvar_AvlTreeString_mapFold MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_mapFold)


DLLDirection
modelica_metatype omc_AvlTreeString_new(threadData_t *threadData);
#define boxptr_AvlTreeString_new omc_AvlTreeString_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_new,2,0) {(void*) boxptr_AvlTreeString_new,0}};
#define boxvar_AvlTreeString_new MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_new)


DLLDirection
modelica_string omc_AvlTreeString_printNodeStr(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_AvlTreeString_printNodeStr omc_AvlTreeString_printNodeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_printNodeStr,2,0) {(void*) boxptr_AvlTreeString_printNodeStr,0}};
#define boxvar_AvlTreeString_printNodeStr MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_printNodeStr)


DLLDirection
modelica_string omc_AvlTreeString_printTreeStr(threadData_t *threadData, modelica_metatype _inTree);
#define boxptr_AvlTreeString_printTreeStr omc_AvlTreeString_printTreeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_printTreeStr,2,0) {(void*) boxptr_AvlTreeString_printTreeStr,0}};
#define boxvar_AvlTreeString_printTreeStr MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_printTreeStr)


#define boxptr_AvlTreeString_rotateLeft omc_AvlTreeString_rotateLeft


#define boxptr_AvlTreeString_rotateRight omc_AvlTreeString_rotateRight


DLLDirection
modelica_metatype omc_AvlTreeString_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right);
#define boxptr_AvlTreeString_setTreeLeftRight omc_AvlTreeString_setTreeLeftRight
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_setTreeLeftRight,2,0) {(void*) boxptr_AvlTreeString_setTreeLeftRight,0}};
#define boxvar_AvlTreeString_setTreeLeftRight MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_setTreeLeftRight)


DLLDirection
modelica_string omc_AvlTreeString_smallestKey(threadData_t *threadData, modelica_metatype _tree);
#define boxptr_AvlTreeString_smallestKey omc_AvlTreeString_smallestKey
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_smallestKey,2,0) {(void*) boxptr_AvlTreeString_smallestKey,0}};
#define boxvar_AvlTreeString_smallestKey MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_smallestKey)


DLLDirection
modelica_metatype omc_AvlTreeString_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_AvlTreeString_toList omc_AvlTreeString_toList
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_toList,2,0) {(void*) boxptr_AvlTreeString_toList,0}};
#define boxvar_AvlTreeString_toList MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_toList)


DLLDirection
modelica_metatype omc_AvlTreeString_update(threadData_t *threadData, modelica_metatype _tree, modelica_string _key, modelica_integer _value);
DLLDirection
modelica_metatype boxptr_AvlTreeString_update(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_update,2,0) {(void*) boxptr_AvlTreeString_update,0}};
#define boxvar_AvlTreeString_update MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_update)


DLLDirection
modelica_string omc_AvlTreeString_valueStr(threadData_t *threadData, modelica_integer _inValue);
DLLDirection
modelica_metatype boxptr_AvlTreeString_valueStr(threadData_t *threadData, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_AvlTreeString_valueStr,2,0) {(void*) boxptr_AvlTreeString_valueStr,0}};
#define boxvar_AvlTreeString_valueStr MMC_REFSTRUCTLIT(boxvar_lit_AvlTreeString_valueStr)

#ifdef __cplusplus
}
#endif
#endif
