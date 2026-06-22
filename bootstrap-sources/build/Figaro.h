#ifndef Figaro__H
#define Figaro__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_SCRIPTING__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description Figaro_FigaroClass_FIGAROCLASS__desc;

extern struct record_description Figaro_FigaroObject_FIGAROOBJECT__desc;

extern struct record_description Figaro_Token_CLOSETAG__desc;

extern struct record_description Figaro_Token_OPENTAG__desc;

extern struct record_description Figaro_Token_TEXT__desc;


#define boxptr_Figaro_printToken omc_Figaro_printToken


#define boxptr_Figaro_printTokenList omc_Figaro_printTokenList


#define boxptr_Figaro_printFigaroObjectList omc_Figaro_printFigaroObjectList


#define boxptr_Figaro_printFigaroClass omc_Figaro_printFigaroClass


#define boxptr_Figaro_printFigaroClassList omc_Figaro_printFigaroClassList


#define boxptr_Figaro_getMessage omc_Figaro_getMessage


#define boxptr_Figaro_parseInfo omc_Figaro_parseInfo


#define boxptr_Figaro_parseInfoList omc_Figaro_parseInfoList


#define boxptr_Figaro_parseError omc_Figaro_parseError


#define boxptr_Figaro_parseErrorList omc_Figaro_parseErrorList


#define boxptr_Figaro_parseAnswer omc_Figaro_parseAnswer


#define boxptr_Figaro_parseAnswerList omc_Figaro_parseAnswerList


#define boxptr_Figaro_parseAnswers omc_Figaro_parseAnswers


#define boxptr_Figaro_parse omc_Figaro_parse


#define boxptr_Figaro_removeUnknown omc_Figaro_removeUnknown


#define boxptr_Figaro_removeFirstIfText omc_Figaro_removeFirstIfText


#define boxptr_Figaro_removeTokens omc_Figaro_removeTokens


#define boxptr_Figaro_scanText omc_Figaro_scanText


#define boxptr_Figaro_scanTagName omc_Figaro_scanTagName


#define boxptr_Figaro_scanDeclaration omc_Figaro_scanDeclaration


#define boxptr_Figaro_scan omc_Figaro_scan


#define boxptr_Figaro_interpret omc_Figaro_interpret


#define boxptr_Figaro_callFigaroProcessor omc_Figaro_callFigaroProcessor


#define boxptr_Figaro_truncateExtension omc_Figaro_truncateExtension


#define boxptr_Figaro_makeXml omc_Figaro_makeXml


#define boxptr_Figaro_figaroObjectToString omc_Figaro_figaroObjectToString


#define boxptr_Figaro_figaroObjectListToString omc_Figaro_figaroObjectListToString


#define boxptr_Figaro_getLastIdent omc_Figaro_getLastIdent


#define boxptr_Figaro_foExp omc_Figaro_foExp


#define boxptr_Figaro_foMod2 omc_Figaro_foMod2


#define boxptr_Figaro_foSubMod omc_Figaro_foSubMod


#define boxptr_Figaro_foSubModList omc_Figaro_foSubModList


#define boxptr_Figaro_foMod1 omc_Figaro_foMod1


#define boxptr_Figaro_getFigaroTypeName omc_Figaro_getFigaroTypeName


#define boxptr_Figaro_findFigaroTypeName omc_Figaro_findFigaroTypeName


#define boxptr_Figaro_foElementList omc_Figaro_foElementList


#define boxptr_Figaro_foClassDef omc_Figaro_foClassDef


#define boxptr_Figaro_foElement omc_Figaro_foElement


#define boxptr_Figaro_fcExp omc_Figaro_fcExp


#define boxptr_Figaro_fcMod2 omc_Figaro_fcMod2


#define boxptr_Figaro_fcSubMod omc_Figaro_fcSubMod


#define boxptr_Figaro_fcSubModList omc_Figaro_fcSubModList


#define boxptr_Figaro_fcMod1 omc_Figaro_fcMod1


#define boxptr_Figaro_fcElementList omc_Figaro_fcElementList


#define boxptr_Figaro_fcClassDef omc_Figaro_fcClassDef


#define boxptr_Figaro_fcAddFigaroClass omc_Figaro_fcAddFigaroClass


#define boxptr_Figaro_fcElement omc_Figaro_fcElement


DLLDirection
modelica_string omc_Figaro_makeFigaro(threadData_t *threadData, modelica_metatype _inProgram, modelica_metatype _inModel, modelica_metatype _env);
#define boxptr_Figaro_makeFigaro omc_Figaro_makeFigaro
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_makeFigaro,2,0) {(void*) boxptr_Figaro_makeFigaro,0}};
#define boxvar_Figaro_makeFigaro MMC_REFSTRUCTLIT(boxvar_lit_Figaro_makeFigaro)


DLLDirection
void omc_Figaro_run(threadData_t *threadData, modelica_metatype _inProgram, modelica_metatype _inPath, modelica_string _workingDir, modelica_string _inDatabaseFile, modelica_string _inMode, modelica_string _inOptions, modelica_string _inFigaroProcessorFile);
#define boxptr_Figaro_run omc_Figaro_run
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_run,2,0) {(void*) boxptr_Figaro_run,0}};
#define boxvar_Figaro_run MMC_REFSTRUCTLIT(boxvar_lit_Figaro_run)

#ifdef __cplusplus
}
#endif
#endif
