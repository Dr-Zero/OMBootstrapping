#include "omc_simulation_settings.h"
#include "TotalModelDebug.h"
#define _OMC_LIT0_data "Icons"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,5,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "constructor"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,11,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "destructor"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,10,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#include "util/modelica.h"

#include "TotalModelDebug_includes.h"



DLLDirection
modelica_metatype omc_TotalModelDebug_saveClassDef(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdef, modelica_metatype _used)
{
  modelica_metatype _def = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _def = __omcQ_24in_5Fdef;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _def;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_def), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[2] = omc_TotalModelDebug_saveElements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 2))), _used);
          _def = tmpMeta4;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_def), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[3] = omc_TotalModelDebug_saveClassDef(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 3))), _used);
          _def = tmpMeta5;
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
  return _def;
}

DLLDirection
modelica_metatype omc_TotalModelDebug_saveElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _used, modelica_metatype __omcQ_24in_5Felements)
{
  modelica_metatype _elements = NULL;
  modelica_metatype _elem = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _elements = __omcQ_24in_5Felements;
  _elem = _element;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _elem;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_UnorderedSet_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 2))), _used)) goto tmp3_end;
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_elem), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[7] = omc_TotalModelDebug_saveClassDef(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 7))), _used);
          _elem = tmpMeta6;
          tmpMeta7 = mmc_mk_cons(_elem, _elements);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _elements;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_AbsynUtil_pathContains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_elem), 2))), _OMC_LIT0)) goto tmp3_end;
          tmpMeta1 = _elements;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_element, _elements);
          tmpMeta1 = tmpMeta8;
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
  _elements = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _elements;
}

DLLDirection
modelica_metatype omc_TotalModelDebug_saveElements(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _used)
{
  modelica_metatype _outElements = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outElements = tmpMeta1;
  {
    modelica_metatype _e;
    for (tmpMeta2 = _elements; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _e = MMC_CAR(tmpMeta2);
      _outElements = omc_TotalModelDebug_saveElement(threadData, _e, _used, _outElements);
    }
  }

  _outElements = listReverseInPlace(_outElements);
  _return: OMC_LABEL_UNUSED
  return _outElements;
}

DLLDirection
void omc_TotalModelDebug_analyseAnnotation(threadData_t *threadData, modelica_metatype _ann, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_TotalModelDebug_analyseMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ann), 2))), _used);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseComment(threadData_t *threadData, modelica_metatype _comment, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comment), 2)))))
  {
    omc_TotalModelDebug_analyseAnnotation(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comment), 2)))), _used);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _used, modelica_boolean _includeLast)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cref;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _cref = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_UnorderedSet_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2))), _used);

          omc_TotalModelDebug_analyseSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 3))), _used);

          /* Tail recursive call */
          _cref = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 4)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          if(_includeLast)
          {
            omc_UnorderedSet_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2))), _used);
          }

          omc_TotalModelDebug_analyseSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 3))), _used);
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
void boxptr_TotalModelDebug_analyseCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _used, modelica_metatype _includeLast)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_includeLast);
  omc_TotalModelDebug_analyseCref(threadData, _cref, _used, tmp1);
  return;
}

DLLDirection
modelica_metatype omc_TotalModelDebug_analyseExpTraverse(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype __omcQ_24in_5Fused, modelica_metatype *out_used)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _used = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _used = __omcQ_24in_5Fused;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _used, 1 /* true */);
          goto tmp2_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _used, 1 /* true */);
          goto tmp2_done;
        }
        case 15: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _used, 1 /* true */);
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
  if (out_used) { *out_used = _used; }
  return _exp;
}

DLLDirection
void omc_TotalModelDebug_analyseExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_AbsynUtil_traverseExp(threadData, _exp, boxvar_TotalModelDebug_analyseExpTraverse, _used, NULL);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseExpList(threadData_t *threadData, modelica_metatype _expl, modelica_metatype _used)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _e;
    for (tmpMeta1 = _expl; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      omc_TotalModelDebug_analyseExp(threadData, _e, _used);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseExpOpt(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if(isSome(_exp))
  {
    omc_TotalModelDebug_analyseExp(threadData, omc_Util_getOption(threadData, _exp), _used);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseSubscript(threadData_t *threadData, modelica_metatype _sub, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _sub;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sub), 2))), _used);
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
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseSubscripts(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _used)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _s;
    for (tmpMeta1 = _subs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _s = MMC_CAR(tmpMeta1);
      omc_TotalModelDebug_analyseSubscript(threadData, _s, _used);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseDims(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _used)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _s;
    for (tmpMeta1 = _subs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _s = MMC_CAR(tmpMeta1);
      omc_TotalModelDebug_analyseSubscript(threadData, _s, _used);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseStatement(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _stmt;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _used);

          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _used);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _used);

          omc_TotalModelDebug_analyseStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _used);

          {
            modelica_metatype _b;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _b = MMC_CAR(tmpMeta4);
              omc_TotalModelDebug_analyseExp(threadData, omc_Util_tuple21(threadData, _b), _used);

              omc_TotalModelDebug_analyseStatements(threadData, omc_Util_tuple22(threadData, _b), _used);
            }
          }

          omc_TotalModelDebug_analyseStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 6))), _used);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExpOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _used);

          omc_TotalModelDebug_analyseStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5))), _used);
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExpOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _used);

          omc_TotalModelDebug_analyseStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5))), _used);
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _used);

          omc_TotalModelDebug_analyseStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _used);
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _b = MMC_CAR(tmpMeta6);
              omc_TotalModelDebug_analyseExp(threadData, omc_Util_tuple21(threadData, _b), _used);

              omc_TotalModelDebug_analyseStatements(threadData, omc_Util_tuple22(threadData, _b), _used);
            }
          }

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _used);
          goto tmp2_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _used);

          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _used);

          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 5))), _used);
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _used);
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _used);

          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), _used);
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _used);
          goto tmp2_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _used);
          goto tmp2_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _used);
          goto tmp2_done;
        }
        case 17: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), _used);
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
void omc_TotalModelDebug_analyseStatements(threadData_t *threadData, modelica_metatype _stmts, modelica_metatype _used)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _s;
    for (tmpMeta1 = _stmts; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _s = MMC_CAR(tmpMeta1);
      omc_TotalModelDebug_analyseStatement(threadData, _s, _used);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseAlgorithm(threadData_t *threadData, modelica_metatype _alg, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_TotalModelDebug_analyseStatements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _used);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseAlgorithms(threadData_t *threadData, modelica_metatype _algs, modelica_metatype _used)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _a;
    for (tmpMeta1 = _algs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _a = MMC_CAR(tmpMeta1);
      omc_TotalModelDebug_analyseAlgorithm(threadData, _a, _used);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _used);

          {
            modelica_metatype _b;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _b = MMC_CAR(tmpMeta4);
              omc_TotalModelDebug_analyseEquations(threadData, _b, _used);
            }
          }

          omc_TotalModelDebug_analyseEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _used);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _used);

          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _used);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _used);

          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _used);
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _used, 1 /* true */);

          omc_TotalModelDebug_analyseCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _used, 1 /* true */);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _used);
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExpOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _used);

          omc_TotalModelDebug_analyseEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _used);
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _used);

          omc_TotalModelDebug_analyseEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _used);

          {
            modelica_metatype _b;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _b = MMC_CAR(tmpMeta6);
              omc_TotalModelDebug_analyseExp(threadData, omc_Util_tuple21(threadData, _b), _used);

              omc_TotalModelDebug_analyseEquations(threadData, omc_Util_tuple22(threadData, _b), _used);
            }
          }

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _used);
          goto tmp2_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _used);

          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _used);

          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _used);
          goto tmp2_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _used);
          goto tmp2_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _used);

          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _used);
          goto tmp2_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _used);
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
void omc_TotalModelDebug_analyseEquations(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _used)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _e;
    for (tmpMeta1 = _eqs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      omc_TotalModelDebug_analyseEquation(threadData, _e, _used);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analysePath(threadData_t *threadData, modelica_metatype _path, modelica_metatype _used)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _i;
    for (tmpMeta1 = omc_AbsynUtil_pathToStringList(threadData, _path); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      omc_UnorderedSet_add(threadData, _i, _used);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseTypeSpec(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _ty;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analysePath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))), _used);

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3)))))
          {
            omc_TotalModelDebug_analyseDims(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3)))), _used);
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analysePath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))), _used);

          {
            modelica_metatype _t;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _t = MMC_CAR(tmpMeta5);
              omc_TotalModelDebug_analyseTypeSpec(threadData, _t, _used);
            }
          }

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 4)))))
          {
            omc_TotalModelDebug_analyseDims(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 4)))), _used);
          }
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
void omc_TotalModelDebug_analyseMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _s;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _s = MMC_CAR(tmpMeta4);
              omc_TotalModelDebug_analyseMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_s), 3))), _used);
            }
          }

          omc_TotalModelDebug_analyseExpOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5))), _used);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseElement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))), _used);
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
void omc_TotalModelDebug_analyseConstrainClass(threadData_t *threadData, modelica_metatype _cc, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_TotalModelDebug_analysePath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cc), 2))), _used);

  omc_TotalModelDebug_analyseMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cc), 3))), _used);

  omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cc), 4))), _used);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseReplaceable(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _used)
{
  modelica_metatype _cc = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cc has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _repl;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (optionNone(tmpMeta5)) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          _cc = tmpMeta6;
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseConstrainClass(threadData, _cc, _used);
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
  return;
}

DLLDirection
void omc_TotalModelDebug_analysePrefixes(threadData_t *threadData, modelica_metatype _prefixes, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_TotalModelDebug_analyseReplaceable(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_prefixes), 6))), _used);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseAttributes(threadData_t *threadData, modelica_metatype _attributes, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_TotalModelDebug_analyseDims(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attributes), 2))), _used);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseOperatorRecord(threadData_t *threadData, modelica_metatype _element, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_UnorderedSet_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))), _used);

          {
            modelica_metatype _e;
            for (tmpMeta5 = omc_SCodeUtil_getClassElements(threadData, _element); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _e = MMC_CAR(tmpMeta5);
              omc_TotalModelDebug_analyseOperatorRecord(threadData, _e, _used);
            }
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
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseExternalDecl(threadData_t *threadData, modelica_metatype _extDecl, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_extDecl), 6)))))
  {
    omc_TotalModelDebug_analyseAnnotation(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_extDecl), 6)))), _used);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseClassDef(threadData_t *threadData, modelica_metatype _def, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _def;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseElements(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 2))), _used);

          omc_TotalModelDebug_analyseEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 3))), _used);

          omc_TotalModelDebug_analyseEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 4))), _used);

          omc_TotalModelDebug_analyseAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 5))), _used);

          omc_TotalModelDebug_analyseAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 6))), _used);

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 9)))))
          {
            omc_TotalModelDebug_analyseExternalDecl(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 9)))), _used);
          }
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 2))), _used);

          /* Tail recursive call */
          _def = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 3)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseTypeSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 2))), _used);

          omc_TotalModelDebug_analyseMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 3))), _used);

          omc_TotalModelDebug_analyseAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 4))), _used);
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
void omc_TotalModelDebug_analyseImport(threadData_t *threadData, modelica_metatype _imp, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_TotalModelDebug_analysePath(threadData, omc_AbsynUtil_importPath(threadData, _imp), _used);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _used)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analyseImport(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))), _used);
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analysePath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))), _used);

          omc_TotalModelDebug_analyseMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 4))), _used);
          goto tmp2_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_UnorderedSet_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))), _used)) goto tmp2_end;
          if(omc_SCodeUtil_isOperatorRecord(threadData, _element))
          {
            omc_TotalModelDebug_analyseOperatorRecord(threadData, _element, _used);
          }

          omc_TotalModelDebug_analyseClassDef(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 7))), _used);

          omc_TotalModelDebug_analysePrefixes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 3))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 8))), _used);
          goto tmp2_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_TotalModelDebug_analysePrefixes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 3))), _used);

          omc_TotalModelDebug_analyseAttributes(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 4))), _used);

          omc_TotalModelDebug_analyseTypeSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 5))), _used);

          omc_TotalModelDebug_analyseMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 6))), _used);

          omc_TotalModelDebug_analyseExpOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 8))), _used);

          omc_TotalModelDebug_analyseComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 7))), _used);
          goto tmp2_done;
        }
        case 4: {
          
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
void omc_TotalModelDebug_analyseElements(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _used)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _e;
    for (tmpMeta1 = _elements; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      omc_TotalModelDebug_analyseElement(threadData, _e, _used);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_TotalModelDebug_analyseProgram(threadData_t *threadData, modelica_metatype _program, modelica_metatype _used)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _e;
    for (tmpMeta1 = _program; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      omc_TotalModelDebug_analyseElement(threadData, _e, _used);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_TotalModelDebug_getTotalModel(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fprogram, modelica_metatype _classPath)
{
  modelica_metatype _program = NULL;
  modelica_metatype _used = NULL;
  modelica_integer _prev_size;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _program = __omcQ_24in_5Fprogram;
  // _used has no default value.
  _prev_size = ((modelica_integer) 0);
  _used = omc_UnorderedSet_new(threadData, boxvar_stringHashDjb2, boxvar_stringEq, ((modelica_integer) 13));

  omc_TotalModelDebug_analysePath(threadData, _classPath, _used);

  omc_UnorderedSet_add(threadData, _OMC_LIT1, _used);

  omc_UnorderedSet_add(threadData, _OMC_LIT2, _used);

  while(1)
  {
    if(!(omc_UnorderedSet_size(threadData, _used) != _prev_size)) break;
    _prev_size = omc_UnorderedSet_size(threadData, _used);

    omc_TotalModelDebug_analyseProgram(threadData, _program, _used);
  }

  _program = omc_TotalModelDebug_saveElements(threadData, _program, _used);
  _return: OMC_LABEL_UNUSED
  return _program;
}

