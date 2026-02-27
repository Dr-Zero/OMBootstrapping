#ifndef NFLookupTree__H
#define NFLookupTree__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description NFLookupTree_Tree_EMPTY__desc;

extern struct record_description NFLookupTree_Tree_LEAF__desc;

extern struct record_description NFLookupTree_Tree_NODE__desc;


DLLDirection
modelica_boolean omc_NFLookupTree_Entry_isImport(threadData_t *threadData, modelica_metatype _entry);
DLLDirection
modelica_metatype boxptr_NFLookupTree_Entry_isImport(threadData_t *threadData, modelica_metatype _entry);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_Entry_isImport,2,0) {(void*) boxptr_NFLookupTree_Entry_isImport,0}};
#define boxvar_NFLookupTree_Entry_isImport MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_Entry_isImport)


DLLDirection
modelica_boolean omc_NFLookupTree_Entry_isEqual(threadData_t *threadData, modelica_metatype _entry1, modelica_metatype _entry2);
DLLDirection
modelica_metatype boxptr_NFLookupTree_Entry_isEqual(threadData_t *threadData, modelica_metatype _entry1, modelica_metatype _entry2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_Entry_isEqual,2,0) {(void*) boxptr_NFLookupTree_Entry_isEqual,0}};
#define boxvar_NFLookupTree_Entry_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_Entry_isEqual)


DLLDirection
modelica_integer omc_NFLookupTree_Entry_index(threadData_t *threadData, modelica_metatype _entry);
DLLDirection
modelica_metatype boxptr_NFLookupTree_Entry_index(threadData_t *threadData, modelica_metatype _entry);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_Entry_index,2,0) {(void*) boxptr_NFLookupTree_Entry_index,0}};
#define boxvar_NFLookupTree_Entry_index MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_Entry_index)


DLLDirection
modelica_metatype omc_NFLookupTree_add(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey, modelica_metatype _inValue, modelica_fnptr _conflictFunc);
#define boxptr_NFLookupTree_add omc_NFLookupTree_add
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_add,2,0) {(void*) boxptr_NFLookupTree_add,0}};
#define boxvar_NFLookupTree_add MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_add)


DLLDirection
modelica_metatype omc_NFLookupTree_addConflictDefault(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key);
#define boxptr_NFLookupTree_addConflictDefault omc_NFLookupTree_addConflictDefault
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_addConflictDefault,2,0) {(void*) boxptr_NFLookupTree_addConflictDefault,0}};
#define boxvar_NFLookupTree_addConflictDefault MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_addConflictDefault)


DLLDirection
modelica_metatype omc_NFLookupTree_addConflictFail(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key);
#define boxptr_NFLookupTree_addConflictFail omc_NFLookupTree_addConflictFail
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_addConflictFail,2,0) {(void*) boxptr_NFLookupTree_addConflictFail,0}};
#define boxvar_NFLookupTree_addConflictFail MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_addConflictFail)


DLLDirection
modelica_metatype omc_NFLookupTree_addConflictKeep(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key);
#define boxptr_NFLookupTree_addConflictKeep omc_NFLookupTree_addConflictKeep
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_addConflictKeep,2,0) {(void*) boxptr_NFLookupTree_addConflictKeep,0}};
#define boxvar_NFLookupTree_addConflictKeep MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_addConflictKeep)


DLLDirection
modelica_metatype omc_NFLookupTree_addConflictReplace(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key);
#define boxptr_NFLookupTree_addConflictReplace omc_NFLookupTree_addConflictReplace
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_addConflictReplace,2,0) {(void*) boxptr_NFLookupTree_addConflictReplace,0}};
#define boxvar_NFLookupTree_addConflictReplace MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_addConflictReplace)


DLLDirection
modelica_metatype omc_NFLookupTree_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc);
#define boxptr_NFLookupTree_addList omc_NFLookupTree_addList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_addList,2,0) {(void*) boxptr_NFLookupTree_addList,0}};
#define boxvar_NFLookupTree_addList MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_addList)


DLLDirection
modelica_metatype omc_NFLookupTree_addUpdate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_string _key, modelica_fnptr _fn);
#define boxptr_NFLookupTree_addUpdate omc_NFLookupTree_addUpdate
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_addUpdate,2,0) {(void*) boxptr_NFLookupTree_addUpdate,0}};
#define boxvar_NFLookupTree_addUpdate MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_addUpdate)


#define boxptr_NFLookupTree_balance omc_NFLookupTree_balance


DLLDirection
modelica_metatype omc_NFLookupTree_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue);
#define boxptr_NFLookupTree_fold omc_NFLookupTree_fold
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_fold,2,0) {(void*) boxptr_NFLookupTree_fold,0}};
#define boxvar_NFLookupTree_fold MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_fold)


DLLDirection
modelica_metatype omc_NFLookupTree_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue);
#define boxptr_NFLookupTree_foldCond omc_NFLookupTree_foldCond
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_foldCond,2,0) {(void*) boxptr_NFLookupTree_foldCond,0}};
#define boxvar_NFLookupTree_foldCond MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_foldCond)


DLLDirection
modelica_metatype omc_NFLookupTree_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2);
#define boxptr_NFLookupTree_fold__2 omc_NFLookupTree_fold__2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_fold__2,2,0) {(void*) boxptr_NFLookupTree_fold__2,0}};
#define boxvar_NFLookupTree_fold__2 MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_fold__2)


DLLDirection
void omc_NFLookupTree_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func);
#define boxptr_NFLookupTree_forEach omc_NFLookupTree_forEach
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_forEach,2,0) {(void*) boxptr_NFLookupTree_forEach,0}};
#define boxvar_NFLookupTree_forEach MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_forEach)


DLLDirection
modelica_metatype omc_NFLookupTree_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc);
#define boxptr_NFLookupTree_fromList omc_NFLookupTree_fromList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_fromList,2,0) {(void*) boxptr_NFLookupTree_fromList,0}};
#define boxvar_NFLookupTree_fromList MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_fromList)


DLLDirection
modelica_metatype omc_NFLookupTree_get(threadData_t *threadData, modelica_metatype _tree, modelica_string _key);
#define boxptr_NFLookupTree_get omc_NFLookupTree_get
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_get,2,0) {(void*) boxptr_NFLookupTree_get,0}};
#define boxvar_NFLookupTree_get MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_get)


DLLDirection
modelica_metatype omc_NFLookupTree_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_string _key);
#define boxptr_NFLookupTree_getOpt omc_NFLookupTree_getOpt
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_getOpt,2,0) {(void*) boxptr_NFLookupTree_getOpt,0}};
#define boxvar_NFLookupTree_getOpt MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_getOpt)


DLLDirection
modelica_boolean omc_NFLookupTree_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey);
DLLDirection
modelica_metatype boxptr_NFLookupTree_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_hasKey,2,0) {(void*) boxptr_NFLookupTree_hasKey,0}};
#define boxvar_NFLookupTree_hasKey MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_hasKey)


DLLDirection
void omc_NFLookupTree_intersection(threadData_t *threadData);
#define boxptr_NFLookupTree_intersection omc_NFLookupTree_intersection
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_intersection,2,0) {(void*) boxptr_NFLookupTree_intersection,0}};
#define boxvar_NFLookupTree_intersection MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_intersection)


DLLDirection
modelica_boolean omc_NFLookupTree_isEmpty(threadData_t *threadData, modelica_metatype _tree);
DLLDirection
modelica_metatype boxptr_NFLookupTree_isEmpty(threadData_t *threadData, modelica_metatype _tree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_isEmpty,2,0) {(void*) boxptr_NFLookupTree_isEmpty,0}};
#define boxvar_NFLookupTree_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_isEmpty)


DLLDirection
modelica_metatype omc_NFLookupTree_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc);
#define boxptr_NFLookupTree_join omc_NFLookupTree_join
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_join,2,0) {(void*) boxptr_NFLookupTree_join,0}};
#define boxvar_NFLookupTree_join MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_join)


DLLDirection
modelica_integer omc_NFLookupTree_keyCompare(threadData_t *threadData, modelica_string _inKey1, modelica_string _inKey2);
DLLDirection
modelica_metatype boxptr_NFLookupTree_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_keyCompare,2,0) {(void*) boxptr_NFLookupTree_keyCompare,0}};
#define boxvar_NFLookupTree_keyCompare MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_keyCompare)


DLLDirection
modelica_string omc_NFLookupTree_keyStr(threadData_t *threadData, modelica_string _inKey);
#define boxptr_NFLookupTree_keyStr omc_NFLookupTree_keyStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_keyStr,2,0) {(void*) boxptr_NFLookupTree_keyStr,0}};
#define boxvar_NFLookupTree_keyStr MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_keyStr)


DLLDirection
modelica_metatype omc_NFLookupTree_listKeys(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_NFLookupTree_listKeys omc_NFLookupTree_listKeys
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_listKeys,2,0) {(void*) boxptr_NFLookupTree_listKeys,0}};
#define boxvar_NFLookupTree_listKeys MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_listKeys)


DLLDirection
modelica_metatype omc_NFLookupTree_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_NFLookupTree_listKeysReverse omc_NFLookupTree_listKeysReverse
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_listKeysReverse,2,0) {(void*) boxptr_NFLookupTree_listKeysReverse,0}};
#define boxvar_NFLookupTree_listKeysReverse MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_listKeysReverse)


DLLDirection
modelica_metatype omc_NFLookupTree_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_NFLookupTree_listValues omc_NFLookupTree_listValues
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_listValues,2,0) {(void*) boxptr_NFLookupTree_listValues,0}};
#define boxvar_NFLookupTree_listValues MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_listValues)


DLLDirection
modelica_metatype omc_NFLookupTree_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc);
#define boxptr_NFLookupTree_map omc_NFLookupTree_map
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_map,2,0) {(void*) boxptr_NFLookupTree_map,0}};
#define boxvar_NFLookupTree_map MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_map)


DLLDirection
modelica_metatype omc_NFLookupTree_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult);
#define boxptr_NFLookupTree_mapFold omc_NFLookupTree_mapFold
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_mapFold,2,0) {(void*) boxptr_NFLookupTree_mapFold,0}};
#define boxvar_NFLookupTree_mapFold MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_mapFold)


DLLDirection
modelica_metatype omc_NFLookupTree_new(threadData_t *threadData);
#define boxptr_NFLookupTree_new omc_NFLookupTree_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_new,2,0) {(void*) boxptr_NFLookupTree_new,0}};
#define boxvar_NFLookupTree_new MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_new)


DLLDirection
modelica_string omc_NFLookupTree_printNodeStr(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_NFLookupTree_printNodeStr omc_NFLookupTree_printNodeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_printNodeStr,2,0) {(void*) boxptr_NFLookupTree_printNodeStr,0}};
#define boxvar_NFLookupTree_printNodeStr MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_printNodeStr)


DLLDirection
modelica_string omc_NFLookupTree_printTreeStr(threadData_t *threadData, modelica_metatype _inTree);
#define boxptr_NFLookupTree_printTreeStr omc_NFLookupTree_printTreeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_printTreeStr,2,0) {(void*) boxptr_NFLookupTree_printTreeStr,0}};
#define boxvar_NFLookupTree_printTreeStr MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_printTreeStr)


#define boxptr_NFLookupTree_rotateLeft omc_NFLookupTree_rotateLeft


#define boxptr_NFLookupTree_rotateRight omc_NFLookupTree_rotateRight


DLLDirection
modelica_metatype omc_NFLookupTree_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right);
#define boxptr_NFLookupTree_setTreeLeftRight omc_NFLookupTree_setTreeLeftRight
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_setTreeLeftRight,2,0) {(void*) boxptr_NFLookupTree_setTreeLeftRight,0}};
#define boxvar_NFLookupTree_setTreeLeftRight MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_setTreeLeftRight)


DLLDirection
modelica_string omc_NFLookupTree_smallestKey(threadData_t *threadData, modelica_metatype _tree);
#define boxptr_NFLookupTree_smallestKey omc_NFLookupTree_smallestKey
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_smallestKey,2,0) {(void*) boxptr_NFLookupTree_smallestKey,0}};
#define boxvar_NFLookupTree_smallestKey MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_smallestKey)


DLLDirection
modelica_metatype omc_NFLookupTree_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_NFLookupTree_toList omc_NFLookupTree_toList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_toList,2,0) {(void*) boxptr_NFLookupTree_toList,0}};
#define boxvar_NFLookupTree_toList MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_toList)


DLLDirection
modelica_metatype omc_NFLookupTree_update(threadData_t *threadData, modelica_metatype _tree, modelica_string _key, modelica_metatype _value);
#define boxptr_NFLookupTree_update omc_NFLookupTree_update
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_update,2,0) {(void*) boxptr_NFLookupTree_update,0}};
#define boxvar_NFLookupTree_update MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_update)


DLLDirection
modelica_string omc_NFLookupTree_valueStr(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_NFLookupTree_valueStr omc_NFLookupTree_valueStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookupTree_valueStr,2,0) {(void*) boxptr_NFLookupTree_valueStr,0}};
#define boxvar_NFLookupTree_valueStr MMC_REFSTRUCTLIT(boxvar_lit_NFLookupTree_valueStr)

#ifdef __cplusplus
}
#endif
#endif
