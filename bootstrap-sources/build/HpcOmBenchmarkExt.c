#include "omc_simulation_settings.h"
#include "HpcOmBenchmarkExt.h"
#include "util/modelica.h"

#include "HpcOmBenchmarkExt_includes.h"



modelica_metatype omc_HpcOmBenchmarkExt_readCalcTimesFromJson(threadData_t *threadData, modelica_string _fileName)
{
  modelica_metatype _requiredTime_ext;
  modelica_metatype _requiredTime = NULL;
  // _requiredTime has no default value.

  _requiredTime_ext = HpcOmBenchmarkExt_readCalcTimesFromJson(MMC_STRINGDATA(_fileName));
  _requiredTime = (modelica_metatype)_requiredTime_ext;
  return _requiredTime;
}

modelica_metatype omc_HpcOmBenchmarkExt_readCalcTimesFromXml(threadData_t *threadData, modelica_string _fileName)
{
  modelica_metatype _requiredTime_ext;
  modelica_metatype _requiredTime = NULL;
  // _requiredTime has no default value.

  _requiredTime_ext = HpcOmBenchmarkExt_readCalcTimesFromXml(MMC_STRINGDATA(_fileName));
  _requiredTime = (modelica_metatype)_requiredTime_ext;
  return _requiredTime;
}

modelica_metatype omc_HpcOmBenchmarkExt_requiredTimeForOp(threadData_t *threadData)
{
  modelica_metatype _requiredTime_ext;
  modelica_metatype _requiredTime = NULL;
  // _requiredTime has no default value.

  _requiredTime_ext = HpcOmBenchmarkExt_requiredTimeForOp();
  _requiredTime = (modelica_metatype)_requiredTime_ext;
  return _requiredTime;
}

modelica_metatype omc_HpcOmBenchmarkExt_requiredTimeForComm(threadData_t *threadData)
{
  modelica_metatype _requiredTime_ext;
  modelica_metatype _requiredTime = NULL;
  // _requiredTime has no default value.

  _requiredTime_ext = HpcOmBenchmarkExt_requiredTimeForComm();
  _requiredTime = (modelica_metatype)_requiredTime_ext;
  return _requiredTime;
}

