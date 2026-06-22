#include "omc_simulation_settings.h"
#include "NFCallAttributes.h"
#include "util/modelica.h"

#include "NFCallAttributes_includes.h"



DLLDirection
modelica_metatype omc_NFCallAttributes_toDAE(threadData_t *threadData, modelica_metatype _attr, modelica_metatype _returnType)
{
  modelica_metatype _fattr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fattr has no default value.
  tmpMeta1 = mmc_mk_box9(3, &DAE_CallAttributes_CALL__ATTR__desc, omc_NFType_toDAE(threadData, _returnType, 1 /* true */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 7))), mmc_mk_integer(1));
  _fattr = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _fattr;
}

