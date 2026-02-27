#include "omc_simulation_settings.h"
#include "BackendDAEEXT.h"
#include "util/modelica.h"

#include "BackendDAEEXT_includes.h"



modelica_boolean omc_BackendDAEEXT_setAssignment(threadData_t *threadData, modelica_integer _lenass1, modelica_integer _lenass2, modelica_metatype _ass1, modelica_metatype _ass2)
{
  int _lenass1_ext;
  int _lenass2_ext;
  modelica_metatype _ass1_ext;
  modelica_metatype _ass2_ext;
  int _outBoolean_ext;
  modelica_boolean _outBoolean;
  // _outBoolean has no default value.
  _lenass1_ext = (int) _lenass1;
  _lenass2_ext = (int) _lenass2;
  _ass1_ext = (modelica_metatype) _ass1;
  _ass2_ext = (modelica_metatype) _ass2;
  _outBoolean_ext = BackendDAEEXT_setAssignment(_lenass1_ext, _lenass2_ext, _ass1_ext, _ass2_ext);
  _outBoolean = (modelica_boolean)_outBoolean_ext;
  return _outBoolean;
}
modelica_metatype boxptr_BackendDAEEXT_setAssignment(threadData_t *threadData, modelica_metatype _lenass1, modelica_metatype _lenass2, modelica_metatype _ass1, modelica_metatype _ass2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  tmp1 = mmc_unbox_integer(_lenass1);
  tmp2 = mmc_unbox_integer(_lenass2);
  _outBoolean = omc_BackendDAEEXT_setAssignment(threadData, tmp1, tmp2, _ass1, _ass2);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

void omc_BackendDAEEXT_getAssignment(threadData_t *threadData, modelica_metatype _ass1, modelica_metatype _ass2)
{
  modelica_metatype _ass1_ext;
  modelica_metatype _ass2_ext;
  _ass1_ext = (modelica_metatype) _ass1;
  _ass2_ext = (modelica_metatype) _ass2;
  BackendDAEEXT_getAssignment(_ass1_ext, _ass2_ext);
  return;
}

void omc_BackendDAEEXT_matching(threadData_t *threadData, modelica_integer _nv, modelica_integer _ne, modelica_integer _matchingID, modelica_integer _cheapID, modelica_real _relabel_period, modelica_integer _clear_match)
{
  int _nv_ext;
  int _ne_ext;
  int _matchingID_ext;
  int _cheapID_ext;
  double _relabel_period_ext;
  int _clear_match_ext;
  _nv_ext = (int) _nv;
  _ne_ext = (int) _ne;
  _matchingID_ext = (int) _matchingID;
  _cheapID_ext = (int) _cheapID;
  _relabel_period_ext = (double) _relabel_period;
  _clear_match_ext = (int) _clear_match;
  BackendDAEEXT_matching(_nv_ext, _ne_ext, _matchingID_ext, _cheapID_ext, _relabel_period_ext, _clear_match_ext);
  return;
}
void boxptr_BackendDAEEXT_matching(threadData_t *threadData, modelica_metatype _nv, modelica_metatype _ne, modelica_metatype _matchingID, modelica_metatype _cheapID, modelica_metatype _relabel_period, modelica_metatype _clear_match)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_real tmp5;
  modelica_integer tmp6;
  tmp1 = mmc_unbox_integer(_nv);
  tmp2 = mmc_unbox_integer(_ne);
  tmp3 = mmc_unbox_integer(_matchingID);
  tmp4 = mmc_unbox_integer(_cheapID);
  tmp5 = mmc_unbox_real(_relabel_period);
  tmp6 = mmc_unbox_integer(_clear_match);
  omc_BackendDAEEXT_matching(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  return;
}

void omc_BackendDAEEXT_setAdjacencyMatrix(threadData_t *threadData, modelica_integer _nv, modelica_integer _ne, modelica_integer _nz, modelica_metatype _m)
{
  int _nv_ext;
  int _ne_ext;
  int _nz_ext;
  modelica_metatype _m_ext;
  _nv_ext = (int) _nv;
  _ne_ext = (int) _ne;
  _nz_ext = (int) _nz;
  _m_ext = (modelica_metatype) _m;
  BackendDAEEXT_setAdjacencyMatrix(_nv_ext, _ne_ext, _nz_ext, _m_ext);
  return;
}
void boxptr_BackendDAEEXT_setAdjacencyMatrix(threadData_t *threadData, modelica_metatype _nv, modelica_metatype _ne, modelica_metatype _nz, modelica_metatype _m)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  tmp1 = mmc_unbox_integer(_nv);
  tmp2 = mmc_unbox_integer(_ne);
  tmp3 = mmc_unbox_integer(_nz);
  omc_BackendDAEEXT_setAdjacencyMatrix(threadData, tmp1, tmp2, tmp3, _m);
  return;
}

modelica_integer omc_BackendDAEEXT_getNumber(threadData_t *threadData, modelica_integer _inInteger)
{
  int _inInteger_ext;
  int _outInteger_ext;
  modelica_integer _outInteger;
  // _outInteger has no default value.
  _inInteger_ext = (int) _inInteger;
  _outInteger_ext = BackendDAEEXT_getNumber(_inInteger_ext);
  _outInteger = (modelica_integer)_outInteger_ext;
  return _outInteger;
}
modelica_metatype boxptr_BackendDAEEXT_getNumber(threadData_t *threadData, modelica_metatype _inInteger)
{
  modelica_integer tmp1;
  modelica_integer _outInteger;
  modelica_metatype out_outInteger;
  tmp1 = mmc_unbox_integer(_inInteger);
  _outInteger = omc_BackendDAEEXT_getNumber(threadData, tmp1);
  out_outInteger = mmc_mk_icon(_outInteger);
  return out_outInteger;
}

void omc_BackendDAEEXT_setNumber(threadData_t *threadData, modelica_integer _inInteger1, modelica_integer _inInteger2)
{
  int _inInteger1_ext;
  int _inInteger2_ext;
  _inInteger1_ext = (int) _inInteger1;
  _inInteger2_ext = (int) _inInteger2;
  BackendDAEEXT_setNumber(_inInteger1_ext, _inInteger2_ext);
  return;
}
void boxptr_BackendDAEEXT_setNumber(threadData_t *threadData, modelica_metatype _inInteger1, modelica_metatype _inInteger2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_inInteger1);
  tmp2 = mmc_unbox_integer(_inInteger2);
  omc_BackendDAEEXT_setNumber(threadData, tmp1, tmp2);
  return;
}

modelica_integer omc_BackendDAEEXT_getLowLink(threadData_t *threadData, modelica_integer _inInteger)
{
  int _inInteger_ext;
  int _outInteger_ext;
  modelica_integer _outInteger;
  // _outInteger has no default value.
  _inInteger_ext = (int) _inInteger;
  _outInteger_ext = BackendDAEEXT_getLowLink(_inInteger_ext);
  _outInteger = (modelica_integer)_outInteger_ext;
  return _outInteger;
}
modelica_metatype boxptr_BackendDAEEXT_getLowLink(threadData_t *threadData, modelica_metatype _inInteger)
{
  modelica_integer tmp1;
  modelica_integer _outInteger;
  modelica_metatype out_outInteger;
  tmp1 = mmc_unbox_integer(_inInteger);
  _outInteger = omc_BackendDAEEXT_getLowLink(threadData, tmp1);
  out_outInteger = mmc_mk_icon(_outInteger);
  return out_outInteger;
}

void omc_BackendDAEEXT_setLowLink(threadData_t *threadData, modelica_integer _inInteger1, modelica_integer _inInteger2)
{
  int _inInteger1_ext;
  int _inInteger2_ext;
  _inInteger1_ext = (int) _inInteger1;
  _inInteger2_ext = (int) _inInteger2;
  BackendDAEEXT_setLowLink(_inInteger1_ext, _inInteger2_ext);
  return;
}
void boxptr_BackendDAEEXT_setLowLink(threadData_t *threadData, modelica_metatype _inInteger1, modelica_metatype _inInteger2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_inInteger1);
  tmp2 = mmc_unbox_integer(_inInteger2);
  omc_BackendDAEEXT_setLowLink(threadData, tmp1, tmp2);
  return;
}

void omc_BackendDAEEXT_initNumber(threadData_t *threadData, modelica_integer _inInteger)
{
  int _inInteger_ext;
  _inInteger_ext = (int) _inInteger;
  BackendDAEEXT_initNumber(_inInteger_ext);
  return;
}
void boxptr_BackendDAEEXT_initNumber(threadData_t *threadData, modelica_metatype _inInteger)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_inInteger);
  omc_BackendDAEEXT_initNumber(threadData, tmp1);
  return;
}

void omc_BackendDAEEXT_initLowLink(threadData_t *threadData, modelica_integer _inInteger)
{
  int _inInteger_ext;
  _inInteger_ext = (int) _inInteger;
  BackendDAEEXT_initLowLink(_inInteger_ext);
  return;
}
void boxptr_BackendDAEEXT_initLowLink(threadData_t *threadData, modelica_metatype _inInteger)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_inInteger);
  omc_BackendDAEEXT_initLowLink(threadData, tmp1);
  return;
}

modelica_metatype omc_BackendDAEEXT_getMarkedVariables(threadData_t *threadData)
{
  modelica_metatype _outIntegerLst_ext;
  modelica_metatype _outIntegerLst = NULL;
  // _outIntegerLst has no default value.

  _outIntegerLst_ext = BackendDAEEXT_getMarkedVariables();
  _outIntegerLst = (modelica_metatype)_outIntegerLst_ext;
  return _outIntegerLst;
}

void omc_BackendDAEEXT_markDifferentiated(threadData_t *threadData, modelica_integer _inInteger)
{
  int _inInteger_ext;
  _inInteger_ext = (int) _inInteger;
  BackendDAEEXT_markDifferentiated(_inInteger_ext);
  return;
}
void boxptr_BackendDAEEXT_markDifferentiated(threadData_t *threadData, modelica_metatype _inInteger)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_inInteger);
  omc_BackendDAEEXT_markDifferentiated(threadData, tmp1);
  return;
}

void omc_BackendDAEEXT_clearDifferentiated(threadData_t *threadData)
{

  BackendDAEEXT_clearDifferentiated();
  return;
}

modelica_metatype omc_BackendDAEEXT_getDifferentiatedEqns(threadData_t *threadData)
{
  modelica_metatype _outIntegerLst_ext;
  modelica_metatype _outIntegerLst = NULL;
  // _outIntegerLst has no default value.

  _outIntegerLst_ext = BackendDAEEXT_getDifferentiatedEqns();
  _outIntegerLst = (modelica_metatype)_outIntegerLst_ext;
  return _outIntegerLst;
}

modelica_metatype omc_BackendDAEEXT_getMarkedEqns(threadData_t *threadData)
{
  modelica_metatype _outIntegerLst_ext;
  modelica_metatype _outIntegerLst = NULL;
  // _outIntegerLst has no default value.

  _outIntegerLst_ext = BackendDAEEXT_getMarkedEqns();
  _outIntegerLst = (modelica_metatype)_outIntegerLst_ext;
  return _outIntegerLst;
}

modelica_boolean omc_BackendDAEEXT_getVMark(threadData_t *threadData, modelica_integer _inInteger)
{
  int _inInteger_ext;
  int _outBoolean_ext;
  modelica_boolean _outBoolean;
  // _outBoolean has no default value.
  _inInteger_ext = (int) _inInteger;
  _outBoolean_ext = BackendDAEEXT_getVMark(_inInteger_ext);
  _outBoolean = (modelica_boolean)_outBoolean_ext;
  return _outBoolean;
}
modelica_metatype boxptr_BackendDAEEXT_getVMark(threadData_t *threadData, modelica_metatype _inInteger)
{
  modelica_integer tmp1;
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  tmp1 = mmc_unbox_integer(_inInteger);
  _outBoolean = omc_BackendDAEEXT_getVMark(threadData, tmp1);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

void omc_BackendDAEEXT_vMark(threadData_t *threadData, modelica_integer _inInteger)
{
  int _inInteger_ext;
  _inInteger_ext = (int) _inInteger;
  BackendDAEEXT_vMark(_inInteger_ext);
  return;
}
void boxptr_BackendDAEEXT_vMark(threadData_t *threadData, modelica_metatype _inInteger)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_inInteger);
  omc_BackendDAEEXT_vMark(threadData, tmp1);
  return;
}

void omc_BackendDAEEXT_eMark(threadData_t *threadData, modelica_integer _inInteger)
{
  int _inInteger_ext;
  _inInteger_ext = (int) _inInteger;
  BackendDAEEXT_eMark(_inInteger_ext);
  return;
}
void boxptr_BackendDAEEXT_eMark(threadData_t *threadData, modelica_metatype _inInteger)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_inInteger);
  omc_BackendDAEEXT_eMark(threadData, tmp1);
  return;
}

void omc_BackendDAEEXT_initMarks(threadData_t *threadData, modelica_integer _inInteger1, modelica_integer _inInteger2)
{
  int _inInteger1_ext;
  int _inInteger2_ext;
  _inInteger1_ext = (int) _inInteger1;
  _inInteger2_ext = (int) _inInteger2;
  BackendDAEEXT_initMarks(_inInteger1_ext, _inInteger2_ext);
  return;
}
void boxptr_BackendDAEEXT_initMarks(threadData_t *threadData, modelica_metatype _inInteger1, modelica_metatype _inInteger2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_inInteger1);
  tmp2 = mmc_unbox_integer(_inInteger2);
  omc_BackendDAEEXT_initMarks(threadData, tmp1, tmp2);
  return;
}

