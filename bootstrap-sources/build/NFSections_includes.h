#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "DAEDumpTypes.h"
#include "Error.h"
#include "IOStream.h"
#include "List.h"
#include "NFAlgorithm.h"
#include "NFComponentRef.h"
#include "NFEquation.h"
#include "NFExpression.h"
#include "NFSections.h"
#include "NFStatement.h"
#include "SCodeDump.h"
#include "SCodeUtil.h"
#ifdef __cplusplus
}
#endif
