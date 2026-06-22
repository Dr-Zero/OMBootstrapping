#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "BackendDAEEXT.h"
#include "Error.h"
#include "ExpandableArray.h"
#include "GCExt.h"
#include "List.h"
#include "NBAdjacency.h"
#include "NBBackendUtil.h"
#include "NBEquation.h"
#include "NBMatching.h"
#include "NBPartition.h"
#include "NBResolveSingularities.h"
#include "NBSlice.h"
#include "NBVariable.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
