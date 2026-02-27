#include "omc_simulation_settings.h"
#include "HpcOmSchedulerExt.h"
#include "util/modelica.h"

#include "HpcOmSchedulerExt_includes.h"



modelica_metatype omc_HpcOmSchedulerExt_schedulehMetis(threadData_t *threadData, modelica_metatype _vwgts, modelica_metatype _eptr, modelica_metatype _eint, modelica_metatype _hewgts, modelica_integer _nparts)
{
  modelica_metatype _vwgts_ext;
  modelica_metatype _eptr_ext;
  modelica_metatype _eint_ext;
  modelica_metatype _hewgts_ext;
  int _nparts_ext;
  modelica_metatype _res_ext;
  modelica_metatype _res = NULL;
  // _res has no default value.
  _vwgts_ext = (modelica_metatype) _vwgts;
  _eptr_ext = (modelica_metatype) _eptr;
  _eint_ext = (modelica_metatype) _eint;
  _hewgts_ext = (modelica_metatype) _hewgts;
  _nparts_ext = (int) _nparts;
  _res_ext = HpcOmSchedulerExt_schedulehMetis(_vwgts_ext, _eptr_ext, _eint_ext, _hewgts_ext, _nparts_ext);
  _res = (modelica_metatype)_res_ext;
  return _res;
}
modelica_metatype boxptr_HpcOmSchedulerExt_schedulehMetis(threadData_t *threadData, modelica_metatype _vwgts, modelica_metatype _eptr, modelica_metatype _eint, modelica_metatype _hewgts, modelica_metatype _nparts)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = mmc_unbox_integer(_nparts);
  _res = omc_HpcOmSchedulerExt_schedulehMetis(threadData, _vwgts, _eptr, _eint, _hewgts, tmp1);
  /* skip box _res; list<#Integer> */
  return _res;
}

modelica_metatype omc_HpcOmSchedulerExt_scheduleMetis(threadData_t *threadData, modelica_metatype _xadj, modelica_metatype _adjncy, modelica_metatype _vwgt, modelica_metatype _adjwgt, modelica_integer _nparts)
{
  modelica_metatype _xadj_ext;
  modelica_metatype _adjncy_ext;
  modelica_metatype _vwgt_ext;
  modelica_metatype _adjwgt_ext;
  int _nparts_ext;
  modelica_metatype _res_ext;
  modelica_metatype _res = NULL;
  // _res has no default value.
  _xadj_ext = (modelica_metatype) _xadj;
  _adjncy_ext = (modelica_metatype) _adjncy;
  _vwgt_ext = (modelica_metatype) _vwgt;
  _adjwgt_ext = (modelica_metatype) _adjwgt;
  _nparts_ext = (int) _nparts;
  _res_ext = HpcOmSchedulerExt_scheduleMetis(_xadj_ext, _adjncy_ext, _vwgt_ext, _adjwgt_ext, _nparts_ext);
  _res = (modelica_metatype)_res_ext;
  return _res;
}
modelica_metatype boxptr_HpcOmSchedulerExt_scheduleMetis(threadData_t *threadData, modelica_metatype _xadj, modelica_metatype _adjncy, modelica_metatype _vwgt, modelica_metatype _adjwgt, modelica_metatype _nparts)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = mmc_unbox_integer(_nparts);
  _res = omc_HpcOmSchedulerExt_scheduleMetis(threadData, _xadj, _adjncy, _vwgt, _adjwgt, tmp1);
  /* skip box _res; list<#Integer> */
  return _res;
}

modelica_metatype omc_HpcOmSchedulerExt_readScheduleFromGraphMl(threadData_t *threadData, modelica_string _filename)
{
  modelica_metatype _res_ext;
  modelica_metatype _res = NULL;
  // _res has no default value.

  _res_ext = HpcOmSchedulerExt_readScheduleFromGraphMl(MMC_STRINGDATA(_filename));
  _res = (modelica_metatype)_res_ext;
  return _res;
}

