#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Mutable.h"
#include "NBBackendUtil.h"
#include "NBEquation.h"
#include "NBVariable.h"
#include "NFBackendExtension.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFOperator.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
