#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "ElementSource.h"
#include "Error.h"
#include "ErrorExt.h"
#include "ExecStat.h"
#include "Flags.h"
#include "List.h"
#include "Mutable.h"
#include "NFBinding.h"
#include "NFBuiltinCall.h"
#include "NFCall.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFEquation.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFInstContext.h"
#include "NFInstNode.h"
#include "NFModifier.h"
#include "NFOperatorOverloading.h"
#include "NFPrefixes.h"
#include "NFRecord.h"
#include "NFRestriction.h"
#include "NFSections.h"
#include "NFSimplifyExp.h"
#include "NFStatement.h"
#include "NFStructural.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "NFTypeCheck.h"
#include "NFTyping.h"
#include "System.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
