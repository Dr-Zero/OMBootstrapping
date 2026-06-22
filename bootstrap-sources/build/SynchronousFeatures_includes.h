#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "BackendDAEOptimize.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "DAEUtil.h"
#include "Error.h"
#include "Expression.h"
#include "Flags.h"
#include "HashTable.h"
#include "List.h"
#include "MMath.h"
#include "StringUtil.h"
#include "SynchronousFeatures.h"
#include "Types.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
