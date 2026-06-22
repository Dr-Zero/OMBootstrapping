#ifndef NFUnit__H
#define NFUnit__H
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

extern struct record_description ErrorTypes_Severity_NOTIFICATION__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description NFUnit_Token_T__DIV__desc;

extern struct record_description NFUnit_Token_T__LPAREN__desc;

extern struct record_description NFUnit_Token_T__MUL__desc;

extern struct record_description NFUnit_Token_T__NUMBER__desc;

extern struct record_description NFUnit_Token_T__RPAREN__desc;

extern struct record_description NFUnit_Token_T__UNIT__desc;

extern struct record_description NFUnit_Unit_UNIT__desc;

extern struct record_description NFUnit_Unit_UNKNOWN__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_NFUnit_popNumber omc_NFUnit_popNumber


#define boxptr_NFUnit_popUnit omc_NFUnit_popUnit


#define boxptr_NFUnit_lexer omc_NFUnit_lexer


#define boxptr_NFUnit_unitToken2unit omc_NFUnit_unitToken2unit


#define boxptr_NFUnit_parser3 omc_NFUnit_parser3


DLLDirection
modelica_metatype omc_NFUnit_parseUnitString(threadData_t *threadData, modelica_string _inUnitString, modelica_metatype _inKnownUnits, modelica_metatype _info);
#define boxptr_NFUnit_parseUnitString omc_NFUnit_parseUnitString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_parseUnitString,2,0) {(void*) boxptr_NFUnit_parseUnitString,0}};
#define boxvar_NFUnit_parseUnitString MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_parseUnitString)


DLLDirection
modelica_string omc_NFUnit_unitString(threadData_t *threadData, modelica_metatype _inUnit, modelica_metatype _inHtU2S);
#define boxptr_NFUnit_unitString omc_NFUnit_unitString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_unitString,2,0) {(void*) boxptr_NFUnit_unitString,0}};
#define boxvar_NFUnit_unitString MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_unitString)


DLLDirection
modelica_metatype omc_NFUnit_unitRoot(threadData_t *threadData, modelica_metatype _inUnit, modelica_real _inExponent);
DLLDirection
modelica_metatype boxptr_NFUnit_unitRoot(threadData_t *threadData, modelica_metatype _inUnit, modelica_metatype _inExponent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_unitRoot,2,0) {(void*) boxptr_NFUnit_unitRoot,0}};
#define boxvar_NFUnit_unitRoot MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_unitRoot)


DLLDirection
modelica_metatype omc_NFUnit_unitMulReal(threadData_t *threadData, modelica_metatype _inUnit, modelica_real _inFactor);
DLLDirection
modelica_metatype boxptr_NFUnit_unitMulReal(threadData_t *threadData, modelica_metatype _inUnit, modelica_metatype _inFactor);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_unitMulReal,2,0) {(void*) boxptr_NFUnit_unitMulReal,0}};
#define boxvar_NFUnit_unitMulReal MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_unitMulReal)


DLLDirection
modelica_metatype omc_NFUnit_unitPow(threadData_t *threadData, modelica_metatype _inUnit, modelica_integer _inExp);
DLLDirection
modelica_metatype boxptr_NFUnit_unitPow(threadData_t *threadData, modelica_metatype _inUnit, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_unitPow,2,0) {(void*) boxptr_NFUnit_unitPow,0}};
#define boxvar_NFUnit_unitPow MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_unitPow)


DLLDirection
modelica_metatype omc_NFUnit_unitDiv(threadData_t *threadData, modelica_metatype _inUnit1, modelica_metatype _inUnit2);
#define boxptr_NFUnit_unitDiv omc_NFUnit_unitDiv
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_unitDiv,2,0) {(void*) boxptr_NFUnit_unitDiv,0}};
#define boxvar_NFUnit_unitDiv MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_unitDiv)


DLLDirection
modelica_metatype omc_NFUnit_unitMul(threadData_t *threadData, modelica_metatype _inUnit1, modelica_metatype _inUnit2);
#define boxptr_NFUnit_unitMul omc_NFUnit_unitMul
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_unitMul,2,0) {(void*) boxptr_NFUnit_unitMul,0}};
#define boxvar_NFUnit_unitMul MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_unitMul)


DLLDirection
modelica_string omc_NFUnit_unit2string(threadData_t *threadData, modelica_metatype _unit);
#define boxptr_NFUnit_unit2string omc_NFUnit_unit2string
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_unit2string,2,0) {(void*) boxptr_NFUnit_unit2string,0}};
#define boxvar_NFUnit_unit2string MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_unit2string)


DLLDirection
modelica_boolean omc_NFUnit_isEqual(threadData_t *threadData, modelica_metatype _unit1, modelica_metatype _unit2);
DLLDirection
modelica_metatype boxptr_NFUnit_isEqual(threadData_t *threadData, modelica_metatype _unit1, modelica_metatype _unit2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_isEqual,2,0) {(void*) boxptr_NFUnit_isEqual,0}};
#define boxvar_NFUnit_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_isEqual)


DLLDirection
modelica_boolean omc_NFUnit_realAlmostEqRel(threadData_t *threadData, modelica_real _a, modelica_real _b, modelica_real _relTol);
DLLDirection
modelica_metatype boxptr_NFUnit_realAlmostEqRel(threadData_t *threadData, modelica_metatype _a, modelica_metatype _b, modelica_metatype _relTol);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_realAlmostEqRel,2,0) {(void*) boxptr_NFUnit_realAlmostEqRel,0}};
#define boxvar_NFUnit_realAlmostEqRel MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_realAlmostEqRel)


DLLDirection
modelica_integer omc_NFUnit_hash(threadData_t *threadData, modelica_metatype _inKey);
DLLDirection
modelica_metatype boxptr_NFUnit_hash(threadData_t *threadData, modelica_metatype _inKey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_hash,2,0) {(void*) boxptr_NFUnit_hash,0}};
#define boxvar_NFUnit_hash MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_hash)


DLLDirection
modelica_boolean omc_NFUnit_isMaster(threadData_t *threadData, modelica_metatype _unit);
DLLDirection
modelica_metatype boxptr_NFUnit_isMaster(threadData_t *threadData, modelica_metatype _unit);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_isMaster,2,0) {(void*) boxptr_NFUnit_isMaster,0}};
#define boxvar_NFUnit_isMaster MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_isMaster)


DLLDirection
modelica_boolean omc_NFUnit_isUnit(threadData_t *threadData, modelica_metatype _inUnit);
DLLDirection
modelica_metatype boxptr_NFUnit_isUnit(threadData_t *threadData, modelica_metatype _inUnit);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_isUnit,2,0) {(void*) boxptr_NFUnit_isUnit,0}};
#define boxvar_NFUnit_isUnit MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_isUnit)


DLLDirection
modelica_metatype omc_NFUnit_newCrefUnitTable(threadData_t *threadData, modelica_integer _size);
DLLDirection
modelica_metatype boxptr_NFUnit_newCrefUnitTable(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_newCrefUnitTable,2,0) {(void*) boxptr_NFUnit_newCrefUnitTable,0}};
#define boxvar_NFUnit_newCrefUnitTable MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_newCrefUnitTable)


DLLDirection
modelica_metatype omc_NFUnit_getKnownUnitsInverse(threadData_t *threadData);
#define boxptr_NFUnit_getKnownUnitsInverse omc_NFUnit_getKnownUnitsInverse
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_getKnownUnitsInverse,2,0) {(void*) boxptr_NFUnit_getKnownUnitsInverse,0}};
#define boxvar_NFUnit_getKnownUnitsInverse MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_getKnownUnitsInverse)


DLLDirection
modelica_metatype omc_NFUnit_getKnownUnits(threadData_t *threadData);
#define boxptr_NFUnit_getKnownUnits omc_NFUnit_getKnownUnits
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnit_getKnownUnits,2,0) {(void*) boxptr_NFUnit_getKnownUnits,0}};
#define boxvar_NFUnit_getKnownUnits MMC_REFSTRUCTLIT(boxvar_lit_NFUnit_getKnownUnits)

#ifdef __cplusplus
}
#endif
#endif
