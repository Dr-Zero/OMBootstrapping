#ifndef NFDuplicateTree__H
#define NFDuplicateTree__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description NFDuplicateTree_Entry_ENTRY__desc;

extern struct record_description NFDuplicateTree_Tree_EMPTY__desc;

extern struct record_description NFDuplicateTree_Tree_LEAF__desc;

extern struct record_description NFDuplicateTree_Tree_NODE__desc;


DLLDirection
modelica_metatype omc_NFDuplicateTree_add(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey, modelica_metatype _inValue, modelica_fnptr _conflictFunc);
#define boxptr_NFDuplicateTree_add omc_NFDuplicateTree_add
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_add,2,0) {(void*) boxptr_NFDuplicateTree_add,0}};
#define boxvar_NFDuplicateTree_add MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_add)


DLLDirection
modelica_metatype omc_NFDuplicateTree_addConflictDefault(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key);
#define boxptr_NFDuplicateTree_addConflictDefault omc_NFDuplicateTree_addConflictDefault
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addConflictDefault,2,0) {(void*) boxptr_NFDuplicateTree_addConflictDefault,0}};
#define boxvar_NFDuplicateTree_addConflictDefault MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addConflictDefault)


DLLDirection
modelica_metatype omc_NFDuplicateTree_addConflictFail(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key);
#define boxptr_NFDuplicateTree_addConflictFail omc_NFDuplicateTree_addConflictFail
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addConflictFail,2,0) {(void*) boxptr_NFDuplicateTree_addConflictFail,0}};
#define boxvar_NFDuplicateTree_addConflictFail MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addConflictFail)


DLLDirection
modelica_metatype omc_NFDuplicateTree_addConflictKeep(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key);
#define boxptr_NFDuplicateTree_addConflictKeep omc_NFDuplicateTree_addConflictKeep
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addConflictKeep,2,0) {(void*) boxptr_NFDuplicateTree_addConflictKeep,0}};
#define boxvar_NFDuplicateTree_addConflictKeep MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addConflictKeep)


DLLDirection
modelica_metatype omc_NFDuplicateTree_addConflictReplace(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key);
#define boxptr_NFDuplicateTree_addConflictReplace omc_NFDuplicateTree_addConflictReplace
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addConflictReplace,2,0) {(void*) boxptr_NFDuplicateTree_addConflictReplace,0}};
#define boxvar_NFDuplicateTree_addConflictReplace MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addConflictReplace)


DLLDirection
modelica_metatype omc_NFDuplicateTree_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc);
#define boxptr_NFDuplicateTree_addList omc_NFDuplicateTree_addList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addList,2,0) {(void*) boxptr_NFDuplicateTree_addList,0}};
#define boxvar_NFDuplicateTree_addList MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addList)


DLLDirection
modelica_metatype omc_NFDuplicateTree_addUpdate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_string _key, modelica_fnptr _fn);
#define boxptr_NFDuplicateTree_addUpdate omc_NFDuplicateTree_addUpdate
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addUpdate,2,0) {(void*) boxptr_NFDuplicateTree_addUpdate,0}};
#define boxvar_NFDuplicateTree_addUpdate MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_addUpdate)


#define boxptr_NFDuplicateTree_balance omc_NFDuplicateTree_balance


DLLDirection
modelica_metatype omc_NFDuplicateTree_entryToList(threadData_t *threadData, modelica_metatype _entry);
#define boxptr_NFDuplicateTree_entryToList omc_NFDuplicateTree_entryToList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_entryToList,2,0) {(void*) boxptr_NFDuplicateTree_entryToList,0}};
#define boxvar_NFDuplicateTree_entryToList MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_entryToList)


DLLDirection
modelica_metatype omc_NFDuplicateTree_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue);
#define boxptr_NFDuplicateTree_fold omc_NFDuplicateTree_fold
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_fold,2,0) {(void*) boxptr_NFDuplicateTree_fold,0}};
#define boxvar_NFDuplicateTree_fold MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_fold)


DLLDirection
modelica_metatype omc_NFDuplicateTree_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue);
#define boxptr_NFDuplicateTree_foldCond omc_NFDuplicateTree_foldCond
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_foldCond,2,0) {(void*) boxptr_NFDuplicateTree_foldCond,0}};
#define boxvar_NFDuplicateTree_foldCond MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_foldCond)


DLLDirection
modelica_metatype omc_NFDuplicateTree_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2);
#define boxptr_NFDuplicateTree_fold__2 omc_NFDuplicateTree_fold__2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_fold__2,2,0) {(void*) boxptr_NFDuplicateTree_fold__2,0}};
#define boxvar_NFDuplicateTree_fold__2 MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_fold__2)


DLLDirection
void omc_NFDuplicateTree_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func);
#define boxptr_NFDuplicateTree_forEach omc_NFDuplicateTree_forEach
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_forEach,2,0) {(void*) boxptr_NFDuplicateTree_forEach,0}};
#define boxvar_NFDuplicateTree_forEach MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_forEach)


DLLDirection
modelica_metatype omc_NFDuplicateTree_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc);
#define boxptr_NFDuplicateTree_fromList omc_NFDuplicateTree_fromList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_fromList,2,0) {(void*) boxptr_NFDuplicateTree_fromList,0}};
#define boxvar_NFDuplicateTree_fromList MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_fromList)


DLLDirection
modelica_metatype omc_NFDuplicateTree_get(threadData_t *threadData, modelica_metatype _tree, modelica_string _key);
#define boxptr_NFDuplicateTree_get omc_NFDuplicateTree_get
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_get,2,0) {(void*) boxptr_NFDuplicateTree_get,0}};
#define boxvar_NFDuplicateTree_get MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_get)


DLLDirection
modelica_metatype omc_NFDuplicateTree_getLookupEntries(threadData_t *threadData, modelica_metatype _entry);
#define boxptr_NFDuplicateTree_getLookupEntries omc_NFDuplicateTree_getLookupEntries
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_getLookupEntries,2,0) {(void*) boxptr_NFDuplicateTree_getLookupEntries,0}};
#define boxvar_NFDuplicateTree_getLookupEntries MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_getLookupEntries)


DLLDirection
modelica_metatype omc_NFDuplicateTree_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_string _key);
#define boxptr_NFDuplicateTree_getOpt omc_NFDuplicateTree_getOpt
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_getOpt,2,0) {(void*) boxptr_NFDuplicateTree_getOpt,0}};
#define boxvar_NFDuplicateTree_getOpt MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_getOpt)


DLLDirection
modelica_boolean omc_NFDuplicateTree_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey);
DLLDirection
modelica_metatype boxptr_NFDuplicateTree_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_hasKey,2,0) {(void*) boxptr_NFDuplicateTree_hasKey,0}};
#define boxvar_NFDuplicateTree_hasKey MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_hasKey)


DLLDirection
modelica_boolean omc_NFDuplicateTree_idExistsInEntry(threadData_t *threadData, modelica_metatype _id, modelica_metatype _entry);
DLLDirection
modelica_metatype boxptr_NFDuplicateTree_idExistsInEntry(threadData_t *threadData, modelica_metatype _id, modelica_metatype _entry);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_idExistsInEntry,2,0) {(void*) boxptr_NFDuplicateTree_idExistsInEntry,0}};
#define boxvar_NFDuplicateTree_idExistsInEntry MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_idExistsInEntry)


DLLDirection
void omc_NFDuplicateTree_intersection(threadData_t *threadData);
#define boxptr_NFDuplicateTree_intersection omc_NFDuplicateTree_intersection
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_intersection,2,0) {(void*) boxptr_NFDuplicateTree_intersection,0}};
#define boxvar_NFDuplicateTree_intersection MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_intersection)


DLLDirection
modelica_boolean omc_NFDuplicateTree_isEmpty(threadData_t *threadData, modelica_metatype _tree);
DLLDirection
modelica_metatype boxptr_NFDuplicateTree_isEmpty(threadData_t *threadData, modelica_metatype _tree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_isEmpty,2,0) {(void*) boxptr_NFDuplicateTree_isEmpty,0}};
#define boxvar_NFDuplicateTree_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_isEmpty)


DLLDirection
modelica_metatype omc_NFDuplicateTree_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc);
#define boxptr_NFDuplicateTree_join omc_NFDuplicateTree_join
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_join,2,0) {(void*) boxptr_NFDuplicateTree_join,0}};
#define boxvar_NFDuplicateTree_join MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_join)


DLLDirection
modelica_integer omc_NFDuplicateTree_keyCompare(threadData_t *threadData, modelica_string _inKey1, modelica_string _inKey2);
DLLDirection
modelica_metatype boxptr_NFDuplicateTree_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_keyCompare,2,0) {(void*) boxptr_NFDuplicateTree_keyCompare,0}};
#define boxvar_NFDuplicateTree_keyCompare MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_keyCompare)


DLLDirection
modelica_string omc_NFDuplicateTree_keyStr(threadData_t *threadData, modelica_string _inKey);
#define boxptr_NFDuplicateTree_keyStr omc_NFDuplicateTree_keyStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_keyStr,2,0) {(void*) boxptr_NFDuplicateTree_keyStr,0}};
#define boxvar_NFDuplicateTree_keyStr MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_keyStr)


DLLDirection
modelica_metatype omc_NFDuplicateTree_listKeys(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_NFDuplicateTree_listKeys omc_NFDuplicateTree_listKeys
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_listKeys,2,0) {(void*) boxptr_NFDuplicateTree_listKeys,0}};
#define boxvar_NFDuplicateTree_listKeys MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_listKeys)


DLLDirection
modelica_metatype omc_NFDuplicateTree_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_NFDuplicateTree_listKeysReverse omc_NFDuplicateTree_listKeysReverse
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_listKeysReverse,2,0) {(void*) boxptr_NFDuplicateTree_listKeysReverse,0}};
#define boxvar_NFDuplicateTree_listKeysReverse MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_listKeysReverse)


DLLDirection
modelica_metatype omc_NFDuplicateTree_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_NFDuplicateTree_listValues omc_NFDuplicateTree_listValues
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_listValues,2,0) {(void*) boxptr_NFDuplicateTree_listValues,0}};
#define boxvar_NFDuplicateTree_listValues MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_listValues)


DLLDirection
modelica_metatype omc_NFDuplicateTree_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc);
#define boxptr_NFDuplicateTree_map omc_NFDuplicateTree_map
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_map,2,0) {(void*) boxptr_NFDuplicateTree_map,0}};
#define boxvar_NFDuplicateTree_map MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_map)


DLLDirection
modelica_metatype omc_NFDuplicateTree_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult);
#define boxptr_NFDuplicateTree_mapFold omc_NFDuplicateTree_mapFold
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_mapFold,2,0) {(void*) boxptr_NFDuplicateTree_mapFold,0}};
#define boxvar_NFDuplicateTree_mapFold MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_mapFold)


DLLDirection
modelica_metatype omc_NFDuplicateTree_new(threadData_t *threadData);
#define boxptr_NFDuplicateTree_new omc_NFDuplicateTree_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_new,2,0) {(void*) boxptr_NFDuplicateTree_new,0}};
#define boxvar_NFDuplicateTree_new MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_new)


DLLDirection
modelica_metatype omc_NFDuplicateTree_newDuplicate(threadData_t *threadData, modelica_metatype _kept, modelica_metatype _duplicate);
#define boxptr_NFDuplicateTree_newDuplicate omc_NFDuplicateTree_newDuplicate
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_newDuplicate,2,0) {(void*) boxptr_NFDuplicateTree_newDuplicate,0}};
#define boxvar_NFDuplicateTree_newDuplicate MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_newDuplicate)


DLLDirection
modelica_metatype omc_NFDuplicateTree_newEntry(threadData_t *threadData, modelica_metatype _lentry);
#define boxptr_NFDuplicateTree_newEntry omc_NFDuplicateTree_newEntry
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_newEntry,2,0) {(void*) boxptr_NFDuplicateTree_newEntry,0}};
#define boxvar_NFDuplicateTree_newEntry MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_newEntry)


DLLDirection
modelica_metatype omc_NFDuplicateTree_newRedeclare(threadData_t *threadData, modelica_metatype _entry);
#define boxptr_NFDuplicateTree_newRedeclare omc_NFDuplicateTree_newRedeclare
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_newRedeclare,2,0) {(void*) boxptr_NFDuplicateTree_newRedeclare,0}};
#define boxvar_NFDuplicateTree_newRedeclare MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_newRedeclare)


DLLDirection
modelica_string omc_NFDuplicateTree_printNodeStr(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_NFDuplicateTree_printNodeStr omc_NFDuplicateTree_printNodeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_printNodeStr,2,0) {(void*) boxptr_NFDuplicateTree_printNodeStr,0}};
#define boxvar_NFDuplicateTree_printNodeStr MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_printNodeStr)


DLLDirection
modelica_string omc_NFDuplicateTree_printTreeStr(threadData_t *threadData, modelica_metatype _inTree);
#define boxptr_NFDuplicateTree_printTreeStr omc_NFDuplicateTree_printTreeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_printTreeStr,2,0) {(void*) boxptr_NFDuplicateTree_printTreeStr,0}};
#define boxvar_NFDuplicateTree_printTreeStr MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_printTreeStr)


#define boxptr_NFDuplicateTree_rotateLeft omc_NFDuplicateTree_rotateLeft


#define boxptr_NFDuplicateTree_rotateRight omc_NFDuplicateTree_rotateRight


DLLDirection
modelica_metatype omc_NFDuplicateTree_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right);
#define boxptr_NFDuplicateTree_setTreeLeftRight omc_NFDuplicateTree_setTreeLeftRight
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_setTreeLeftRight,2,0) {(void*) boxptr_NFDuplicateTree_setTreeLeftRight,0}};
#define boxvar_NFDuplicateTree_setTreeLeftRight MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_setTreeLeftRight)


DLLDirection
modelica_string omc_NFDuplicateTree_smallestKey(threadData_t *threadData, modelica_metatype _tree);
#define boxptr_NFDuplicateTree_smallestKey omc_NFDuplicateTree_smallestKey
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_smallestKey,2,0) {(void*) boxptr_NFDuplicateTree_smallestKey,0}};
#define boxvar_NFDuplicateTree_smallestKey MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_smallestKey)


DLLDirection
modelica_metatype omc_NFDuplicateTree_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_NFDuplicateTree_toList omc_NFDuplicateTree_toList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_toList,2,0) {(void*) boxptr_NFDuplicateTree_toList,0}};
#define boxvar_NFDuplicateTree_toList MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_toList)


DLLDirection
modelica_metatype omc_NFDuplicateTree_update(threadData_t *threadData, modelica_metatype _tree, modelica_string _key, modelica_metatype _value);
#define boxptr_NFDuplicateTree_update omc_NFDuplicateTree_update
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_update,2,0) {(void*) boxptr_NFDuplicateTree_update,0}};
#define boxvar_NFDuplicateTree_update MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_update)


DLLDirection
modelica_string omc_NFDuplicateTree_valueStr(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_NFDuplicateTree_valueStr omc_NFDuplicateTree_valueStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDuplicateTree_valueStr,2,0) {(void*) boxptr_NFDuplicateTree_valueStr,0}};
#define boxvar_NFDuplicateTree_valueStr MMC_REFSTRUCTLIT(boxvar_lit_NFDuplicateTree_valueStr)

#ifdef __cplusplus
}
#endif
#endif
