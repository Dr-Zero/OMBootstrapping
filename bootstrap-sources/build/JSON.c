#include "omc_simulation_settings.h"
#include "JSON.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,4) {&Gettext_TranslatableContent_notrans__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(5999)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "JSON expected "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,14,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ", got token "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,12,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Expected <EOF>, got more tokens, starting with: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,48,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "Expected a "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,11,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data ", got token: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,13,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "JSON expected value, got <EOF>..."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,33,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,3) {&ErrorTypes_MessageType_SYNTAX__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Additional syntax errors were suppressed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,41,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(287)),_OMC_LIT12,_OMC_LIT1,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "Syntax error, unrecognized input: %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,37,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(286)),_OMC_LIT12,_OMC_LIT1,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "a (real) number"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,15,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "an integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,10,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "a String"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,8,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,0,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,10) {&JSON_TRUE__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,11) {&JSON_FALSE__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,12) {&JSON_NULL__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "a value"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,7,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "<String>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,8,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,2,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "{\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,2,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data ",\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,2,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,1,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "\": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,3,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,1,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,1,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,1,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "[\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,2,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,1,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,4,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,5,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "null"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,4,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,2,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,2,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,1,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,4) {&JSON_LIST__OBJECT__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#include "util/modelica.h"

#include "JSON_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_JSON_errorExpected(threadData_t *threadData, modelica_string _expected, modelica_metatype _tok);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_errorExpected,2,0) {(void*) boxptr_JSON_errorExpected,0}};
#define boxvar_JSON_errorExpected MMC_REFSTRUCTLIT(boxvar_lit_JSON_errorExpected)
PROTECTED_FUNCTION_STATIC void omc_JSON_check__empty(threadData_t *threadData, modelica_metatype _tokens);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_check__empty,2,0) {(void*) boxptr_JSON_check__empty,0}};
#define boxvar_JSON_check__empty MMC_REFSTRUCTLIT(boxvar_lit_JSON_check__empty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_JSON_parse__expected__token(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftokens, modelica_integer _expectedToken);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_JSON_parse__expected__token(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftokens, modelica_metatype _expectedToken);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_parse__expected__token,2,0) {(void*) boxptr_JSON_parse__expected__token,0}};
#define boxvar_JSON_parse__expected__token MMC_REFSTRUCTLIT(boxvar_lit_JSON_parse__expected__token)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_JSON_eat__if__next__token__matches(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftokens, modelica_integer _expectedToken, modelica_boolean *out_matched);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_JSON_eat__if__next__token__matches(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftokens, modelica_metatype _expectedToken, modelica_metatype *out_matched);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_eat__if__next__token__matches,2,0) {(void*) boxptr_JSON_eat__if__next__token__matches,0}};
#define boxvar_JSON_eat__if__next__token__matches MMC_REFSTRUCTLIT(boxvar_lit_JSON_eat__if__next__token__matches)
PROTECTED_FUNCTION_STATIC modelica_integer omc_JSON_peek__id(threadData_t *threadData, modelica_metatype _tokens);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_JSON_peek__id(threadData_t *threadData, modelica_metatype _tokens);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_peek__id,2,0) {(void*) boxptr_JSON_peek__id,0}};
#define boxvar_JSON_peek__id MMC_REFSTRUCTLIT(boxvar_lit_JSON_peek__id)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_JSON_not__eof(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftokens);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_not__eof,2,0) {(void*) boxptr_JSON_not__eof,0}};
#define boxvar_JSON_not__eof MMC_REFSTRUCTLIT(boxvar_lit_JSON_not__eof)
PROTECTED_FUNCTION_STATIC void omc_JSON_reportErrors(threadData_t *threadData, modelica_metatype _tokens);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSON_reportErrors,2,0) {(void*) boxptr_JSON_reportErrors,0}};
#define boxvar_JSON_reportErrors MMC_REFSTRUCTLIT(boxvar_lit_JSON_reportErrors)

PROTECTED_FUNCTION_STATIC void omc_JSON_errorExpected(threadData_t *threadData, modelica_string _expected, modelica_metatype _tok)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  const char* tmp5[13] = {"_NO_TOKEN", "ARRAYBEGIN", "ARRAYEND", "COLON", "COMMA", "FALSE", "INTEGER", "NULL", "NUMBER", "OBJECTBEGIN", "OBJECTEND", "STRING", "TRUE"};
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta2 = stringAppend(_OMC_LIT5,_expected);
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT6);
  tmp4 = enum_to_modelica_string(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tok), 3)))), tmp5, ((modelica_integer) 0), 1 /* true */);
  tmpMeta6 = stringAppend(tmpMeta3,tmp4);
  tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT7);
  tmpMeta8 = stringAppend(tmpMeta7,omc_LexerJSON_tokenContent(threadData, _tok));
  tmpMeta1 = mmc_mk_cons(tmpMeta8, MMC_REFSTRUCTLIT(mmc_nil));
  omc_Error_addSourceMessage(threadData, _OMC_LIT4, tmpMeta1, omc_LexerJSON_tokenSourceInfo(threadData, _tok));

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_JSON_check__empty(threadData_t *threadData, modelica_metatype _tokens)
{
  modelica_metatype _tok = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tok has no default value.
  if(listEmpty(_tokens))
  {
    goto _return;
  }

  _tok = listHead(_tokens);

  tmpMeta2 = stringAppend(_OMC_LIT8,omc_LexerJSON_tokenContent(threadData, _tok));
  tmpMeta1 = mmc_mk_cons(tmpMeta2, MMC_REFSTRUCTLIT(mmc_nil));
  omc_Error_addSourceMessage(threadData, _OMC_LIT4, tmpMeta1, omc_LexerJSON_tokenSourceInfo(threadData, _tok));

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_JSON_parse__expected__token(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftokens, modelica_integer _expectedToken)
{
  modelica_metatype _tokens = NULL;
  modelica_metatype _tok = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  const char* tmp6[13] = {"_NO_TOKEN", "ARRAYBEGIN", "ARRAYEND", "COLON", "COMMA", "FALSE", "INTEGER", "NULL", "NUMBER", "OBJECTBEGIN", "OBJECTEND", "STRING", "TRUE"};
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tokens = __omcQ_24in_5Ftokens;
  // _tok has no default value.
  omc_JSON_not__eof(threadData, _tokens);

  /* Pattern-matching assignment */
  tmpMeta1 = _tokens;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  _tok = tmpMeta2;
  _tokens = tmpMeta3;

  if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tok), 3)))) != (modelica_integer)_expectedToken))
  {
    tmp5 = enum_to_modelica_string((modelica_integer)_expectedToken, tmp6, ((modelica_integer) 0), 1 /* true */);
    tmpMeta7 = stringAppend(_OMC_LIT9,tmp5);
    tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT10);
    tmpMeta9 = stringAppend(tmpMeta8,omc_LexerJSON_tokenContent(threadData, _tok));
    tmpMeta4 = mmc_mk_cons(tmpMeta9, MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addSourceMessage(threadData, _OMC_LIT4, tmpMeta4, omc_LexerJSON_tokenSourceInfo(threadData, _tok));

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return _tokens;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_JSON_parse__expected__token(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftokens, modelica_metatype _expectedToken)
{
  modelica_integer tmp1;
  modelica_metatype _tokens = NULL;
  tmp1 = mmc_unbox_integer(_expectedToken);
  _tokens = omc_JSON_parse__expected__token(threadData, __omcQ_24in_5Ftokens, tmp1);
  /* skip box _tokens; list<LexerJSON.Token> */
  return _tokens;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_JSON_eat__if__next__token__matches(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftokens, modelica_integer _expectedToken, modelica_boolean *out_matched)
{
  modelica_metatype _tokens = NULL;
  modelica_boolean _matched;
  modelica_metatype _tok = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tokens = __omcQ_24in_5Ftokens;
  _matched = 0 /* false */;
  // _tok has no default value.
  if(listEmpty(_tokens))
  {
    goto _return;
  }

  _tok = listHead(_tokens);

  if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tok), 3)))) != (modelica_integer)_expectedToken))
  {
    goto _return;
  }

  _matched = 1 /* true */;

  /* Pattern-matching assignment */
  tmpMeta1 = _tokens;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  _tokens = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  if (out_matched) { *out_matched = _matched; }
  return _tokens;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_JSON_eat__if__next__token__matches(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftokens, modelica_metatype _expectedToken, modelica_metatype *out_matched)
{
  modelica_integer tmp1;
  modelica_boolean _matched;
  modelica_metatype _tokens = NULL;
  tmp1 = mmc_unbox_integer(_expectedToken);
  _tokens = omc_JSON_eat__if__next__token__matches(threadData, __omcQ_24in_5Ftokens, tmp1, &_matched);
  /* skip box _tokens; list<LexerJSON.Token> */
  if (out_matched) { *out_matched = mmc_mk_icon(_matched); }
  return _tokens;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_JSON_peek__id(threadData_t *threadData, modelica_metatype _tokens)
{
  modelica_integer _nextToken;
  modelica_metatype _tok = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _nextToken has no default value.
  // _tok has no default value.
  if(listEmpty(_tokens))
  {
    _nextToken = 1;
  }

  _tok = listHead(_tokens);

  _nextToken = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tok), 3))));
  _return: OMC_LABEL_UNUSED
  return _nextToken;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_JSON_peek__id(threadData_t *threadData, modelica_metatype _tokens)
{
  modelica_integer _nextToken;
  modelica_metatype out_nextToken;
  _nextToken = omc_JSON_peek__id(threadData, _tokens);
  out_nextToken = mmc_mk_icon(_nextToken);
  return out_nextToken;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_JSON_not__eof(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftokens)
{
  modelica_metatype _tokens = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tokens = __omcQ_24in_5Ftokens;
  if(listEmpty(_tokens))
  {
    omc_Error_addCompilerError(threadData, _OMC_LIT11);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return _tokens;
}

PROTECTED_FUNCTION_STATIC void omc_JSON_reportErrors(threadData_t *threadData, modelica_metatype _tokens)
{
  modelica_integer _i;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _i = ((modelica_integer) 0);
  {
    modelica_metatype _t;
    for (tmpMeta1 = _tokens; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      _i = ((modelica_integer) 1) + _i;

      if((_i > ((modelica_integer) 10)))
      {
        tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
        omc_Error_addMessage(threadData, _OMC_LIT15, tmpMeta2);
      }

      tmpMeta3 = mmc_mk_cons(omc_LexerJSON_tokenContent(threadData, _t), MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addSourceMessage(threadData, _OMC_LIT18, tmpMeta3, omc_LexerJSON_tokenSourceInfo(threadData, _t));
    }
  }

  if((!listEmpty(_tokens)))
  {
    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_JSON_parse__object(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens)
{
  modelica_metatype _value = NULL;
  modelica_metatype _tokens = NULL;
  modelica_metatype _tok = NULL;
  modelica_metatype _values = NULL;
  modelica_string _key = NULL;
  modelica_boolean _cont;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  _tokens = _inTokens;
  // _tok has no default value.
  // _values has no default value.
  // _key has no default value.
  // _cont has no default value.
  _values = omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEq, ((modelica_integer) 1));

  _tokens = omc_JSON_parse__expected__token(threadData, _tokens, 10);

  _cont = (omc_JSON_peek__id(threadData, _tokens) != 3);

  while(1)
  {
    if(!_cont) break;
    /* Pattern-matching tuple assignment */
    tmpMeta2 = omc_JSON_parse__string(threadData, _tokens, &tmpMeta1);
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,4,1) == 0) MMC_THROW_INTERNAL();
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
    _key = tmpMeta3;
    _tokens = tmpMeta1;

    _tokens = omc_JSON_parse__expected__token(threadData, _tokens, 4);

    _value = omc_JSON_parse__value(threadData, _tokens ,&_tokens);

    omc_UnorderedMap_add(threadData, _key, _value, _values);

    _tokens = omc_JSON_eat__if__next__token__matches(threadData, _tokens, 5 ,&_cont);
  }

  _tokens = omc_JSON_parse__expected__token(threadData, _tokens, 11);

  tmpMeta4 = mmc_mk_box2(3, &JSON_OBJECT__desc, _values);
  _value = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  if (out_tokens) { *out_tokens = _tokens; }
  return _value;
}

DLLDirection
modelica_metatype omc_JSON_parse__array(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens)
{
  modelica_metatype _value = NULL;
  modelica_metatype _tokens = NULL;
  modelica_metatype _tok = NULL;
  modelica_metatype _values = NULL;
  modelica_boolean _cont;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  _tokens = _inTokens;
  // _tok has no default value.
  _values = omc_Vector_new(threadData, ((modelica_integer) 0));
  // _cont has no default value.
  _value = omc_JSON_emptyObject(threadData);

  _tokens = omc_JSON_parse__expected__token(threadData, _tokens, 2);

  _cont = (omc_JSON_peek__id(threadData, _tokens) != 3);

  while(1)
  {
    if(!_cont) break;
    _value = omc_JSON_parse__value(threadData, _tokens ,&_tokens);

    omc_Vector_push(threadData, _values, _value);

    _tokens = omc_JSON_eat__if__next__token__matches(threadData, _tokens, 5 ,&_cont);
  }

  _tokens = omc_JSON_parse__expected__token(threadData, _tokens, 3);

  tmpMeta1 = mmc_mk_box2(5, &JSON_ARRAY__desc, _values);
  _value = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_tokens) { *out_tokens = _tokens; }
  return _value;
}

DLLDirection
modelica_metatype omc_JSON_parse__number(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens)
{
  modelica_metatype _value = NULL;
  modelica_metatype _tokens = NULL;
  modelica_metatype _tok = NULL;
  modelica_metatype _values = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _cont;
  modelica_string _content = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  _tokens = _inTokens;
  // _tok has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _values = tmpMeta1;
  // _cont has no default value.
  // _content has no default value.
  omc_JSON_not__eof(threadData, _tokens);

  /* Pattern-matching assignment */
  tmpMeta2 = _tokens;
  if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_CAR(tmpMeta2);
  tmpMeta4 = MMC_CDR(tmpMeta2);
  _tok = tmpMeta3;
  _tokens = tmpMeta4;

  if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tok), 3)))) != 9))
  {
    omc_JSON_errorExpected(threadData, _OMC_LIT19, _tok);
  }

  _content = omc_LexerJSON_tokenContent(threadData, _tok);

  tmpMeta5 = mmc_mk_box2(9, &JSON_NUMBER__desc, mmc_mk_real(stringReal(_content)));
  _value = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  if (out_tokens) { *out_tokens = _tokens; }
  return _value;
}

DLLDirection
modelica_metatype omc_JSON_parse__integer(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens)
{
  modelica_metatype _value = NULL;
  modelica_metatype _tokens = NULL;
  modelica_metatype _tok = NULL;
  modelica_metatype _values = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _cont;
  modelica_string _content = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  _tokens = _inTokens;
  // _tok has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _values = tmpMeta1;
  // _cont has no default value.
  // _content has no default value.
  omc_JSON_not__eof(threadData, _tokens);

  /* Pattern-matching assignment */
  tmpMeta2 = _tokens;
  if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_CAR(tmpMeta2);
  tmpMeta4 = MMC_CDR(tmpMeta2);
  _tok = tmpMeta3;
  _tokens = tmpMeta4;

  if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tok), 3)))) != 7))
  {
    omc_JSON_errorExpected(threadData, _OMC_LIT20, _tok);
  }

  _content = omc_LexerJSON_tokenContent(threadData, _tok);

  tmpMeta5 = mmc_mk_box2(8, &JSON_INTEGER__desc, mmc_mk_integer(stringInt(_content)));
  _value = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  if (out_tokens) { *out_tokens = _tokens; }
  return _value;
}

DLLDirection
modelica_metatype omc_JSON_parse__string(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens)
{
  modelica_metatype _value = NULL;
  modelica_metatype _tokens = NULL;
  modelica_metatype _tok = NULL;
  modelica_metatype _values = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _cont;
  modelica_string _content = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  _tokens = _inTokens;
  // _tok has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _values = tmpMeta1;
  // _cont has no default value.
  // _content has no default value.
  omc_JSON_not__eof(threadData, _tokens);

  /* Pattern-matching assignment */
  tmpMeta2 = _tokens;
  if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_CAR(tmpMeta2);
  tmpMeta4 = MMC_CDR(tmpMeta2);
  _tok = tmpMeta3;
  _tokens = tmpMeta4;

  if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tok), 3)))) != 12))
  {
    omc_JSON_errorExpected(threadData, _OMC_LIT21, _tok);
  }

  _content = omc_LexerJSON_tokenContent(threadData, _tok);

  if((stringLength(_content) == ((modelica_integer) 2)))
  {
    _content = _OMC_LIT22;
  }
  else
  {
    _content = omc_System_unescapedString(threadData, substring(_content, ((modelica_integer) 2), ((modelica_integer) -1) + stringLength(_content)));
  }

  tmpMeta5 = mmc_mk_box2(7, &JSON_STRING__desc, _content);
  _value = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  if (out_tokens) { *out_tokens = _tokens; }
  return _value;
}

DLLDirection
modelica_metatype omc_JSON_parse__value(threadData_t *threadData, modelica_metatype _inTokens, modelica_metatype *out_tokens)
{
  modelica_metatype _value = NULL;
  modelica_metatype _tokens = NULL;
  modelica_metatype _tok = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  _tokens = _inTokens;
  // _tok has no default value.
  omc_JSON_not__eof(threadData, _tokens);

  /* Pattern-matching assignment */
  tmpMeta1 = _tokens;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  _tok = tmpMeta2;
  _tokens = tmpMeta3;

  
  
  { /* match expression */
    modelica_metatype tmp7_1;
    tmp7_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tok), 3)));
    {
      int tmp7;
      {
        switch (MMC_SWITCH_CAST(mmc_unbox_integer(tmp7_1))) {
        case 12: {
          modelica_integer tmp8;
          tmp8 = mmc_unbox_integer(tmp7_1);
          if (12 != tmp8) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_JSON_parse__string(threadData, _inTokens, &tmpMeta[0+1]);
          goto tmp6_done;
        }
        case 7: {
          modelica_integer tmp9;
          tmp9 = mmc_unbox_integer(tmp7_1);
          if (7 != tmp9) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_JSON_parse__integer(threadData, _inTokens, &tmpMeta[0+1]);
          goto tmp6_done;
        }
        case 9: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp7_1);
          if (9 != tmp10) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_JSON_parse__number(threadData, _inTokens, &tmpMeta[0+1]);
          goto tmp6_done;
        }
        case 10: {
          modelica_integer tmp11;
          tmp11 = mmc_unbox_integer(tmp7_1);
          if (10 != tmp11) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_JSON_parse__object(threadData, _inTokens, &tmpMeta[0+1]);
          goto tmp6_done;
        }
        case 2: {
          modelica_integer tmp12;
          tmp12 = mmc_unbox_integer(tmp7_1);
          if (2 != tmp12) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_JSON_parse__array(threadData, _inTokens, &tmpMeta[0+1]);
          goto tmp6_done;
        }
        case 13: {
          modelica_integer tmp13;
          tmp13 = mmc_unbox_integer(tmp7_1);
          if (13 != tmp13) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT23;
          tmpMeta[0+1] = _tokens;
          goto tmp6_done;
        }
        case 6: {
          modelica_integer tmp14;
          tmp14 = mmc_unbox_integer(tmp7_1);
          if (6 != tmp14) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT24;
          tmpMeta[0+1] = _tokens;
          goto tmp6_done;
        }
        case 8: {
          modelica_integer tmp15;
          tmp15 = mmc_unbox_integer(tmp7_1);
          if (8 != tmp15) goto tmp6_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT25;
          tmpMeta[0+1] = _tokens;
          goto tmp6_done;
        }
        default:
        tmp6_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_JSON_errorExpected(threadData, _OMC_LIT26, _tok);
          goto goto_5;
          goto tmp6_done;
        }
        }
        goto tmp6_end;
        tmp6_end: ;
      }
      goto goto_5;
      goto_5:;
      MMC_THROW_INTERNAL();
      goto tmp6_done;
      tmp6_done:;
    }
  }
  _value = tmpMeta[0+0];
  _tokens = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_tokens) { *out_tokens = _tokens; }
  return _value;
}

DLLDirection
modelica_metatype omc_JSON_parse__value__check__empty(threadData_t *threadData, modelica_metatype _inTokens)
{
  modelica_metatype _value = NULL;
  modelica_metatype _tokens = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _tokens has no default value.
  _value = omc_JSON_parse__value(threadData, _inTokens ,&_tokens);

  omc_JSON_check__empty(threadData, _tokens);
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_JSON_parse(threadData_t *threadData, modelica_string _content, modelica_string _fileName)
{
  modelica_metatype _value = NULL;
  modelica_metatype _tokens = NULL;
  modelica_metatype _errTokens = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _tokens has no default value.
  // _errTokens has no default value.
  _tokens = omc_LexerJSON_scanString(threadData, _content, _fileName ,&_errTokens);

  omc_JSON_reportErrors(threadData, _errTokens);

  _value = omc_JSON_parse__value__check__empty(threadData, _tokens);
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_integer omc_JSON_size(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_integer _sz;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sz has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_UnorderedMap_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_Vector_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _sz = tmp1;
  _return: OMC_LABEL_UNUSED
  return _sz;
}
modelica_metatype boxptr_JSON_size(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_integer _sz;
  modelica_metatype out_sz;
  _sz = omc_JSON_size(threadData, _obj);
  out_sz = mmc_mk_icon(_sz);
  return out_sz;
}

DLLDirection
modelica_boolean omc_JSON_getBoolean(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_JSON_getBoolean(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSON_getBoolean(threadData, _obj);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_JSON_getKeys(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_metatype _keys = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _keys has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_UnorderedMap_keyList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype tmpMeta7;
            modelica_string __omcQ_24tmpVar2;
            modelica_integer tmp8;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta7; /* defaultValue */
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar2 = omc_Util_tuple21(threadData, _e);
                __omcQ_24tmpVar3 = mmc_mk_cons(__omcQ_24tmpVar2,__omcQ_24tmpVar3);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmpMeta6 = __omcQ_24tmpVar3;
          }
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _keys = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _keys;
}

DLLDirection
modelica_metatype omc_JSON_getStringList(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_metatype _strl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _strl has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_string __omcQ_24tmpVar4;
            modelica_integer tmp8;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar5;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar4 = omc_JSON_getString(threadData, _v);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar5;
          }
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype tmpMeta10;
            modelica_string __omcQ_24tmpVar6;
            modelica_integer tmp11;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2)));
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta10; /* defaultValue */
            while(1) {
              tmp11 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp11--;
              }
              if (tmp11 == 0) {
                __omcQ_24tmpVar6 = omc_JSON_getString(threadData, omc_Util_tuple22(threadData, _v));
                __omcQ_24tmpVar7 = mmc_mk_cons(__omcQ_24tmpVar6,__omcQ_24tmpVar7);
              } else if (tmp11 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmpMeta9 = __omcQ_24tmpVar7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Vector_mapToList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))), boxvar_JSON_getString);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp13;
            modelica_metatype tmpMeta14;
            modelica_string __omcQ_24tmpVar8;
            modelica_integer tmp15;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2)));
            tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta14; /* defaultValue */
            tmp13 = &__omcQ_24tmpVar9;
            while(1) {
              tmp15 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp15--;
              }
              if (tmp15 == 0) {
                __omcQ_24tmpVar8 = omc_JSON_getString(threadData, _v);
                *tmp13 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp13 = &MMC_CDR(*tmp13);
              } else if (tmp15 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp13 = mmc_mk_nil();
            tmpMeta12 = __omcQ_24tmpVar9;
          }
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _strl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _strl;
}

DLLDirection
modelica_string omc_JSON_getString(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _obj;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,4,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _str = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_JSON_at(threadData_t *threadData, modelica_metatype _obj, modelica_integer _index)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Vector_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))), _index);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}
modelica_metatype boxptr_JSON_at(threadData_t *threadData, modelica_metatype _obj, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_metatype _out = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _out = omc_JSON_at(threadData, _obj, tmp1);
  /* skip box _out; JSON */
  return _out;
}

DLLDirection
modelica_metatype omc_JSON_getOrDefault(threadData_t *threadData, modelica_metatype _obj, modelica_string _str, modelica_metatype _default)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_UnorderedMap_getOrDefault(threadData, _str, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))), _default);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _entry;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _entry = MMC_CAR(tmpMeta5);
              if((stringEqual(omc_Util_tuple21(threadData, _entry), _str)))
              {
                _out = omc_Util_tuple22(threadData, _entry);

                goto _return;
              }
            }
          }
          tmpMeta1 = _default;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _default;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

DLLDirection
modelica_metatype omc_JSON_get(threadData_t *threadData, modelica_metatype _obj, modelica_string _str)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_UnorderedMap_getOrFail(threadData, _str, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _entry;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _entry = MMC_CAR(tmpMeta6);
              if((stringEqual(omc_Util_tuple21(threadData, _entry), _str)))
              {
                _out = omc_Util_tuple22(threadData, _entry);

                goto _return;
              }
            }
          }
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

DLLDirection
modelica_boolean omc_JSON_hasKey(threadData_t *threadData, modelica_metatype _obj, modelica_string _str)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_UnorderedMap_contains(threadData, _str, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _b = 0 /* false */;

          {
            modelica_metatype _entry;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _entry = MMC_CAR(tmpMeta6);
              if((stringEqual(omc_Util_tuple21(threadData, _entry), _str)))
              {
                _b = 1 /* true */;
              }
            }
          }
          tmp1 = _b;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_JSON_hasKey(threadData_t *threadData, modelica_metatype _obj, modelica_metatype _str)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_JSON_hasKey(threadData, _obj, _str);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_JSON_parseFile(threadData_t *threadData, modelica_string _fileName)
{
  modelica_metatype _value = NULL;
  modelica_metatype _tokens = NULL;
  modelica_metatype _errTokens = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _tokens has no default value.
  // _errTokens has no default value.
  _tokens = omc_LexerJSON_scan(threadData, _fileName ,&_errTokens);

  omc_JSON_reportErrors(threadData, _errTokens);

  _value = omc_JSON_parse__value__check__empty(threadData, _tokens);
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
void omc_JSON_toStringPP__listObject(threadData_t *threadData, modelica_metatype _object, modelica_string _indent)
{
  modelica_boolean _first;
  modelica_string _key = NULL;
  modelica_metatype _value = NULL;
  modelica_string _next_indent = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _first = 1 /* true */;
  // _key has no default value.
  // _value has no default value.
  tmpMeta1 = stringAppend(_indent,_OMC_LIT28);
  _next_indent = tmpMeta1;
  omc_Print_printBuf(threadData, _OMC_LIT29);

  {
    modelica_metatype _entry;
    for (tmpMeta2 = listReverse(_object); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _entry = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _entry;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _key = tmpMeta4;
      _value = tmpMeta5;

      if(_first)
      {
        _first = 0 /* false */;
      }
      else
      {
        omc_Print_printBuf(threadData, _OMC_LIT30);
      }

      omc_Print_printBuf(threadData, _next_indent);

      omc_Print_printBuf(threadData, _OMC_LIT31);

      omc_Print_printBuf(threadData, _key);

      omc_Print_printBuf(threadData, _OMC_LIT32);

      omc_JSON_toStringPP__work(threadData, _value, _next_indent);
    }
  }

  omc_Print_printBuf(threadData, _OMC_LIT33);

  omc_Print_printBuf(threadData, _indent);

  omc_Print_printBuf(threadData, _OMC_LIT34);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_JSON_toStringPP__object(threadData_t *threadData, modelica_metatype _map, modelica_string _indent)
{
  modelica_string _next_indent = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_indent,_OMC_LIT28);
  _next_indent = tmpMeta1;
  omc_Print_printBuf(threadData, _OMC_LIT35);

  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = omc_UnorderedMap_size(threadData, _map);
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
    {
      omc_Print_printBuf(threadData, ((_i == ((modelica_integer) 1))?_OMC_LIT33:_OMC_LIT30));

      omc_Print_printBuf(threadData, _next_indent);

      omc_Print_printBuf(threadData, _OMC_LIT31);

      omc_Print_printBuf(threadData, omc_UnorderedMap_keyAt(threadData, _map, _i));

      omc_Print_printBuf(threadData, _OMC_LIT32);

      omc_JSON_toStringPP__work(threadData, omc_UnorderedMap_valueAt(threadData, _map, _i), _next_indent);
    }
  }

  omc_Print_printBuf(threadData, _OMC_LIT33);

  omc_Print_printBuf(threadData, _indent);

  omc_Print_printBuf(threadData, _OMC_LIT34);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_JSON_toStringPP__list(threadData_t *threadData, modelica_metatype _values, modelica_string _indent)
{
  modelica_string _next_indent = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _first;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_indent,_OMC_LIT28);
  _next_indent = tmpMeta1;
  _first = 1 /* true */;
  omc_Print_printBuf(threadData, _OMC_LIT36);

  {
    modelica_metatype _v;
    for (tmpMeta2 = _values; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _v = MMC_CAR(tmpMeta2);
      if(_first)
      {
        _first = 0 /* false */;
      }
      else
      {
        omc_Print_printBuf(threadData, _OMC_LIT30);
      }

      omc_Print_printBuf(threadData, _next_indent);

      omc_JSON_toStringPP__work(threadData, _v, _next_indent);
    }
  }

  omc_Print_printBuf(threadData, _OMC_LIT33);

  omc_Print_printBuf(threadData, _indent);

  omc_Print_printBuf(threadData, _OMC_LIT37);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_JSON_toStringPP__array(threadData_t *threadData, modelica_metatype _values, modelica_string _indent)
{
  modelica_string _next_indent = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_indent,_OMC_LIT28);
  _next_indent = tmpMeta1;
  omc_Print_printBuf(threadData, _OMC_LIT36);

  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = omc_Vector_size(threadData, _values);
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
    {
      if((_i != ((modelica_integer) 1)))
      {
        omc_Print_printBuf(threadData, _OMC_LIT30);
      }

      omc_Print_printBuf(threadData, _next_indent);

      omc_JSON_toStringPP__work(threadData, omc_Vector_getNoBounds(threadData, _values, _i), _next_indent);
    }
  }

  omc_Print_printBuf(threadData, _OMC_LIT33);

  omc_Print_printBuf(threadData, _indent);

  omc_Print_printBuf(threadData, _OMC_LIT37);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_JSON_toStringPP__work(threadData_t *threadData, modelica_metatype _value, modelica_string _indent)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _value;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 7: {
          
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _OMC_LIT31);

          omc_Print_printBuf(threadData, omc_System_escapedString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2))), 1 /* true */));

          omc_Print_printBuf(threadData, _OMC_LIT31);
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _OMC_LIT38);
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _OMC_LIT39);
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _OMC_LIT40);
          goto tmp2_done;
        }
        case 8: {
          modelica_string tmp4;
          
          /* Pattern matching succeeded */
          tmp4 = modelica_integer_to_modelica_string(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2)))), ((modelica_integer) 0), 1 /* true */);
          omc_Print_printBuf(threadData, tmp4);
          goto tmp2_done;
        }
        case 9: {
          modelica_string tmp5;
          
          /* Pattern matching succeeded */
          tmp5 = modelica_real_to_modelica_string(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2)))), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
          omc_Print_printBuf(threadData, tmp5);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_JSON_toStringPP__array(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2))), _indent);
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_JSON_toStringPP__list(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2))), _indent);
          goto tmp2_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          omc_JSON_toStringPP__object(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2))), _indent);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_JSON_toStringPP__listObject(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2))), _indent);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_JSON_toString__listObject(threadData_t *threadData, modelica_metatype _object)
{
  modelica_boolean _first;
  modelica_string _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _first = 1 /* true */;
  // _key has no default value.
  // _value has no default value.
  omc_Print_printBuf(threadData, _OMC_LIT35);

  {
    modelica_metatype _entry;
    for (tmpMeta1 = listReverse(_object); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _entry = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _entry;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _key = tmpMeta3;
      _value = tmpMeta4;

      if(_first)
      {
        _first = 0 /* false */;
      }
      else
      {
        omc_Print_printBuf(threadData, _OMC_LIT41);
      }

      omc_Print_printBuf(threadData, _OMC_LIT31);

      omc_Print_printBuf(threadData, _key);

      omc_Print_printBuf(threadData, _OMC_LIT42);

      omc_JSON_toString__work(threadData, _value);
    }
  }

  omc_Print_printBuf(threadData, _OMC_LIT34);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_JSON_toString__object(threadData_t *threadData, modelica_metatype _map)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Print_printBuf(threadData, _OMC_LIT35);

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = omc_UnorderedMap_size(threadData, _map);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      if((_i != ((modelica_integer) 1)))
      {
        omc_Print_printBuf(threadData, _OMC_LIT41);
      }

      omc_Print_printBuf(threadData, _OMC_LIT31);

      omc_Print_printBuf(threadData, omc_UnorderedMap_keyAt(threadData, _map, _i));

      omc_Print_printBuf(threadData, _OMC_LIT42);

      omc_JSON_toString__work(threadData, omc_UnorderedMap_valueAt(threadData, _map, _i));
    }
  }

  omc_Print_printBuf(threadData, _OMC_LIT34);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_JSON_toString__list(threadData_t *threadData, modelica_metatype _values)
{
  modelica_boolean _first;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _first = 1 /* true */;
  omc_Print_printBuf(threadData, _OMC_LIT43);

  {
    modelica_metatype _v;
    for (tmpMeta1 = _values; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _v = MMC_CAR(tmpMeta1);
      if(_first)
      {
        _first = 0 /* false */;
      }
      else
      {
        omc_Print_printBuf(threadData, _OMC_LIT41);
      }

      omc_JSON_toString__work(threadData, _v);
    }
  }

  omc_Print_printBuf(threadData, _OMC_LIT37);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_JSON_toString__array(threadData_t *threadData, modelica_metatype _values)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Print_printBuf(threadData, _OMC_LIT43);

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = omc_Vector_size(threadData, _values);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      if((_i != ((modelica_integer) 1)))
      {
        omc_Print_printBuf(threadData, _OMC_LIT41);
      }

      omc_JSON_toString__work(threadData, omc_Vector_getNoBounds(threadData, _values, _i));
    }
  }

  omc_Print_printBuf(threadData, _OMC_LIT37);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_JSON_toString__work(threadData_t *threadData, modelica_metatype _value)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _value;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 7: {
          
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _OMC_LIT31);

          omc_Print_printBuf(threadData, omc_System_escapedString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2))), 1 /* true */));

          omc_Print_printBuf(threadData, _OMC_LIT31);
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _OMC_LIT38);
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _OMC_LIT39);
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _OMC_LIT40);
          goto tmp2_done;
        }
        case 8: {
          modelica_string tmp4;
          
          /* Pattern matching succeeded */
          tmp4 = modelica_integer_to_modelica_string(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2)))), ((modelica_integer) 0), 1 /* true */);
          omc_Print_printBuf(threadData, tmp4);
          goto tmp2_done;
        }
        case 9: {
          modelica_string tmp5;
          
          /* Pattern matching succeeded */
          tmp5 = modelica_real_to_modelica_string(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2)))), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
          omc_Print_printBuf(threadData, tmp5);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_JSON_toString__array(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2))));
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_JSON_toString__list(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2))));
          goto tmp2_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          omc_JSON_toString__object(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2))));
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_JSON_toString__listObject(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2))));
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_string omc_JSON_toString(threadData_t *threadData, modelica_metatype _value, modelica_boolean _prettyPrint)
{
  modelica_string _str = NULL;
  modelica_integer _handle;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _handle has no default value.
  _handle = omc_Print_saveAndClearBuf(threadData);

  if(_prettyPrint)
  {
    omc_JSON_toStringPP__work(threadData, _value, _OMC_LIT22);
  }
  else
  {
    omc_JSON_toString__work(threadData, _value);
  }

  _str = omc_Print_getString(threadData);

  omc_Print_restoreBuf(threadData, _handle);
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_JSON_toString(threadData_t *threadData, modelica_metatype _value, modelica_metatype _prettyPrint)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_prettyPrint);
  _str = omc_JSON_toString(threadData, _value, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_metatype omc_JSON_addPairNotNull(threadData_t *threadData, modelica_string _key, modelica_metatype _value, modelica_metatype _obj)
{
  modelica_metatype _outObj = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outObj has no default value.
  _outObj = (omc_JSON_isNull(threadData, _value)?_obj:omc_JSON_addPair(threadData, _key, _value, _obj));
  _return: OMC_LABEL_UNUSED
  return _outObj;
}

DLLDirection
modelica_metatype omc_JSON_addPair(threadData_t *threadData, modelica_string _key, modelica_metatype _value, modelica_metatype _obj)
{
  modelica_metatype _outObj = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outObj has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_UnorderedMap_add(threadData, _key, _value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))));
          tmpMeta1 = _obj;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(0, _key, _value);
          tmpMeta5 = mmc_mk_cons(tmpMeta6, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))));
          tmpMeta7 = mmc_mk_box2(4, &JSON_LIST__OBJECT__desc, tmpMeta5);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _obj = omc_JSON_emptyListObject(threadData);
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outObj = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outObj;
}

DLLDirection
modelica_metatype omc_JSON_addElementNotNull(threadData_t *threadData, modelica_metatype _value, modelica_metatype _obj)
{
  modelica_metatype _outObj = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outObj has no default value.
  _outObj = (omc_JSON_isNull(threadData, _value)?_obj:omc_JSON_addElement(threadData, _value, _obj));
  _return: OMC_LABEL_UNUSED
  return _outObj;
}

DLLDirection
modelica_metatype omc_JSON_addElement(threadData_t *threadData, modelica_metatype _value, modelica_metatype _obj)
{
  modelica_metatype _outObj = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outObj has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_Vector_push(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_obj), 2))), _value);
          tmpMeta1 = _obj;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _obj = omc_JSON_emptyArray(threadData, ((modelica_integer) 0));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outObj = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outObj;
}

DLLDirection
modelica_boolean omc_JSON_isNull(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_JSON_isNull(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_JSON_isNull(threadData, _obj);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_JSON_makeNull(threadData_t *threadData)
{
  modelica_metatype _obj = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _obj = _OMC_LIT25;
  _return: OMC_LABEL_UNUSED
  return _obj;
}

DLLDirection
modelica_metatype omc_JSON_makeBoolean(threadData_t *threadData, modelica_boolean _b)
{
  modelica_metatype _obj = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _obj = (_b?_OMC_LIT23:_OMC_LIT24);
  _return: OMC_LABEL_UNUSED
  return _obj;
}
modelica_metatype boxptr_JSON_makeBoolean(threadData_t *threadData, modelica_metatype _b)
{
  modelica_integer tmp1;
  modelica_metatype _obj = NULL;
  tmp1 = mmc_unbox_integer(_b);
  _obj = omc_JSON_makeBoolean(threadData, tmp1);
  /* skip box _obj; JSON */
  return _obj;
}

DLLDirection
modelica_metatype omc_JSON_makeNumber(threadData_t *threadData, modelica_real _r)
{
  modelica_metatype _obj = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(9, &JSON_NUMBER__desc, mmc_mk_real(_r));
  _obj = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _obj;
}
modelica_metatype boxptr_JSON_makeNumber(threadData_t *threadData, modelica_metatype _r)
{
  modelica_real tmp1;
  modelica_metatype _obj = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_real(_r);
  _obj = omc_JSON_makeNumber(threadData, tmp1);
  /* skip box _obj; JSON */
  return _obj;
}

DLLDirection
modelica_metatype omc_JSON_makeInteger(threadData_t *threadData, modelica_integer _i)
{
  modelica_metatype _obj = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(8, &JSON_INTEGER__desc, mmc_mk_integer(_i));
  _obj = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _obj;
}
modelica_metatype boxptr_JSON_makeInteger(threadData_t *threadData, modelica_metatype _i)
{
  modelica_integer tmp1;
  modelica_metatype _obj = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_i);
  _obj = omc_JSON_makeInteger(threadData, tmp1);
  /* skip box _obj; JSON */
  return _obj;
}

DLLDirection
modelica_metatype omc_JSON_makeString(threadData_t *threadData, modelica_string _str)
{
  modelica_metatype _obj = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(7, &JSON_STRING__desc, _str);
  _obj = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _obj;
}

DLLDirection
modelica_metatype omc_JSON_makeList(threadData_t *threadData, modelica_metatype _elements)
{
  modelica_metatype _obj = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(6, &JSON_LIST__desc, _elements);
  _obj = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _obj;
}

DLLDirection
modelica_metatype omc_JSON_makeArray(threadData_t *threadData, modelica_metatype _elements)
{
  modelica_metatype _obj = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(5, &JSON_ARRAY__desc, omc_Vector_fromList(threadData, _elements));
  _obj = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _obj;
}

DLLDirection
modelica_metatype omc_JSON_emptyArray(threadData_t *threadData, modelica_integer _capacity)
{
  modelica_metatype _obj = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(5, &JSON_ARRAY__desc, omc_Vector_new(threadData, _capacity));
  _obj = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _obj;
}
modelica_metatype boxptr_JSON_emptyArray(threadData_t *threadData, modelica_metatype _capacity)
{
  modelica_integer tmp1;
  modelica_metatype _obj = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_capacity);
  _obj = omc_JSON_emptyArray(threadData, tmp1);
  /* skip box _obj; JSON */
  return _obj;
}

DLLDirection
modelica_metatype omc_JSON_fromPair(threadData_t *threadData, modelica_string _key, modelica_metatype _value)
{
  modelica_metatype _obj = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _obj has no default value.
  _obj = omc_JSON_emptyObject(threadData);

  _obj = omc_JSON_addPair(threadData, _key, _value, _obj);
  _return: OMC_LABEL_UNUSED
  return _obj;
}

DLLDirection
modelica_metatype omc_JSON_emptyListObject(threadData_t *threadData)
{
  modelica_metatype _obj = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _obj = _OMC_LIT44;
  _return: OMC_LABEL_UNUSED
  return _obj;
}

DLLDirection
modelica_metatype omc_JSON_emptyObject(threadData_t *threadData)
{
  modelica_metatype _obj = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _obj has no default value.
  tmpMeta1 = mmc_mk_box2(3, &JSON_OBJECT__desc, omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEq, ((modelica_integer) 1)));
  _obj = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _obj;
}

