#ifndef BinaryTreeInt__H
#define BinaryTreeInt__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description BinaryTreeInt_BinTree_TREENODE__desc;

extern struct record_description BinaryTreeInt_TreeValue_TREEVALUE__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;


#define boxptr_BinaryTreeInt_bintreeToListOpt omc_BinaryTreeInt_bintreeToListOpt


#define boxptr_BinaryTreeInt_bintreeToList2 omc_BinaryTreeInt_bintreeToList2


DLLDirection
modelica_metatype omc_BinaryTreeInt_bintreeToList(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype *out_outValueLst);
#define boxptr_BinaryTreeInt_bintreeToList omc_BinaryTreeInt_bintreeToList
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTreeInt_bintreeToList,2,0) {(void*) boxptr_BinaryTreeInt_bintreeToList,0}};
#define boxvar_BinaryTreeInt_bintreeToList MMC_REFSTRUCTLIT(boxvar_lit_BinaryTreeInt_bintreeToList)


DLLDirection
modelica_metatype omc_BinaryTreeInt_treeAdd(threadData_t *threadData, modelica_metatype _inBinTree, modelica_integer _inKey, modelica_integer _inValue);
DLLDirection
modelica_metatype boxptr_BinaryTreeInt_treeAdd(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKey, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTreeInt_treeAdd,2,0) {(void*) boxptr_BinaryTreeInt_treeAdd,0}};
#define boxvar_BinaryTreeInt_treeAdd MMC_REFSTRUCTLIT(boxvar_lit_BinaryTreeInt_treeAdd)


DLLDirection
modelica_metatype omc_BinaryTreeInt_treeAddList(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKeyLst);
#define boxptr_BinaryTreeInt_treeAddList omc_BinaryTreeInt_treeAddList
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTreeInt_treeAddList,2,0) {(void*) boxptr_BinaryTreeInt_treeAddList,0}};
#define boxvar_BinaryTreeInt_treeAddList MMC_REFSTRUCTLIT(boxvar_lit_BinaryTreeInt_treeAddList)


DLLDirection
modelica_integer omc_BinaryTreeInt_treeGet(threadData_t *threadData, modelica_metatype _bt, modelica_integer _key);
DLLDirection
modelica_metatype boxptr_BinaryTreeInt_treeGet(threadData_t *threadData, modelica_metatype _bt, modelica_metatype _key);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTreeInt_treeGet,2,0) {(void*) boxptr_BinaryTreeInt_treeGet,0}};
#define boxvar_BinaryTreeInt_treeGet MMC_REFSTRUCTLIT(boxvar_lit_BinaryTreeInt_treeGet)

#ifdef __cplusplus
}
#endif
#endif
