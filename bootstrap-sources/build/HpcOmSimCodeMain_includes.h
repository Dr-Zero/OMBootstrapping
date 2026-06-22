#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AdjacencyMatrix.h"
#include "BackendDAEOptimize.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "Error.h"
#include "ExecStat.h"
#include "Flags.h"
#include "FlagsUtil.h"
#include "HpcOmEqSystems.h"
#include "HpcOmMemory.h"
#include "HpcOmScheduler.h"
#include "HpcOmSimCodeMain.h"
#include "HpcOmTaskGraph.h"
#include "List.h"
#include "SimCodeUtil.h"
#include "System.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
