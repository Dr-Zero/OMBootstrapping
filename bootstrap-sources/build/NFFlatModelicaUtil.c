#include "omc_simulation_settings.h"
#include "NFFlatModelicaUtil.h"
#define _OMC_LIT0_data "time"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,4,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "final "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,6,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "each "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,5,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,2,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,3,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "experiment"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,10,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "annotation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,10,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data " \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,2,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,1,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,1,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,0,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#include "util/modelica.h"

#include "NFFlatModelicaUtil_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFFlatModelicaUtil_filterRootClassAnnotations_filter(threadData_t *threadData, modelica_metatype _smod);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFFlatModelicaUtil_filterRootClassAnnotations_filter(threadData_t *threadData, modelica_metatype _smod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFlatModelicaUtil_filterRootClassAnnotations_filter,2,0) {(void*) boxptr_NFFlatModelicaUtil_filterRootClassAnnotations_filter,0}};
#define boxvar_NFFlatModelicaUtil_filterRootClassAnnotations_filter MMC_REFSTRUCTLIT(boxvar_lit_NFFlatModelicaUtil_filterRootClassAnnotations_filter)

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_quoteCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer __omcQ_24in_5Fdummy, modelica_integer *out_dummy)
{
  modelica_metatype _exp = NULL;
  modelica_integer _dummy;
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _dummy = __omcQ_24in_5Fdummy;
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_AbsynUtil_crefIsWild(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))))) goto tmp2_end;
          _str = omc_Dump_printComponentRefStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));

          if((!stringEqual(_str, _OMC_LIT0)))
          {
            _str = omc_Util_makeQuotedIdentifier(threadData, _str);

            tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta7 = mmc_mk_box3(5, &Absyn_ComponentRef_CREF__IDENT__desc, _str, tmpMeta6);
            tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
            memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = tmpMeta7;
            _exp = tmpMeta5;
          }
          goto tmp2_done;
        }
        case 1: {
          
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
  if (out_dummy) { *out_dummy = _dummy; }
  return _exp;
}
modelica_metatype boxptr_NFFlatModelicaUtil_quoteCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5Fdummy, modelica_metatype *out_dummy)
{
  modelica_integer tmp1;
  modelica_integer _dummy;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fdummy);
  _exp = omc_NFFlatModelicaUtil_quoteCref(threadData, __omcQ_24in_5Fexp, tmp1, &_dummy);
  /* skip box _exp; Absyn.Exp */
  if (out_dummy) { *out_dummy = mmc_mk_icon(_dummy); }
  return _exp;
}

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_appendExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype _e = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  // _e has no default value.
  _e = omc_AbsynUtil_traverseExp(threadData, _exp, boxvar_NFFlatModelicaUtil_quoteCref, mmc_mk_integer(((modelica_integer) 0)), NULL);

  _s = omc_IOStream_append(threadData, _s, omc_Dump_printExpStr(threadData, _e));
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_appendAnnotationSubMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype _m = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  _m = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 3)));
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _m;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          if(omc_SCodeUtil_finalBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 2)))))
          {
            _s = omc_IOStream_append(threadData, _s, _OMC_LIT1);
          }

          if(omc_SCodeUtil_eachBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 3)))))
          {
            _s = omc_IOStream_append(threadData, _s, _OMC_LIT2);
          }

          _s = omc_IOStream_append(threadData, _s, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2))));

          _s = omc_NFFlatModelicaUtil_appendAnnotationMod(threadData, _m, _s);
          goto tmp2_done;
        }
        case 1: {
          
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
  return _s;
}

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_appendAnnotationMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))))))
          {
            _s = omc_IOStream_append(threadData, _s, _OMC_LIT3);

            _s = omc_NFFlatModelicaUtil_appendAnnotationSubMod(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4)))), _s);

            {
              modelica_metatype _m;
              for (tmpMeta5 = listRest((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4)))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
              {
                _m = MMC_CAR(tmpMeta5);
                _s = omc_IOStream_append(threadData, _s, _OMC_LIT4);

                _s = omc_NFFlatModelicaUtil_appendAnnotationSubMod(threadData, _m, _s);
              }
            }

            _s = omc_IOStream_append(threadData, _s, _OMC_LIT5);
          }

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5)))))
          {
            _s = omc_IOStream_append(threadData, _s, _OMC_LIT6);

            _s = omc_NFFlatModelicaUtil_appendExp(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5)))), _s);
          }
          goto tmp2_done;
        }
        case 1: {
          
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
  return _s;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFFlatModelicaUtil_filterRootClassAnnotations_filter(threadData_t *threadData, modelica_metatype _smod)
{
  modelica_boolean _keep;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _keep has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_smod), 2)));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (10 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT7), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
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
  _keep = tmp1;
  _return: OMC_LABEL_UNUSED
  return _keep;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFFlatModelicaUtil_filterRootClassAnnotations_filter(threadData_t *threadData, modelica_metatype _smod)
{
  modelica_boolean _keep;
  modelica_metatype out_keep;
  _keep = omc_NFFlatModelicaUtil_filterRootClassAnnotations_filter(threadData, _smod);
  out_keep = mmc_mk_icon(_keep);
  return out_keep;
}

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_filterRootClassAnnotations(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod)
{
  modelica_metatype _mod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  _mod = omc_SCodeUtil_filterSubMods(threadData, _mod, boxvar_NFFlatModelicaUtil_filterRootClassAnnotations_filter);
  _return: OMC_LABEL_UNUSED
  return _mod;
}

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_appendCommentAnnotation(threadData_t *threadData, modelica_metatype _comment, modelica_integer _elementType, modelica_string _indent, modelica_string _ending, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype _mod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  // _mod has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _comment;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (optionNone(tmpMeta5)) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _mod = tmpMeta7;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_integer tmp11_1;
            tmp11_1 = (modelica_integer)_elementType;
            {
              volatile mmc_switch_type tmp11;
              int tmp12;
              tmp11 = 0;
              for (; tmp11 < 2; tmp11++) {
                switch (MMC_SWITCH_CAST(tmp11)) {
                case 0: {
                  if (1 != tmp11_1) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmpMeta8 = omc_NFFlatModelicaUtil_filterRootClassAnnotations(threadData, _mod);
                  goto tmp10_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta8 = omc_DAEDumpTypes_filterStructuralMods(threadData, _mod);
                  goto tmp10_done;
                }
                }
                goto tmp10_end;
                tmp10_end: ;
              }
              goto goto_9;
              goto_9:;
              goto goto_1;
              goto tmp10_done;
              tmp10_done:;
            }
          }
          _mod = tmpMeta8;

          if((!omc_SCodeUtil_isEmptyMod(threadData, _mod)))
          {
            _s = omc_IOStream_append(threadData, _s, _indent);

            _s = omc_IOStream_append(threadData, _s, _OMC_LIT8);

            _s = omc_NFFlatModelicaUtil_appendAnnotationMod(threadData, _mod, _s);

            _s = omc_IOStream_append(threadData, _s, _ending);
          }
          goto tmp2_done;
        }
        case 1: {
          
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
  return _s;
}
modelica_metatype boxptr_NFFlatModelicaUtil_appendCommentAnnotation(threadData_t *threadData, modelica_metatype _comment, modelica_metatype _elementType, modelica_metatype _indent, modelica_metatype _ending, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_integer tmp1;
  modelica_metatype _s = NULL;
  tmp1 = mmc_unbox_integer(_elementType);
  _s = omc_NFFlatModelicaUtil_appendCommentAnnotation(threadData, _comment, tmp1, _indent, _ending, __omcQ_24in_5Fs);
  /* skip box _s; IOStream.IOStream */
  return _s;
}

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_appendCommentString(threadData_t *threadData, modelica_metatype _comment, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _comment;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (optionNone(tmpMeta5)) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          _str = tmpMeta6;
          /* Pattern matching succeeded */
          _s = omc_IOStream_append(threadData, _s, _OMC_LIT9);

          _s = omc_IOStream_append(threadData, _s, omc_System_escapedString(threadData, _str, 0 /* false */));

          _s = omc_IOStream_append(threadData, _s, _OMC_LIT10);
          goto tmp2_done;
        }
        case 1: {
          
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
  return _s;
}

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_appendComment(threadData_t *threadData, modelica_metatype _comment, modelica_integer _elementType, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  _s = omc_NFFlatModelicaUtil_appendCommentString(threadData, _comment, _s);

  _s = omc_NFFlatModelicaUtil_appendCommentAnnotation(threadData, _comment, (modelica_integer)_elementType, _OMC_LIT11, _OMC_LIT12, _s);
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_NFFlatModelicaUtil_appendComment(threadData_t *threadData, modelica_metatype _comment, modelica_metatype _elementType, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_integer tmp1;
  modelica_metatype _s = NULL;
  tmp1 = mmc_unbox_integer(_elementType);
  _s = omc_NFFlatModelicaUtil_appendComment(threadData, _comment, tmp1, __omcQ_24in_5Fs);
  /* skip box _s; IOStream.IOStream */
  return _s;
}

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_appendCommentOpt(threadData_t *threadData, modelica_metatype _comment, modelica_integer _elementType, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  if(isSome(_comment))
  {
    _s = omc_NFFlatModelicaUtil_appendComment(threadData, omc_Util_getOption(threadData, _comment), (modelica_integer)_elementType, _s);
  }
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_NFFlatModelicaUtil_appendCommentOpt(threadData_t *threadData, modelica_metatype _comment, modelica_metatype _elementType, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_integer tmp1;
  modelica_metatype _s = NULL;
  tmp1 = mmc_unbox_integer(_elementType);
  _s = omc_NFFlatModelicaUtil_appendCommentOpt(threadData, _comment, tmp1, __omcQ_24in_5Fs);
  /* skip box _s; IOStream.IOStream */
  return _s;
}

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_appendElementSourceComment(threadData_t *threadData, modelica_metatype _source, modelica_integer _elementType, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  _s = omc_NFFlatModelicaUtil_appendCommentOpt(threadData, omc_ElementSource_getOptComment(threadData, _source), (modelica_integer)_elementType, _s);
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_NFFlatModelicaUtil_appendElementSourceComment(threadData_t *threadData, modelica_metatype _source, modelica_metatype _elementType, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_integer tmp1;
  modelica_metatype _s = NULL;
  tmp1 = mmc_unbox_integer(_elementType);
  _s = omc_NFFlatModelicaUtil_appendElementSourceComment(threadData, _source, tmp1, __omcQ_24in_5Fs);
  /* skip box _s; IOStream.IOStream */
  return _s;
}

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_appendElementSourceCommentAnnotation(threadData_t *threadData, modelica_metatype _source, modelica_integer _elementType, modelica_string _indent, modelica_string _ending, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype _opt_cmt = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  // _opt_cmt has no default value.
  _opt_cmt = omc_ElementSource_getOptComment(threadData, _source);

  if(isSome(_opt_cmt))
  {
    _s = omc_NFFlatModelicaUtil_appendCommentAnnotation(threadData, omc_Util_getOption(threadData, _opt_cmt), (modelica_integer)_elementType, _indent, _ending, _s);
  }
  _return: OMC_LABEL_UNUSED
  return _s;
}
modelica_metatype boxptr_NFFlatModelicaUtil_appendElementSourceCommentAnnotation(threadData_t *threadData, modelica_metatype _source, modelica_metatype _elementType, modelica_metatype _indent, modelica_metatype _ending, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_integer tmp1;
  modelica_metatype _s = NULL;
  tmp1 = mmc_unbox_integer(_elementType);
  _s = omc_NFFlatModelicaUtil_appendElementSourceCommentAnnotation(threadData, _source, tmp1, _indent, _ending, __omcQ_24in_5Fs);
  /* skip box _s; IOStream.IOStream */
  return _s;
}

DLLDirection
modelica_metatype omc_NFFlatModelicaUtil_appendElementSourceCommentString(threadData_t *threadData, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fs)
{
  modelica_metatype _s = NULL;
  modelica_metatype _opt_cmt = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  // _opt_cmt has no default value.
  _opt_cmt = omc_ElementSource_getOptComment(threadData, _source);

  if(isSome(_opt_cmt))
  {
    _s = omc_NFFlatModelicaUtil_appendCommentString(threadData, omc_Util_getOption(threadData, _opt_cmt), _s);
  }
  _return: OMC_LABEL_UNUSED
  return _s;
}

