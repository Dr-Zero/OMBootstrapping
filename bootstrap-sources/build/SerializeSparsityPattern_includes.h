#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.


  extern FILE* omc_fopen(const char *filename, const char *mode);
  extern size_t omc_fwrite(void *buffer, size_t size, size_t count, FILE *stream);

  static void serializeJ(const char* name, int numCols, int nnz, modelica_metatype colPtrs, modelica_metatype rowInds)
  {
    unsigned int i, j;
    size_t count;
    FILE* pFile = omc_fopen(name, "wb");
    if (pFile == NULL) {
      throwStreamPrint(NULL, "Could not open sparsity pattern file %s.", name);
    }

    /* compute and write sparsePattern->leadindex */
    j = 0;
    for (i = 0; i < numCols; i++) {
      j += (unsigned int) MMC_UNTAGFIXNUM(MMC_STRUCTDATA(colPtrs)[i]);
      count = omc_fwrite(&j, sizeof(unsigned int), 1, pFile);
      if (count != 1) {
        throwStreamPrint(NULL, "Error while writing sparsePattern->leadindex. Expected %d, got %zu", 1, count);
      }
    }

    /* write sparsePattern->index */
    for (i = 0; i < nnz; i++) {
      j = (unsigned int) MMC_UNTAGFIXNUM(MMC_STRUCTDATA(rowInds)[i]);
      count = omc_fwrite(&j, sizeof(unsigned int), 1, pFile);
      if (count != 1) {
        throwStreamPrint(NULL, "Error while writing sparsePattern->index. Expected %d, got %zu", 1, count);
      }
    }

    fclose(pFile);
  }
  

  extern FILE* omc_fopen(const char *filename, const char *mode);
  extern size_t omc_fwrite(void *buffer, size_t size, size_t count, FILE *stream);

  static void serializeC(const char* name, int size, modelica_metatype columns)
  {
    unsigned int i, j;
    size_t count;
    FILE* pFile = fopen(name, "ab");
    if (pFile == NULL) {
      throwStreamPrint(NULL, "Could not open sparsity pattern file %s.", name);
    }

    /* write sparsePattern->colorCols */
    for (i = 0; i < size; i++) {
      j = (unsigned int) MMC_UNTAGFIXNUM(MMC_STRUCTDATA(columns)[i]);
      count = omc_fwrite(&j, sizeof(unsigned int), 1, pFile);
      if (count != 1) {
        throwStreamPrint(NULL, "Error while writing sparsePattern->colorCols. Expected %d, got %zu", 1, count);
      }
    }

    fclose(pFile);
  }
  
#include "Error.h"
#include "List.h"
#include "SerializeSparsityPattern.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
