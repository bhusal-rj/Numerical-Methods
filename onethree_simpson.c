#include <stdio.h>

float f(float x) { return (1 / (x * x)); }

int main() {
  float lower, upper, integration = 0, stepsize;
  int subInterval;

  printf("\nEnter the lower limit of integration\n");
  scanf("%f", &lower);
  printf("\nEnter the upper limit of the integration\t");
  scanf("%f", &upper);
  printf("\nEnter the subInterval\t");
  scanf("%d", &subInterval);

  stepsize = (upper - lower) / subInterval;
  integration = (float) (f(lower) + f(upper));

  for (int i = 1; i < subInterval; i++) {
    float term = lower + i * stepsize;
    printf("\nTerm %f , integration %f\t", term, integration);
    if (i % 2 == 0) {
      integration = integration + 2 * f(term);
    } else {
      integration = integration + 4 * f(term);
    }
  }

  printf("The integration is %f \t", ((float)(stepsize / 3)) * integration);
}
