#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Dump.h"
#include "Error.h"
#include "List.h"
#include "NFBackendExtension.h"
#include "NFBinding.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFExpression.h"
#include "NFExpressionIterator.h"
#include "NFFunction.h"
#include "NFInstNode.h"
#include "NFType.h"
#include "SCodeUtil.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
