#include <math.h>
#include <stdio.h>
float f(float x) { return (1 / (1 + pow(x, 2))); }
int main() {
  float a, b, h;
  int n;
  printf("Enter the value of initial and final limit\t");
  scanf("%f%f", &a, &b);
  printf("\nEnter the value of h\t");
  scanf("%f", &h);
  n = (b - a) / h;
  if ((n % 2) == 0) {
    n = n + 1;
  }

  h = (b - a) / n;
  float sum = f(a) + f(b);
  for (int i = 1; i < n; i++) {
    sum = sum + 2 * f(a + h * i);
  }
  printf("\nThe integration for is %f ", (h / 2) * sum);
}
