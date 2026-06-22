#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Config.h"
#include "Debug.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "Mutable.h"
#include "NFSCodeCheck.h"
#include "NFSCodeDependency.h"
#include "NFSCodeEnv.h"
#include "NFSCodeFlattenRedeclare.h"
#include "NFSCodeLookup.h"
#include "SCodeDump.h"
#include "SCodeUtil.h"
#include "System.h"
#ifdef __cplusplus
}
#endif
