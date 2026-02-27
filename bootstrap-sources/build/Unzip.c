#include "omc_simulation_settings.h"
#include "Unzip.h"
#include "util/modelica.h"

#include "Unzip_includes.h"



modelica_boolean omc_Unzip_unzipPath(threadData_t *threadData, modelica_string _fileName, modelica_string _pathToExtract, modelica_string _destinationPath)
{
  int _success_ext;
  modelica_boolean _success;
  // _success has no default value.

  _success_ext = om_unzip(MMC_STRINGDATA(_fileName), MMC_STRINGDATA(_pathToExtract), MMC_STRINGDATA(_destinationPath));
  _success = (modelica_boolean)_success_ext;
  return _success;
}
modelica_metatype boxptr_Unzip_unzipPath(threadData_t *threadData, modelica_metatype _fileName, modelica_metatype _pathToExtract, modelica_metatype _destinationPath)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_Unzip_unzipPath(threadData, _fileName, _pathToExtract, _destinationPath);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

