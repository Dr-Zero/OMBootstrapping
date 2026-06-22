#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "ElementSource.h"
#include "Error.h"
#include "ErrorExt.h"
#include "FFI.h"
#include "Flags.h"
#include "List.h"
#include "Mutable.h"
#include "NFBinding.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFEvalFunction.h"
#include "NFEvalFunctionExt.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFInstContext.h"
#include "NFInstNode.h"
#include "NFRangeIterator.h"
#include "NFStatement.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "Pointer.h"
#include "SCodeUtil.h"
#include "Settings.h"
#include "System.h"
#include "Testsuite.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
