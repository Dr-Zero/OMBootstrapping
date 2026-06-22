#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Error.h"
#include "List.h"
#include "NBEquation.h"
#include "NFComponentRef.h"
#include "NFConvertDAE.h"
#include "NFExpression.h"
#include "NFOperator.h"
#include "NFSimplifyExp.h"
#include "NFStatement.h"
#include "NSimGenericCall.h"
#include "Pointer.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
