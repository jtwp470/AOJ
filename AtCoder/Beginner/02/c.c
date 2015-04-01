// C: 直訴
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int ax, ay, bx, by, cx, cy;
  scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);

  int m = abs(ax * (by-cy) + bx * (cy-ay) + cx * (ay-by));
  double S = 0.5 * (double)m;
  printf("%.1f\n", S);
  return EXIT_SUCCESS;
}
