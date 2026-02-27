#include "omc_simulation_settings.h"
#include "Curl.h"
#include "util/modelica.h"

#include "Curl_includes.h"



modelica_boolean omc_Curl_multiDownload(threadData_t *threadData, modelica_metatype _urlFileList, modelica_integer _maxParallel)
{
  modelica_metatype _urlFileList_ext;
  int _maxParallel_ext;
  int _success_ext;
  modelica_boolean _success;
  // _success has no default value.
  _urlFileList_ext = (modelica_metatype) _urlFileList;
  _maxParallel_ext = (int) _maxParallel;
  _success_ext = om_curl_multi_download(_urlFileList_ext, _maxParallel_ext);
  _success = (modelica_boolean)_success_ext;
  return _success;
}
modelica_metatype boxptr_Curl_multiDownload(threadData_t *threadData, modelica_metatype _urlFileList, modelica_metatype _maxParallel)
{
  modelica_integer tmp1;
  modelica_boolean _success;
  modelica_metatype out_success;
  tmp1 = mmc_unbox_integer(_maxParallel);
  _success = omc_Curl_multiDownload(threadData, _urlFileList, tmp1);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

