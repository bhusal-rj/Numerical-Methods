#include "matrix.h"
#include <stdio.h>
void Matrix_Print(float (*ptr)[size], int row, int column) {
  printf("\nPrinting the matrix\n");
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= column; j++) {
      printf("%f  ", ptr[i][j]);

    }
    printf("\n");
  }
}
