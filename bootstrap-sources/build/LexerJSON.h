#ifndef LexerJSON__H
#define LexerJSON__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description LexerJSON_Token_TOKEN__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_LexerJSON_lex omc_LexerJSON_lex


DLLDirection
modelica_metatype omc_LexerJSON_tokenSourceInfo(threadData_t *threadData, modelica_metatype _token);
#define boxptr_LexerJSON_tokenSourceInfo omc_LexerJSON_tokenSourceInfo
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerJSON_tokenSourceInfo,2,0) {(void*) boxptr_LexerJSON_tokenSourceInfo,0}};
#define boxvar_LexerJSON_tokenSourceInfo MMC_REFSTRUCTLIT(boxvar_lit_LexerJSON_tokenSourceInfo)


DLLDirection
modelica_boolean omc_LexerJSON_tokenContentEq(threadData_t *threadData, modelica_metatype _token1, modelica_metatype _token2);
DLLDirection
modelica_metatype boxptr_LexerJSON_tokenContentEq(threadData_t *threadData, modelica_metatype _token1, modelica_metatype _token2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerJSON_tokenContentEq,2,0) {(void*) boxptr_LexerJSON_tokenContentEq,0}};
#define boxvar_LexerJSON_tokenContentEq MMC_REFSTRUCTLIT(boxvar_lit_LexerJSON_tokenContentEq)


DLLDirection
modelica_string omc_LexerJSON_tokenContent(threadData_t *threadData, modelica_metatype _token);
#define boxptr_LexerJSON_tokenContent omc_LexerJSON_tokenContent
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerJSON_tokenContent,2,0) {(void*) boxptr_LexerJSON_tokenContent,0}};
#define boxvar_LexerJSON_tokenContent MMC_REFSTRUCTLIT(boxvar_lit_LexerJSON_tokenContent)


DLLDirection
modelica_string omc_LexerJSON_printToken(threadData_t *threadData, modelica_metatype _token);
#define boxptr_LexerJSON_printToken omc_LexerJSON_printToken
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerJSON_printToken,2,0) {(void*) boxptr_LexerJSON_printToken,0}};
#define boxvar_LexerJSON_printToken MMC_REFSTRUCTLIT(boxvar_lit_LexerJSON_printToken)


DLLDirection
modelica_metatype omc_LexerJSON_action(threadData_t *threadData, modelica_integer _act, modelica_integer _startSt, modelica_integer _mm_currSt, modelica_integer _mm_pos, modelica_integer _mm_sPos, modelica_integer _mm_ePos, modelica_integer _mm_linenr, modelica_integer _lineNrStart, modelica_integer _buffer, modelica_string _fileNm, modelica_string _fileContents, modelica_metatype _inErrorTokens, modelica_integer *out_mm_startSt, modelica_integer *out_bufferRet, modelica_metatype *out_errorTokens);
DLLDirection
modelica_metatype boxptr_LexerJSON_action(threadData_t *threadData, modelica_metatype _act, modelica_metatype _startSt, modelica_metatype _mm_currSt, modelica_metatype _mm_pos, modelica_metatype _mm_sPos, modelica_metatype _mm_ePos, modelica_metatype _mm_linenr, modelica_metatype _lineNrStart, modelica_metatype _buffer, modelica_metatype _fileNm, modelica_metatype _fileContents, modelica_metatype _inErrorTokens, modelica_metatype *out_mm_startSt, modelica_metatype *out_bufferRet, modelica_metatype *out_errorTokens);
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerJSON_action,2,0) {(void*) boxptr_LexerJSON_action,0}};
#define boxvar_LexerJSON_action MMC_REFSTRUCTLIT(boxvar_lit_LexerJSON_action)


DLLDirection
modelica_metatype omc_LexerJSON_scanString(threadData_t *threadData, modelica_string _fileSource, modelica_string _fileName, modelica_metatype *out_errorTokens);
#define boxptr_LexerJSON_scanString omc_LexerJSON_scanString
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerJSON_scanString,2,0) {(void*) boxptr_LexerJSON_scanString,0}};
#define boxvar_LexerJSON_scanString MMC_REFSTRUCTLIT(boxvar_lit_LexerJSON_scanString)


DLLDirection
modelica_metatype omc_LexerJSON_scan(threadData_t *threadData, modelica_string _fileName, modelica_metatype *out_errorTokens);
#define boxptr_LexerJSON_scan omc_LexerJSON_scan
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerJSON_scan,2,0) {(void*) boxptr_LexerJSON_scan,0}};
#define boxvar_LexerJSON_scan MMC_REFSTRUCTLIT(boxvar_lit_LexerJSON_scan)

#ifdef __cplusplus
}
#endif
#endif
