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
#include "NFEnvExtends.h"
#include "NFSCodeEnv.h"
#include "NFSCodeFlattenImports.h"
#include "NFSCodeFlattenRedeclare.h"
#include "NFSCodeLookup.h"
#ifdef __cplusplus
}
#endif
