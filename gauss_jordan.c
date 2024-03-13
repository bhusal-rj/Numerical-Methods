#include "matrix.h"
#include <stdio.h>

int main(){
  float  input[size][size],answer[size];
  int degree;
  printf("Enter the value of unknown \t");
  scanf("%d",&degree);
  for(int i=1;i<=degree;i++){
    for(int j=1;j<=degree+1;j++){
      printf("\nA[%d][%d]\t",i,j);
      scanf("%f",&input[i][j]);
    }
  }

  //gauss jordan method
  for(int i=1;i<=degree;i++){
    for(int j=1;j<=degree;j++){
      if(i!=j){
        float ratio = input[j][i]/input[i][i];
        for(int k=1;k<=degree+1;k++){
          input[j][k] = input[j][k] - ratio * input[i][k];
        }
      }
    }
  }

Matrix_Print(input, degree, degree+1);
  for(int i=1;i<=degree;i++){
    answer[i] = input[i][degree+1]/input[i][i];
    printf("%f\n",answer[i]);
  }

  
}
