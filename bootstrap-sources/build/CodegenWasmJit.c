#include "omc_simulation_settings.h"
#include "CodegenWasmJit.h"
#include "util/modelica.h"

#include "CodegenWasmJit_includes.h"



DLLDirection
void omc_CodegenWasmJit_finishCompile(threadData_t *threadData, modelica_string _fileNamePrefix)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_integer omc_CodegenWasmJit_runSimulation(threadData_t *threadData, modelica_string _fileNamePrefix, modelica_string _resultFile, modelica_string _simflags)
{
  modelica_integer _status;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _status has no default value.
  _status = ((modelica_integer) 0);
  _return: OMC_LABEL_UNUSED
  return _status;
}
modelica_metatype boxptr_CodegenWasmJit_runSimulation(threadData_t *threadData, modelica_metatype _fileNamePrefix, modelica_metatype _resultFile, modelica_metatype _simflags)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_CodegenWasmJit_runSimulation(threadData, _fileNamePrefix, _resultFile, _simflags);
  out_status = mmc_mk_icon(_status);
  return out_status;
}

DLLDirection
void omc_CodegenWasmJit_translateModel(threadData_t *threadData, modelica_metatype _simCode)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _return: OMC_LABEL_UNUSED
  return;
}

