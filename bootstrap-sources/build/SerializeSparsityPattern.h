#ifndef SerializeSparsityPattern__H
#define SerializeSparsityPattern__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;



/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void serializeC(const char* (*_name*), int (*_size*), modelica_metatype (*_columns*));
 */


/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void serializeJ(const char* (*_name*), int (*_numCols*), int (*_nnz*), modelica_metatype (*_colPtrs*), modelica_metatype (*_rowInds*));
 */

DLLDirection
modelica_string omc_SerializeSparsityPattern_serialize(threadData_t *threadData, modelica_metatype _code);
#define boxptr_SerializeSparsityPattern_serialize omc_SerializeSparsityPattern_serialize
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeSparsityPattern_serialize,2,0) {(void*) boxptr_SerializeSparsityPattern_serialize,0}};
#define boxvar_SerializeSparsityPattern_serialize MMC_REFSTRUCTLIT(boxvar_lit_SerializeSparsityPattern_serialize)

#ifdef __cplusplus
}
#endif
#endif
