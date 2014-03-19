#include <stdio.h>
#include <math.h>
int main(void)
{
  double x1, y1, x2, y2;
  scanf("%lf", &x1);
  scanf("%lf", &y1);
  scanf("%lf", &x2);
  scanf("%lf", &y2);

  double a = x2 - x1;
  double b = y2 - y1;
  double result = sqrt(a*a + b*b);

  printf("%lf\n", result);
  return 0;
}
