#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBAdjacency.h"
#include "NBBackendUtil.h"
#include "NBDifferentiate.h"
#include "NBEquation.h"
#include "NBFunctionAlias.h"
#include "NBInitialization.h"
#include "NBMatching.h"
#include "NBResolveSingularities.h"
#include "NBSlice.h"
#include "NBVariable.h"
#include "NFBackendExtension.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
