#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBASSC.h"
#include "NBAdjacency.h"
#include "NBCausalize.h"
#include "NBEquation.h"
#include "NBMatching.h"
#include "NBPartition.h"
#include "NBSorting.h"
#include "NBStrongComponent.h"
#include "NBVariable.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFType.h"
#include "NFTypeCheck.h"
#include "NFVariable.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
