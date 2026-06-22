#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "Error.h"
#include "NFCeval.h"
#include "NFDimension.h"
#include "NFExpression.h"
#include "NFOperator.h"
#include "NFSBGraphUtil.h"
#include "NFSimplifyExp.h"
#include "NFSubscript.h"
#include "SBAtomicSet.h"
#include "SBInterval.h"
#include "SBLinearMap.h"
#include "SBMultiInterval.h"
#include "SBPWLinearMap.h"
#include "SBSet.h"
#include "System.h"
#include "Util.h"
#include "Vector.h"
#ifdef __cplusplus
}
#endif
