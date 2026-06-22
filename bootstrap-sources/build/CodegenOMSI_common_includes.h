#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "CodegenCFunctions.h"
#include "CodegenFMU.h"
#include "CodegenOMSIC_Equations.h"
#include "CodegenOMSI_common.h"
#include "CodegenUtil.h"
#include "CodegenUtilSimulation.h"
#include "List.h"
#include "SimCodeUtil.h"
#include "System.h"
#include "Tpl.h"
#ifdef __cplusplus
}
#endif
