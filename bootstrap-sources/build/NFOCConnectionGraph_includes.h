#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "Debug.h"
#include "ElementSource.h"
#include "Error.h"
#include "Flags.h"
#include "IOStream.h"
#include "List.h"
#include "NFBinding.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFComponentRef.h"
#include "NFConnector.h"
#include "NFDimension.h"
#include "NFEquation.h"
#include "NFExpression.h"
#include "NFFlatModel.h"
#include "NFFunction.h"
#include "NFInstNode.h"
#include "NFOCConnectionGraph.h"
#include "NFType.h"
#include "NFTyping.h"
#include "Settings.h"
#include "System.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
