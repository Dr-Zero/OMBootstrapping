#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Error.h"
#include "NFCeval.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFFunctionDerivative.h"
#include "NFInst.h"
#include "NFInstNode.h"
#include "NFPrefixes.h"
#include "NFType.h"
#include "NFTypeCheck.h"
#include "NFTyping.h"
#include "SCodeDump.h"
#include "SCodeUtil.h"
#include "UnorderedMap.h"
#ifdef __cplusplus
}
#endif
