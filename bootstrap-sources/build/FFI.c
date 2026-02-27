#include "omc_simulation_settings.h"
#include "FFI.h"
#include "util/modelica.h"

#include "FFI_includes.h"



modelica_metatype omc_FFI_callFunction(threadData_t *threadData, modelica_integer _fnHandle, modelica_metatype _args, modelica_metatype _specs, modelica_metatype _returnType, modelica_metatype *out_outputArgs)
{
  int _fnHandle_ext;
  modelica_metatype _args_ext;
  modelica_metatype _specs_ext;
  modelica_metatype _returnType_ext;
  modelica_metatype _outputArgs_ext;
  modelica_metatype _returnValue_ext;
  modelica_metatype _returnValue = NULL;
  modelica_metatype _outputArgs = NULL;
  // _returnValue has no default value.
  // _outputArgs has no default value.
  _fnHandle_ext = (int) _fnHandle;
  _args_ext = (modelica_metatype) _args;
  _specs_ext = (modelica_metatype) _specs;
  _returnType_ext = (modelica_metatype) _returnType;
  _returnValue_ext = FFI_callFunction(_fnHandle_ext, _args_ext, _specs_ext, _returnType_ext, &_outputArgs_ext);
  _outputArgs = (modelica_metatype)_outputArgs_ext;
  _returnValue = (modelica_metatype)_returnValue_ext;
  if (out_outputArgs) { *out_outputArgs = _outputArgs; }
  return _returnValue;
}
modelica_metatype boxptr_FFI_callFunction(threadData_t *threadData, modelica_metatype _fnHandle, modelica_metatype _args, modelica_metatype _specs, modelica_metatype _returnType, modelica_metatype *out_outputArgs)
{
  modelica_integer tmp1;
  modelica_metatype _returnValue = NULL;
  tmp1 = mmc_unbox_integer(_fnHandle);
  _returnValue = omc_FFI_callFunction(threadData, tmp1, _args, _specs, _returnType, out_outputArgs);
  /* skip box _returnValue; NFExpression */
  /* skip box _outputArgs; list<NFExpression> */
  return _returnValue;
}

