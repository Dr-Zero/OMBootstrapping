#include "omc_simulation_settings.h"
#include "TaskGraphResults.h"
#include "util/modelica.h"

#include "TaskGraphResults_includes.h"



modelica_metatype omc_TaskGraphResults_checkCodeGraph(threadData_t *threadData, modelica_string _graphfile, modelica_string _codefile)
{
  modelica_metatype _res_ext;
  modelica_metatype _res = NULL;
  // _res has no default value.

  _res_ext = TaskGraphResults_checkCodeGraph(MMC_STRINGDATA(_graphfile), MMC_STRINGDATA(_codefile));
  _res = (modelica_metatype)_res_ext;
  return _res;
}

modelica_metatype omc_TaskGraphResults_checkTaskGraph(threadData_t *threadData, modelica_string _filename, modelica_string _reffilename)
{
  modelica_metatype _res_ext;
  modelica_metatype _res = NULL;
  // _res has no default value.

  _res_ext = TaskGraphResults_checkTaskGraph(MMC_STRINGDATA(_filename), MMC_STRINGDATA(_reffilename));
  _res = (modelica_metatype)_res_ext;
  return _res;
}

