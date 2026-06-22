#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "Error.h"
#include "Flags.h"
#include "GCExt.h"
#include "List.h"
#include "NBAdjacency.h"
#include "NBBackendUtil.h"
#include "NBEquation.h"
#include "NBMatching.h"
#include "NBSorting.h"
#include "NBStrongComponent.h"
#include "NBVariable.h"
#include "NFComponentRef.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
