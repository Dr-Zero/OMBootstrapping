#ifndef BinaryTree__H
#define BinaryTree__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description BinaryTree_BinTree_TREENODE__desc;

extern struct record_description BinaryTree_TreeValue_TREEVALUE__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;


#define boxptr_BinaryTree_binTreeintersection1 omc_BinaryTree_binTreeintersection1


DLLDirection
modelica_metatype omc_BinaryTree_binTreeintersection(threadData_t *threadData, modelica_metatype _bt1, modelica_metatype _bt2, modelica_metatype _iBt);
#define boxptr_BinaryTree_binTreeintersection omc_BinaryTree_binTreeintersection
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_binTreeintersection,2,0) {(void*) boxptr_BinaryTree_binTreeintersection,0}};
#define boxvar_BinaryTree_binTreeintersection MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_binTreeintersection)


#define boxptr_BinaryTree_bintreeToListOpt omc_BinaryTree_bintreeToListOpt


#define boxptr_BinaryTree_bintreeToList2 omc_BinaryTree_bintreeToList2


DLLDirection
modelica_metatype omc_BinaryTree_bintreeToList(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype *out_outValueLst);
#define boxptr_BinaryTree_bintreeToList omc_BinaryTree_bintreeToList
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_bintreeToList,2,0) {(void*) boxptr_BinaryTree_bintreeToList,0}};
#define boxvar_BinaryTree_bintreeToList MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_bintreeToList)


DLLDirection
modelica_metatype omc_BinaryTree_treeAdd(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKey, modelica_integer _inValue);
DLLDirection
modelica_metatype boxptr_BinaryTree_treeAdd(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKey, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_treeAdd,2,0) {(void*) boxptr_BinaryTree_treeAdd,0}};
#define boxvar_BinaryTree_treeAdd MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_treeAdd)


DLLDirection
modelica_metatype omc_BinaryTree_treeAddList(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKeyLst);
#define boxptr_BinaryTree_treeAddList omc_BinaryTree_treeAddList
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_treeAddList,2,0) {(void*) boxptr_BinaryTree_treeAddList,0}};
#define boxvar_BinaryTree_treeAddList MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_treeAddList)


DLLDirection
modelica_integer omc_BinaryTree_treeGet(threadData_t *threadData, modelica_metatype _bt, modelica_metatype _key);
DLLDirection
modelica_metatype boxptr_BinaryTree_treeGet(threadData_t *threadData, modelica_metatype _bt, modelica_metatype _key);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_treeGet,2,0) {(void*) boxptr_BinaryTree_treeGet,0}};
#define boxvar_BinaryTree_treeGet MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_treeGet)

#ifdef __cplusplus
}
#endif
#endif
