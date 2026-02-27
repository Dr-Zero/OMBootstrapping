#ifndef JSON__H
#define JSON__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_SYNTAX__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description Gettext_TranslatableContent_notrans__desc;

extern struct record_description JSON_ARRAY__desc;

extern struct record_description JSON_FALSE__desc;

extern struct record_description JSON_INTEGER__desc;

extern struct record_description JSON_LIST__desc;

extern struct record_description JSON_LIST__OBJECT__desc;

extern struct record_description JSON_NULL__desc;

extern struct record_description JSON_NUMBER__desc;

extern struct record_description JSON_OBJECT__desc;

extern struct record_description JSON_STRING__desc;

extern struct record_description JSON_TRUE__desc;


#define boxptr_JSON_errorExpected omc_JSON_errorExpected


#define boxptr_JSON_check__empty omc_JSON_check__empty


#define boxptr_JSON_not__eof omc_JSON_not__eof


#define boxptr_JSON_reportErrors omc_JSON_reportErrors


DLLDirection
modelica_metatype omc_JSON_parse__object(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens);
#define boxptr_JSON_parse__object omc_JSON_parse__object
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_parse__object,2,0) {(void*) boxptr_JSON_parse__object,0}};
#define boxvar_JSON_parse__object MMC_REFSTRUCTLIT(boxvar_lit_JSON_parse__object)


DLLDirection
modelica_metatype omc_JSON_parse__array(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens);
#define boxptr_JSON_parse__array omc_JSON_parse__array
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_parse__array,2,0) {(void*) boxptr_JSON_parse__array,0}};
#define boxvar_JSON_parse__array MMC_REFSTRUCTLIT(boxvar_lit_JSON_parse__array)


DLLDirection
modelica_metatype omc_JSON_parse__number(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens);
#define boxptr_JSON_parse__number omc_JSON_parse__number
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_parse__number,2,0) {(void*) boxptr_JSON_parse__number,0}};
#define boxvar_JSON_parse__number MMC_REFSTRUCTLIT(boxvar_lit_JSON_parse__number)


DLLDirection
modelica_metatype omc_JSON_parse__integer(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens);
#define boxptr_JSON_parse__integer omc_JSON_parse__integer
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_parse__integer,2,0) {(void*) boxptr_JSON_parse__integer,0}};
#define boxvar_JSON_parse__integer MMC_REFSTRUCTLIT(boxvar_lit_JSON_parse__integer)


DLLDirection
modelica_metatype omc_JSON_parse__string(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens);
#define boxptr_JSON_parse__string omc_JSON_parse__string
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_parse__string,2,0) {(void*) boxptr_JSON_parse__string,0}};
#define boxvar_JSON_parse__string MMC_REFSTRUCTLIT(boxvar_lit_JSON_parse__string)


DLLDirection
modelica_metatype omc_JSON_parse__value(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens);
#define boxptr_JSON_parse__value omc_JSON_parse__value
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_parse__value,2,0) {(void*) boxptr_JSON_parse__value,0}};
#define boxvar_JSON_parse__value MMC_REFSTRUCTLIT(boxvar_lit_JSON_parse__value)


DLLDirection
modelica_metatype omc_JSON_parse__value__check__empty(threadData_t *threadData, modelica_metatype _inTokens);
#define boxptr_JSON_parse__value__check__empty omc_JSON_parse__value__check__empty
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_parse__value__check__empty,2,0) {(void*) boxptr_JSON_parse__value__check__empty,0}};
#define boxvar_JSON_parse__value__check__empty MMC_REFSTRUCTLIT(boxvar_lit_JSON_parse__value__check__empty)


DLLDirection
modelica_metatype omc_JSON_parse(threadData_t *threadData, modelica_string _content, modelica_string _fileName);
#define boxptr_JSON_parse omc_JSON_parse
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_parse,2,0) {(void*) boxptr_JSON_parse,0}};
#define boxvar_JSON_parse MMC_REFSTRUCTLIT(boxvar_lit_JSON_parse)


DLLDirection
modelica_integer omc_JSON_size(threadData_t *threadData, modelica_metatype _obj);
DLLDirection
modelica_metatype boxptr_JSON_size(threadData_t *threadData, modelica_metatype _obj);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_size,2,0) {(void*) boxptr_JSON_size,0}};
#define boxvar_JSON_size MMC_REFSTRUCTLIT(boxvar_lit_JSON_size)


DLLDirection
modelica_boolean omc_JSON_getBoolean(threadData_t *threadData, modelica_metatype _obj);
DLLDirection
modelica_metatype boxptr_JSON_getBoolean(threadData_t *threadData, modelica_metatype _obj);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_getBoolean,2,0) {(void*) boxptr_JSON_getBoolean,0}};
#define boxvar_JSON_getBoolean MMC_REFSTRUCTLIT(boxvar_lit_JSON_getBoolean)


DLLDirection
modelica_metatype omc_JSON_getKeys(threadData_t *threadData, modelica_metatype _obj);
#define boxptr_JSON_getKeys omc_JSON_getKeys
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_getKeys,2,0) {(void*) boxptr_JSON_getKeys,0}};
#define boxvar_JSON_getKeys MMC_REFSTRUCTLIT(boxvar_lit_JSON_getKeys)


DLLDirection
modelica_metatype omc_JSON_getStringList(threadData_t *threadData, modelica_metatype _obj);
#define boxptr_JSON_getStringList omc_JSON_getStringList
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_getStringList,2,0) {(void*) boxptr_JSON_getStringList,0}};
#define boxvar_JSON_getStringList MMC_REFSTRUCTLIT(boxvar_lit_JSON_getStringList)


DLLDirection
modelica_string omc_JSON_getString(threadData_t *threadData, modelica_metatype _obj);
#define boxptr_JSON_getString omc_JSON_getString
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_getString,2,0) {(void*) boxptr_JSON_getString,0}};
#define boxvar_JSON_getString MMC_REFSTRUCTLIT(boxvar_lit_JSON_getString)


DLLDirection
modelica_metatype omc_JSON_at(threadData_t *threadData, modelica_metatype _obj, modelica_integer _index);
DLLDirection
modelica_metatype boxptr_JSON_at(threadData_t *threadData, modelica_metatype _obj, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_at,2,0) {(void*) boxptr_JSON_at,0}};
#define boxvar_JSON_at MMC_REFSTRUCTLIT(boxvar_lit_JSON_at)


DLLDirection
modelica_metatype omc_JSON_getOrDefault(threadData_t *threadData, modelica_metatype _obj, modelica_string _str, modelica_metatype _default);
#define boxptr_JSON_getOrDefault omc_JSON_getOrDefault
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_getOrDefault,2,0) {(void*) boxptr_JSON_getOrDefault,0}};
#define boxvar_JSON_getOrDefault MMC_REFSTRUCTLIT(boxvar_lit_JSON_getOrDefault)


DLLDirection
modelica_metatype omc_JSON_get(threadData_t *threadData, modelica_metatype _obj, modelica_string _str);
#define boxptr_JSON_get omc_JSON_get
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_get,2,0) {(void*) boxptr_JSON_get,0}};
#define boxvar_JSON_get MMC_REFSTRUCTLIT(boxvar_lit_JSON_get)


DLLDirection
modelica_boolean omc_JSON_hasKey(threadData_t *threadData, modelica_metatype _obj, modelica_string _str);
DLLDirection
modelica_metatype boxptr_JSON_hasKey(threadData_t *threadData, modelica_metatype _obj, modelica_metatype _str);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_hasKey,2,0) {(void*) boxptr_JSON_hasKey,0}};
#define boxvar_JSON_hasKey MMC_REFSTRUCTLIT(boxvar_lit_JSON_hasKey)


DLLDirection
modelica_metatype omc_JSON_parseFile(threadData_t *threadData, modelica_string _fileName);
#define boxptr_JSON_parseFile omc_JSON_parseFile
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_parseFile,2,0) {(void*) boxptr_JSON_parseFile,0}};
#define boxvar_JSON_parseFile MMC_REFSTRUCTLIT(boxvar_lit_JSON_parseFile)


DLLDirection
void omc_JSON_toStringPP__listObject(threadData_t *threadData, modelica_metatype _object, modelica_string _indent);
#define boxptr_JSON_toStringPP__listObject omc_JSON_toStringPP__listObject
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_toStringPP__listObject,2,0) {(void*) boxptr_JSON_toStringPP__listObject,0}};
#define boxvar_JSON_toStringPP__listObject MMC_REFSTRUCTLIT(boxvar_lit_JSON_toStringPP__listObject)


DLLDirection
void omc_JSON_toStringPP__object(threadData_t *threadData, modelica_metatype _map, modelica_string _indent);
#define boxptr_JSON_toStringPP__object omc_JSON_toStringPP__object
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_toStringPP__object,2,0) {(void*) boxptr_JSON_toStringPP__object,0}};
#define boxvar_JSON_toStringPP__object MMC_REFSTRUCTLIT(boxvar_lit_JSON_toStringPP__object)


DLLDirection
void omc_JSON_toStringPP__list(threadData_t *threadData, modelica_metatype _values, modelica_string _indent);
#define boxptr_JSON_toStringPP__list omc_JSON_toStringPP__list
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_toStringPP__list,2,0) {(void*) boxptr_JSON_toStringPP__list,0}};
#define boxvar_JSON_toStringPP__list MMC_REFSTRUCTLIT(boxvar_lit_JSON_toStringPP__list)


DLLDirection
void omc_JSON_toStringPP__array(threadData_t *threadData, modelica_metatype _values, modelica_string _indent);
#define boxptr_JSON_toStringPP__array omc_JSON_toStringPP__array
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_toStringPP__array,2,0) {(void*) boxptr_JSON_toStringPP__array,0}};
#define boxvar_JSON_toStringPP__array MMC_REFSTRUCTLIT(boxvar_lit_JSON_toStringPP__array)


DLLDirection
void omc_JSON_toStringPP__work(threadData_t *threadData, modelica_metatype _value, modelica_string _indent);
#define boxptr_JSON_toStringPP__work omc_JSON_toStringPP__work
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_toStringPP__work,2,0) {(void*) boxptr_JSON_toStringPP__work,0}};
#define boxvar_JSON_toStringPP__work MMC_REFSTRUCTLIT(boxvar_lit_JSON_toStringPP__work)


DLLDirection
void omc_JSON_toString__listObject(threadData_t *threadData, modelica_metatype _object);
#define boxptr_JSON_toString__listObject omc_JSON_toString__listObject
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_toString__listObject,2,0) {(void*) boxptr_JSON_toString__listObject,0}};
#define boxvar_JSON_toString__listObject MMC_REFSTRUCTLIT(boxvar_lit_JSON_toString__listObject)


DLLDirection
void omc_JSON_toString__object(threadData_t *threadData, modelica_metatype _map);
#define boxptr_JSON_toString__object omc_JSON_toString__object
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_toString__object,2,0) {(void*) boxptr_JSON_toString__object,0}};
#define boxvar_JSON_toString__object MMC_REFSTRUCTLIT(boxvar_lit_JSON_toString__object)


DLLDirection
void omc_JSON_toString__list(threadData_t *threadData, modelica_metatype _values);
#define boxptr_JSON_toString__list omc_JSON_toString__list
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_toString__list,2,0) {(void*) boxptr_JSON_toString__list,0}};
#define boxvar_JSON_toString__list MMC_REFSTRUCTLIT(boxvar_lit_JSON_toString__list)


DLLDirection
void omc_JSON_toString__array(threadData_t *threadData, modelica_metatype _values);
#define boxptr_JSON_toString__array omc_JSON_toString__array
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_toString__array,2,0) {(void*) boxptr_JSON_toString__array,0}};
#define boxvar_JSON_toString__array MMC_REFSTRUCTLIT(boxvar_lit_JSON_toString__array)


DLLDirection
void omc_JSON_toString__work(threadData_t *threadData, modelica_metatype _value);
#define boxptr_JSON_toString__work omc_JSON_toString__work
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_toString__work,2,0) {(void*) boxptr_JSON_toString__work,0}};
#define boxvar_JSON_toString__work MMC_REFSTRUCTLIT(boxvar_lit_JSON_toString__work)


DLLDirection
modelica_string omc_JSON_toString(threadData_t *threadData, modelica_metatype _value, modelica_boolean _prettyPrint);
DLLDirection
modelica_metatype boxptr_JSON_toString(threadData_t *threadData, modelica_metatype _value, modelica_metatype _prettyPrint);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_toString,2,0) {(void*) boxptr_JSON_toString,0}};
#define boxvar_JSON_toString MMC_REFSTRUCTLIT(boxvar_lit_JSON_toString)


DLLDirection
modelica_metatype omc_JSON_addPairNotNull(threadData_t *threadData, modelica_string _key, modelica_metatype _value, modelica_metatype _obj);
#define boxptr_JSON_addPairNotNull omc_JSON_addPairNotNull
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_addPairNotNull,2,0) {(void*) boxptr_JSON_addPairNotNull,0}};
#define boxvar_JSON_addPairNotNull MMC_REFSTRUCTLIT(boxvar_lit_JSON_addPairNotNull)


DLLDirection
modelica_metatype omc_JSON_addPair(threadData_t *threadData, modelica_string _key, modelica_metatype _value, modelica_metatype _obj);
#define boxptr_JSON_addPair omc_JSON_addPair
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_addPair,2,0) {(void*) boxptr_JSON_addPair,0}};
#define boxvar_JSON_addPair MMC_REFSTRUCTLIT(boxvar_lit_JSON_addPair)


DLLDirection
modelica_metatype omc_JSON_addElementNotNull(threadData_t *threadData, modelica_metatype _value, modelica_metatype _obj);
#define boxptr_JSON_addElementNotNull omc_JSON_addElementNotNull
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_addElementNotNull,2,0) {(void*) boxptr_JSON_addElementNotNull,0}};
#define boxvar_JSON_addElementNotNull MMC_REFSTRUCTLIT(boxvar_lit_JSON_addElementNotNull)


DLLDirection
modelica_metatype omc_JSON_addElement(threadData_t *threadData, modelica_metatype _value, modelica_metatype _obj);
#define boxptr_JSON_addElement omc_JSON_addElement
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_addElement,2,0) {(void*) boxptr_JSON_addElement,0}};
#define boxvar_JSON_addElement MMC_REFSTRUCTLIT(boxvar_lit_JSON_addElement)


DLLDirection
modelica_boolean omc_JSON_isNull(threadData_t *threadData, modelica_metatype _obj);
DLLDirection
modelica_metatype boxptr_JSON_isNull(threadData_t *threadData, modelica_metatype _obj);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_isNull,2,0) {(void*) boxptr_JSON_isNull,0}};
#define boxvar_JSON_isNull MMC_REFSTRUCTLIT(boxvar_lit_JSON_isNull)


DLLDirection
modelica_metatype omc_JSON_makeNull(threadData_t *threadData);
#define boxptr_JSON_makeNull omc_JSON_makeNull
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_makeNull,2,0) {(void*) boxptr_JSON_makeNull,0}};
#define boxvar_JSON_makeNull MMC_REFSTRUCTLIT(boxvar_lit_JSON_makeNull)


DLLDirection
modelica_metatype omc_JSON_makeBoolean(threadData_t *threadData, modelica_boolean _b);
DLLDirection
modelica_metatype boxptr_JSON_makeBoolean(threadData_t *threadData, modelica_metatype _b);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_makeBoolean,2,0) {(void*) boxptr_JSON_makeBoolean,0}};
#define boxvar_JSON_makeBoolean MMC_REFSTRUCTLIT(boxvar_lit_JSON_makeBoolean)


DLLDirection
modelica_metatype omc_JSON_makeNumber(threadData_t *threadData, modelica_real _r);
DLLDirection
modelica_metatype boxptr_JSON_makeNumber(threadData_t *threadData, modelica_metatype _r);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_makeNumber,2,0) {(void*) boxptr_JSON_makeNumber,0}};
#define boxvar_JSON_makeNumber MMC_REFSTRUCTLIT(boxvar_lit_JSON_makeNumber)


DLLDirection
modelica_metatype omc_JSON_makeInteger(threadData_t *threadData, modelica_integer _i);
DLLDirection
modelica_metatype boxptr_JSON_makeInteger(threadData_t *threadData, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_makeInteger,2,0) {(void*) boxptr_JSON_makeInteger,0}};
#define boxvar_JSON_makeInteger MMC_REFSTRUCTLIT(boxvar_lit_JSON_makeInteger)


DLLDirection
modelica_metatype omc_JSON_makeString(threadData_t *threadData, modelica_string _str);
#define boxptr_JSON_makeString omc_JSON_makeString
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_makeString,2,0) {(void*) boxptr_JSON_makeString,0}};
#define boxvar_JSON_makeString MMC_REFSTRUCTLIT(boxvar_lit_JSON_makeString)


DLLDirection
modelica_metatype omc_JSON_makeList(threadData_t *threadData, modelica_metatype _elements);
#define boxptr_JSON_makeList omc_JSON_makeList
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_makeList,2,0) {(void*) boxptr_JSON_makeList,0}};
#define boxvar_JSON_makeList MMC_REFSTRUCTLIT(boxvar_lit_JSON_makeList)


DLLDirection
modelica_metatype omc_JSON_makeArray(threadData_t *threadData, modelica_metatype _elements);
#define boxptr_JSON_makeArray omc_JSON_makeArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_makeArray,2,0) {(void*) boxptr_JSON_makeArray,0}};
#define boxvar_JSON_makeArray MMC_REFSTRUCTLIT(boxvar_lit_JSON_makeArray)


DLLDirection
modelica_metatype omc_JSON_emptyArray(threadData_t *threadData, modelica_integer _capacity);
DLLDirection
modelica_metatype boxptr_JSON_emptyArray(threadData_t *threadData, modelica_metatype _capacity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_emptyArray,2,0) {(void*) boxptr_JSON_emptyArray,0}};
#define boxvar_JSON_emptyArray MMC_REFSTRUCTLIT(boxvar_lit_JSON_emptyArray)


DLLDirection
modelica_metatype omc_JSON_fromPair(threadData_t *threadData, modelica_string _key, modelica_metatype _value);
#define boxptr_JSON_fromPair omc_JSON_fromPair
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_fromPair,2,0) {(void*) boxptr_JSON_fromPair,0}};
#define boxvar_JSON_fromPair MMC_REFSTRUCTLIT(boxvar_lit_JSON_fromPair)


DLLDirection
modelica_metatype omc_JSON_emptyListObject(threadData_t *threadData);
#define boxptr_JSON_emptyListObject omc_JSON_emptyListObject
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_emptyListObject,2,0) {(void*) boxptr_JSON_emptyListObject,0}};
#define boxvar_JSON_emptyListObject MMC_REFSTRUCTLIT(boxvar_lit_JSON_emptyListObject)


DLLDirection
modelica_metatype omc_JSON_emptyObject(threadData_t *threadData);
#define boxptr_JSON_emptyObject omc_JSON_emptyObject
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_emptyObject,2,0) {(void*) boxptr_JSON_emptyObject,0}};
#define boxvar_JSON_emptyObject MMC_REFSTRUCTLIT(boxvar_lit_JSON_emptyObject)

#ifdef __cplusplus
}
#endif
#endif
