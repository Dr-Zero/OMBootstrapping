#include "omc_simulation_settings.h"
#include "SimulationResults.h"
#include "util/modelica.h"

#include "SimulationResults_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SimulationResults_readDataset_readDataset__work(threadData_t *threadData, modelica_string _filename, modelica_metatype _vars, modelica_integer _dimsize);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SimulationResults_readDataset_readDataset__work(threadData_t *threadData, modelica_metatype _filename, modelica_metatype _vars, modelica_metatype _dimsize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimulationResults_readDataset_readDataset__work,2,0) {(void*) boxptr_SimulationResults_readDataset_readDataset__work,0}};
#define boxvar_SimulationResults_readDataset_readDataset__work MMC_REFSTRUCTLIT(boxvar_lit_SimulationResults_readDataset_readDataset__work)

modelica_boolean omc_SimulationResults_filterSimulationResults(threadData_t *threadData, modelica_string _inFile, modelica_string _outFile, modelica_metatype _vars, modelica_integer _numberOfIntervals, modelica_boolean _removeDescription, modelica_boolean _hintReadAllVars)
{
  modelica_metatype _vars_ext;
  int _numberOfIntervals_ext;
  int _removeDescription_ext;
  int _hintReadAllVars_ext;
  int _result_ext;
  modelica_boolean _result;
  // _result has no default value.
  _vars_ext = (modelica_metatype) _vars;
  _numberOfIntervals_ext = (int) _numberOfIntervals;
  _removeDescription_ext = (int) _removeDescription;
  _hintReadAllVars_ext = (int) _hintReadAllVars;
  _result_ext = SimulationResults_filterSimulationResults(MMC_STRINGDATA(_inFile), MMC_STRINGDATA(_outFile), _vars_ext, _numberOfIntervals_ext, _removeDescription_ext, _hintReadAllVars_ext);
  _result = (modelica_boolean)_result_ext;
  return _result;
}
modelica_metatype boxptr_SimulationResults_filterSimulationResults(threadData_t *threadData, modelica_metatype _inFile, modelica_metatype _outFile, modelica_metatype _vars, modelica_metatype _numberOfIntervals, modelica_metatype _removeDescription, modelica_metatype _hintReadAllVars)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_boolean _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_integer(_numberOfIntervals);
  tmp2 = mmc_unbox_integer(_removeDescription);
  tmp3 = mmc_unbox_integer(_hintReadAllVars);
  _result = omc_SimulationResults_filterSimulationResults(threadData, _inFile, _outFile, _vars, tmp1, tmp2, tmp3);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

modelica_string omc_SimulationResults_diffSimulationResultsHtml(threadData_t *threadData, modelica_boolean _runningTestsuite, modelica_string _filename, modelica_string _reffilename, modelica_real _refTol, modelica_real _relTolDiffMaxMin, modelica_real _rangeDelta, modelica_string _var)
{
  int _runningTestsuite_ext;
  double _refTol_ext;
  double _relTolDiffMaxMin_ext;
  double _rangeDelta_ext;
  const char* _html_ext;
  modelica_string _html = NULL;
  // _html has no default value.
  _runningTestsuite_ext = (int) _runningTestsuite;
  _refTol_ext = (double) _refTol;
  _relTolDiffMaxMin_ext = (double) _relTolDiffMaxMin;
  _rangeDelta_ext = (double) _rangeDelta;
  _html_ext = SimulationResults_diffSimulationResultsHtml(_runningTestsuite_ext, MMC_STRINGDATA(_var), MMC_STRINGDATA(_filename), MMC_STRINGDATA(_reffilename), _refTol_ext, _relTolDiffMaxMin_ext, _rangeDelta_ext);
  _html = (modelica_string)mmc_mk_scon(_html_ext);
  return _html;
}
modelica_metatype boxptr_SimulationResults_diffSimulationResultsHtml(threadData_t *threadData, modelica_metatype _runningTestsuite, modelica_metatype _filename, modelica_metatype _reffilename, modelica_metatype _refTol, modelica_metatype _relTolDiffMaxMin, modelica_metatype _rangeDelta, modelica_metatype _var)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_string _html = NULL;
  tmp1 = mmc_unbox_integer(_runningTestsuite);
  tmp2 = mmc_unbox_real(_refTol);
  tmp3 = mmc_unbox_real(_relTolDiffMaxMin);
  tmp4 = mmc_unbox_real(_rangeDelta);
  _html = omc_SimulationResults_diffSimulationResultsHtml(threadData, tmp1, _filename, _reffilename, tmp2, tmp3, tmp4, _var);
  /* skip box _html; String */
  return _html;
}

modelica_boolean omc_SimulationResults_diffSimulationResults(threadData_t *threadData, modelica_boolean _runningTestsuite, modelica_string _filename, modelica_string _reffilename, modelica_string _prefix, modelica_real _refTol, modelica_real _relTolDiffMaxMin, modelica_real _rangeDelta, modelica_metatype _vars, modelica_boolean _keepEqualResults, modelica_metatype *out_res)
{
  int _runningTestsuite_ext;
  double _refTol_ext;
  double _relTolDiffMaxMin_ext;
  double _rangeDelta_ext;
  modelica_metatype _vars_ext;
  int _keepEqualResults_ext;
  int _success_ext;
  modelica_metatype _res_ext;
  modelica_boolean _success;
  modelica_metatype _res = NULL;
  // _success has no default value.
  // _res has no default value.
  _runningTestsuite_ext = (int) _runningTestsuite;
  _refTol_ext = (double) _refTol;
  _relTolDiffMaxMin_ext = (double) _relTolDiffMaxMin;
  _rangeDelta_ext = (double) _rangeDelta;
  _vars_ext = (modelica_metatype) _vars;
  _keepEqualResults_ext = (int) _keepEqualResults;
  _res_ext = SimulationResults_diffSimulationResults(_runningTestsuite_ext, MMC_STRINGDATA(_filename), MMC_STRINGDATA(_reffilename), MMC_STRINGDATA(_prefix), _refTol_ext, _relTolDiffMaxMin_ext, _rangeDelta_ext, _vars_ext, _keepEqualResults_ext, &_success_ext);
  _success = (modelica_boolean)_success_ext;
  _res = (modelica_metatype)_res_ext;
  if (out_res) { *out_res = _res; }
  return _success;
}
modelica_metatype boxptr_SimulationResults_diffSimulationResults(threadData_t *threadData, modelica_metatype _runningTestsuite, modelica_metatype _filename, modelica_metatype _reffilename, modelica_metatype _prefix, modelica_metatype _refTol, modelica_metatype _relTolDiffMaxMin, modelica_metatype _rangeDelta, modelica_metatype _vars, modelica_metatype _keepEqualResults, modelica_metatype *out_res)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  modelica_boolean _success;
  modelica_metatype out_success;
  tmp1 = mmc_unbox_integer(_runningTestsuite);
  tmp2 = mmc_unbox_real(_refTol);
  tmp3 = mmc_unbox_real(_relTolDiffMaxMin);
  tmp4 = mmc_unbox_real(_rangeDelta);
  tmp5 = mmc_unbox_integer(_keepEqualResults);
  _success = omc_SimulationResults_diffSimulationResults(threadData, tmp1, _filename, _reffilename, _prefix, tmp2, tmp3, tmp4, _vars, tmp5, out_res);
  out_success = mmc_mk_icon(_success);
  /* skip box _res; list<String> */
  return out_success;
}

modelica_real omc_SimulationResults_deltaSimulationResults(threadData_t *threadData, modelica_string _filename, modelica_string _reffilename, modelica_string _method, modelica_metatype _vars)
{
  modelica_metatype _vars_ext;
  double _res_ext;
  modelica_real _res;
  // _res has no default value.
  _vars_ext = (modelica_metatype) _vars;
  _res_ext = SimulationResults_deltaSimulationResults(MMC_STRINGDATA(_filename), MMC_STRINGDATA(_reffilename), MMC_STRINGDATA(_method), _vars_ext);
  _res = (modelica_real)_res_ext;
  return _res;
}
modelica_metatype boxptr_SimulationResults_deltaSimulationResults(threadData_t *threadData, modelica_metatype _filename, modelica_metatype _reffilename, modelica_metatype _method, modelica_metatype _vars)
{
  modelica_real _res;
  modelica_metatype out_res;
  _res = omc_SimulationResults_deltaSimulationResults(threadData, _filename, _reffilename, _method, _vars);
  out_res = mmc_mk_rcon(_res);
  return out_res;
}

modelica_metatype omc_SimulationResults_cmpSimulationResults(threadData_t *threadData, modelica_boolean _runningTestsuite, modelica_string _filename, modelica_string _reffilename, modelica_string _logfilename, modelica_real _refTol, modelica_real _absTol, modelica_metatype _vars)
{
  int _runningTestsuite_ext;
  double _refTol_ext;
  double _absTol_ext;
  modelica_metatype _vars_ext;
  modelica_metatype _res_ext;
  modelica_metatype _res = NULL;
  // _res has no default value.
  _runningTestsuite_ext = (int) _runningTestsuite;
  _refTol_ext = (double) _refTol;
  _absTol_ext = (double) _absTol;
  _vars_ext = (modelica_metatype) _vars;
  _res_ext = SimulationResults_cmpSimulationResults(_runningTestsuite_ext, MMC_STRINGDATA(_filename), MMC_STRINGDATA(_reffilename), MMC_STRINGDATA(_logfilename), _refTol_ext, _absTol_ext, _vars_ext);
  _res = (modelica_metatype)_res_ext;
  return _res;
}
modelica_metatype boxptr_SimulationResults_cmpSimulationResults(threadData_t *threadData, modelica_metatype _runningTestsuite, modelica_metatype _filename, modelica_metatype _reffilename, modelica_metatype _logfilename, modelica_metatype _refTol, modelica_metatype _absTol, modelica_metatype _vars)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_metatype _res = NULL;
  tmp1 = mmc_unbox_integer(_runningTestsuite);
  tmp2 = mmc_unbox_real(_refTol);
  tmp3 = mmc_unbox_real(_absTol);
  _res = omc_SimulationResults_cmpSimulationResults(threadData, tmp1, _filename, _reffilename, _logfilename, tmp2, tmp3, _vars);
  /* skip box _res; list<String> */
  return _res;
}

void omc_SimulationResults_close(threadData_t *threadData)
{

  SimulationResults_close();
  return;
}

modelica_integer omc_SimulationResults_readSimulationResultSize(threadData_t *threadData, modelica_string _filename)
{
  int _size_ext;
  modelica_integer _size;
  // _size has no default value.

  _size_ext = SimulationResults_readSimulationResultSize(MMC_STRINGDATA(_filename));
  _size = (modelica_integer)_size_ext;
  return _size;
}
modelica_metatype boxptr_SimulationResults_readSimulationResultSize(threadData_t *threadData, modelica_metatype _filename)
{
  modelica_integer _size;
  modelica_metatype out_size;
  _size = omc_SimulationResults_readSimulationResultSize(threadData, _filename);
  out_size = mmc_mk_icon(_size);
  return out_size;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SimulationResults_readDataset_readDataset__work(threadData_t *threadData, modelica_string _filename, modelica_metatype _vars, modelica_integer _dimsize)
{
  modelica_metatype _vars_ext;
  int _dimsize_ext;
  modelica_metatype _outMatrix_ext;
  modelica_metatype _outMatrix = NULL;
  // _outMatrix has no default value.
  _vars_ext = (modelica_metatype) _vars;
  _dimsize_ext = (int) _dimsize;
  _outMatrix_ext = SimulationResults_readDataset(MMC_STRINGDATA(_filename), _vars_ext, _dimsize_ext);
  _outMatrix = (modelica_metatype)_outMatrix_ext;
  return _outMatrix;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SimulationResults_readDataset_readDataset__work(threadData_t *threadData, modelica_metatype _filename, modelica_metatype _vars, modelica_metatype _dimsize)
{
  modelica_integer tmp1;
  modelica_metatype _outMatrix = NULL;
  tmp1 = mmc_unbox_integer(_dimsize);
  _outMatrix = omc_SimulationResults_readDataset_readDataset__work(threadData, _filename, _vars, tmp1);
  /* skip box _outMatrix; list<list<#Real>> */
  return _outMatrix;
}

DLLDirection
modelica_metatype omc_SimulationResults_readDataset(threadData_t *threadData, modelica_string _filename, modelica_metatype _vars, modelica_integer _dimsize)
{
  modelica_metatype _val = NULL;
  modelica_metatype _rvals = NULL;
  modelica_metatype _vals = NULL;
  modelica_metatype _rows = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _val has no default value.
  // _rvals has no default value.
  // _vals has no default value.
  // _rows has no default value.
  _rvals = omc_SimulationResults_readDataset_readDataset__work(threadData, _filename, _vars, _dimsize);

  _vals = omc_List_mapListReverse(threadData, _rvals, boxvar_ValuesUtil_makeReal);

  _rows = omc_List_mapReverse(threadData, _vals, boxvar_ValuesUtil_makeArray);

  _val = omc_ValuesUtil_makeArray(threadData, _rows);
  _return: OMC_LABEL_UNUSED
  return _val;
}
modelica_metatype boxptr_SimulationResults_readDataset(threadData_t *threadData, modelica_metatype _filename, modelica_metatype _vars, modelica_metatype _dimsize)
{
  modelica_integer tmp1;
  modelica_metatype _val = NULL;
  tmp1 = mmc_unbox_integer(_dimsize);
  _val = omc_SimulationResults_readDataset(threadData, _filename, _vars, tmp1);
  /* skip box _val; Values.Value */
  return _val;
}

modelica_metatype omc_SimulationResults_readVariables(threadData_t *threadData, modelica_string _filename, modelica_boolean _readParameters, modelica_boolean _openmodelicaStyle)
{
  int _readParameters_ext;
  int _openmodelicaStyle_ext;
  modelica_metatype _vars_ext;
  modelica_metatype _vars = NULL;
  // _vars has no default value.
  _readParameters_ext = (int) _readParameters;
  _openmodelicaStyle_ext = (int) _openmodelicaStyle;
  _vars_ext = SimulationResults_readVariables(MMC_STRINGDATA(_filename), _readParameters_ext, _openmodelicaStyle_ext);
  _vars = (modelica_metatype)_vars_ext;
  return _vars;
}
modelica_metatype boxptr_SimulationResults_readVariables(threadData_t *threadData, modelica_metatype _filename, modelica_metatype _readParameters, modelica_metatype _openmodelicaStyle)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _vars = NULL;
  tmp1 = mmc_unbox_integer(_readParameters);
  tmp2 = mmc_unbox_integer(_openmodelicaStyle);
  _vars = omc_SimulationResults_readVariables(threadData, _filename, tmp1, tmp2);
  /* skip box _vars; list<String> */
  return _vars;
}

modelica_real omc_SimulationResults_val(threadData_t *threadData, modelica_string _filename, modelica_string _varname, modelica_real _timeStamp)
{
  double _timeStamp_ext;
  double _val_ext;
  modelica_real _val;
  // _val has no default value.
  _timeStamp_ext = (double) _timeStamp;
  _val_ext = SimulationResults_val(MMC_STRINGDATA(_filename), MMC_STRINGDATA(_varname), _timeStamp_ext);
  _val = (modelica_real)_val_ext;
  return _val;
}
modelica_metatype boxptr_SimulationResults_val(threadData_t *threadData, modelica_metatype _filename, modelica_metatype _varname, modelica_metatype _timeStamp)
{
  modelica_real tmp1;
  modelica_real _val;
  modelica_metatype out_val;
  tmp1 = mmc_unbox_real(_timeStamp);
  _val = omc_SimulationResults_val(threadData, _filename, _varname, tmp1);
  out_val = mmc_mk_rcon(_val);
  return out_val;
}

