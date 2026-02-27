#include "omc_simulation_settings.h"
#include "FMIExt.h"
#include "util/modelica.h"

#include "FMIExt_includes.h"



void omc_FMIExt_releaseFMIImport(threadData_t *threadData, modelica_metatype _inFMIModelVariablesInstance, modelica_metatype _inFMIInstance, modelica_metatype _inFMIContext, modelica_string _inFMIVersion)
{
  modelica_metatype _inFMIModelVariablesInstance_ext;
  modelica_metatype _inFMIInstance_ext;
  modelica_metatype _inFMIContext_ext;
  _inFMIModelVariablesInstance_ext = (modelica_metatype) _inFMIModelVariablesInstance;
  _inFMIInstance_ext = (modelica_metatype) _inFMIInstance;
  _inFMIContext_ext = (modelica_metatype) _inFMIContext;
  FMIImpl__releaseFMIImport(_inFMIModelVariablesInstance_ext, _inFMIInstance_ext, _inFMIContext_ext, MMC_STRINGDATA(_inFMIVersion));
  return;
}

modelica_boolean omc_FMIExt_initializeFMIImport(threadData_t *threadData, modelica_string _inFileName, modelica_string _inWorkingDirectory, modelica_integer _inFMILogLevel, modelica_boolean _inInputConnectors, modelica_boolean _inOutputConnectors, modelica_boolean _inIsModelDescriptionImport, modelica_metatype *out_outFMIContext, modelica_metatype *out_outFMIInstance, modelica_metatype *out_outFMIInfo, modelica_metatype *out_outTypeDefinitionsList, modelica_metatype *out_outExperimentAnnotation, modelica_metatype *out_outModelVariablesInstance, modelica_metatype *out_outModelVariablesList)
{
  int _inFMILogLevel_ext;
  int _inInputConnectors_ext;
  int _inOutputConnectors_ext;
  int _inIsModelDescriptionImport_ext;
  modelica_metatype _outFMIContext_ext;
  modelica_metatype _outFMIInstance_ext;
  modelica_metatype _outFMIInfo_ext;
  modelica_metatype _outTypeDefinitionsList_ext;
  modelica_metatype _outExperimentAnnotation_ext;
  modelica_metatype _outModelVariablesInstance_ext;
  modelica_metatype _outModelVariablesList_ext;
  int _result_ext;
  modelica_boolean _result;
  modelica_metatype _outFMIContext = NULL;
  modelica_metatype _outFMIInstance = NULL;
  modelica_metatype _outFMIInfo = NULL;
  modelica_metatype _outTypeDefinitionsList = NULL;
  modelica_metatype _outExperimentAnnotation = NULL;
  modelica_metatype _outModelVariablesInstance = NULL;
  modelica_metatype _outModelVariablesList = NULL;
  // _result has no default value.
  // _outFMIContext has no default value.
  // _outFMIInstance has no default value.
  // _outFMIInfo has no default value.
  // _outTypeDefinitionsList has no default value.
  // _outExperimentAnnotation has no default value.
  // _outModelVariablesInstance has no default value.
  // _outModelVariablesList has no default value.
  _inFMILogLevel_ext = (int) _inFMILogLevel;
  _inInputConnectors_ext = (int) _inInputConnectors;
  _inOutputConnectors_ext = (int) _inOutputConnectors;
  _inIsModelDescriptionImport_ext = (int) _inIsModelDescriptionImport;
  _result_ext = FMIImpl__initializeFMIImport(MMC_STRINGDATA(_inFileName), MMC_STRINGDATA(_inWorkingDirectory), _inFMILogLevel_ext, _inInputConnectors_ext, _inOutputConnectors_ext, _inIsModelDescriptionImport_ext, &_outFMIContext_ext, &_outFMIInstance_ext, &_outFMIInfo_ext, &_outTypeDefinitionsList_ext, &_outExperimentAnnotation_ext, &_outModelVariablesInstance_ext, &_outModelVariablesList_ext);
  _outFMIContext = (modelica_metatype)_outFMIContext_ext;
  _outFMIInstance = (modelica_metatype)_outFMIInstance_ext;
  _outFMIInfo = (modelica_metatype)_outFMIInfo_ext;
  _outTypeDefinitionsList = (modelica_metatype)_outTypeDefinitionsList_ext;
  _outExperimentAnnotation = (modelica_metatype)_outExperimentAnnotation_ext;
  _outModelVariablesInstance = (modelica_metatype)_outModelVariablesInstance_ext;
  _outModelVariablesList = (modelica_metatype)_outModelVariablesList_ext;
  _result = (modelica_boolean)_result_ext;
  if (out_outFMIContext) { *out_outFMIContext = _outFMIContext; }
  if (out_outFMIInstance) { *out_outFMIInstance = _outFMIInstance; }
  if (out_outFMIInfo) { *out_outFMIInfo = _outFMIInfo; }
  if (out_outTypeDefinitionsList) { *out_outTypeDefinitionsList = _outTypeDefinitionsList; }
  if (out_outExperimentAnnotation) { *out_outExperimentAnnotation = _outExperimentAnnotation; }
  if (out_outModelVariablesInstance) { *out_outModelVariablesInstance = _outModelVariablesInstance; }
  if (out_outModelVariablesList) { *out_outModelVariablesList = _outModelVariablesList; }
  return _result;
}
modelica_metatype boxptr_FMIExt_initializeFMIImport(threadData_t *threadData, modelica_metatype _inFileName, modelica_metatype _inWorkingDirectory, modelica_metatype _inFMILogLevel, modelica_metatype _inInputConnectors, modelica_metatype _inOutputConnectors, modelica_metatype _inIsModelDescriptionImport, modelica_metatype *out_outFMIContext, modelica_metatype *out_outFMIInstance, modelica_metatype *out_outFMIInfo, modelica_metatype *out_outTypeDefinitionsList, modelica_metatype *out_outExperimentAnnotation, modelica_metatype *out_outModelVariablesInstance, modelica_metatype *out_outModelVariablesList)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_boolean _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_integer(_inFMILogLevel);
  tmp2 = mmc_unbox_integer(_inInputConnectors);
  tmp3 = mmc_unbox_integer(_inOutputConnectors);
  tmp4 = mmc_unbox_integer(_inIsModelDescriptionImport);
  _result = omc_FMIExt_initializeFMIImport(threadData, _inFileName, _inWorkingDirectory, tmp1, tmp2, tmp3, tmp4, out_outFMIContext, out_outFMIInstance, out_outFMIInfo, out_outTypeDefinitionsList, out_outExperimentAnnotation, out_outModelVariablesInstance, out_outModelVariablesList);
  out_result = mmc_mk_icon(_result);
  /* skip box _outFMIContext; Option<#Integer> */
  /* skip box _outFMIInstance; Option<#Integer> */
  /* skip box _outFMIInfo; FMI.Info */
  /* skip box _outTypeDefinitionsList; list<FMI.TypeDefinitions> */
  /* skip box _outExperimentAnnotation; FMI.ExperimentAnnotation */
  /* skip box _outModelVariablesInstance; Option<#Integer> */
  /* skip box _outModelVariablesList; list<FMI.ModelVariables> */
  return out_result;
}

