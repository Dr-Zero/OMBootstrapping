#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "ElementSource.h"
#include "Error.h"
#include "ExecStat.h"
#include "Flags.h"
#include "List.h"
#include "Mutable.h"
#include "NFBackendExtension.h"
#include "NFBinding.h"
#include "NFComponentRef.h"
#include "NFEquation.h"
#include "NFExpandExp.h"
#include "NFExpression.h"
#include "NFExpressionIterator.h"
#include "NFScalarize.h"
#include "NFType.h"
#include "NFVariable.h"
#include "UnorderedMap.h"
#ifdef __cplusplus
}
#endif
