#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "BackendDAEOptimize.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "CheckModel.h"
#include "ComponentReference.h"
#include "Config.h"
#include "DAEMode.h"
#include "Error.h"
#include "ErrorExt.h"
#include "ExecStat.h"
#include "ExpandableArray.h"
#include "Expression.h"
#include "ExpressionSolve.h"
#include "Flags.h"
#include "FlagsUtil.h"
#include "Initialization.h"
#include "List.h"
#include "Matching.h"
#include "StackOverflow.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
