#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Error.h"
#include "IOStream.h"
#include "NFBinding.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponent.h"
#include "NFConvertDAE.h"
#include "NFExpression.h"
#include "NFInstNode.h"
#include "NFPrefixes.h"
#include "NFRestriction.h"
#include "NFType.h"
#include "Pointer.h"
#include "SCodeDump.h"
#include "SCodeUtil.h"
#include "System.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
