#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "DoubleEnded.h"
#include "Error.h"
#include "ExpandableArray.h"
#include "Flags.h"
#include "List.h"
#include "NBBackendUtil.h"
#include "NBCausalize.h"
#include "NBEquation.h"
#include "NBMatching.h"
#include "NBPartition.h"
#include "NBPartitioning.h"
#include "NBSorting.h"
#include "NBStrongComponent.h"
#include "NBVariable.h"
#include "NFCall.h"
#include "NFClockKind.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFType.h"
#include "Pointer.h"
#include "Rational.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
