#include "matrix.h"
#include <stdio.h>
int main() {
  int degree;
  float answer[size],input[size][size];
  printf("Enter the order of matrix\t");
  scanf("%d", &degree);
  printf("Enter the matrix data \n");
  for (int i = 1; i <= degree; i++) {
    for (int j = 1; j <= degree + 1; j++) {
      printf("Matrix[%d][%d]\t", i, j);
      scanf("%f", &input[i][j]);
    }
  }

  Matrix_Print(input, degree, degree + 1);
  printf("\nApplying gauss elimination method for the matrix\n");
  for (int i = 1; i <= degree-1; i++) {
    for (int j = i + 1; j <= degree; j++) {
      float ratio = (float)input[j][i] / input[i][i];
      for (int k = 1; k <= degree + 1; k++) {
        input[j][k] = input[j][k] - input[i][k] * ratio;
      }
    }
  }
  answer[degree]=(float)input[degree][degree+1]/input[degree][degree];

  Matrix_Print(input, degree, degree + 1);
  //backward substitution
  for(int i=degree-1;i>=1;i--){
    answer[i]=input[i][degree+1];
    for(int k=i+1;k<=degree;k++){
      answer[i] = answer[i] - input[i][k] * answer[k];
    }
    answer[i]= answer[i]/input[i][i];
  } 
  for(int i=1;i<=degree;i++){
    printf("%f\n",answer[i]);
  }
  return 0;
}
