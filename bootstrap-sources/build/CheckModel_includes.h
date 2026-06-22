#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "BaseHashSet.h"
#include "CheckModel.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "DAEDump.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "Error.h"
#include "ExecStat.h"
#include "Expression.h"
#include "Flags.h"
#include "HashSet.h"
#include "List.h"
#include "PrefixUtil.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
