// A: AtCoder社の給料
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 0, i;
  scanf("%d", &n);
  double sum = 0.0, nd;
  nd = (double)n;
  for (i = 1; i < n + 1; i++)
    sum += (double)i * 10000.0 * 1.0 / nd;
  printf("%.0f\n", sum);
  return EXIT_SUCCESS;
}
