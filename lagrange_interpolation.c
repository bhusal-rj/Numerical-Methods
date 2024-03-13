#include <stdio.h>

int main() {
  int n;
  float x[100], y[100], xp, yp=0;
  printf("Enter the number of terms\t");
  scanf("%d", &n);
  printf("\nEnter the data for the x and y respectively");
  for (int i = 0; i < n; i++) {
    printf("\nx[%d],y[%d]", i, i);
    scanf("%f%f", &x[i], &y[i]);
  }

  printf("Enter the point to calculate \t");
  scanf("%f", &xp);
  printf("\nApplying the Lagrange's interpolation formula\n");
  for (int i = 0; i < n; i++) {
    float p = 1;
    for (int j = 0; j < n; j++) {
      if (i != j) {
        if ((x[i] - x[j]) == 0) {
          printf("We cannot find the interpolation value");
          return 0;
        }
        p = p * ((xp - x[j]) / (x[i] - x[j]));
      }
    }
    yp = yp + p * y[i];
  }
  printf("\nThe interpolation value for %f is %f",xp,yp);
  return 0;
}
