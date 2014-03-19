#include <stdio.h>
#include <math.h>
int main(void)
{
  int a, b, degree;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &degree);

  double rad = degree * M_PI / 180.0;
  double ad = (double)a;
  double bd = (double)b;
  double cd = sqrt(ad*ad + bd*bd - 2*ad*bd * cos(rad));
  double square = 1.0 / 2.0 * ad * bd * sin(rad);
  double x = 2 * square / ad;

  printf("%lf\n", square);
  printf("%lf\n", (ad+bd+cd));
  printf("%lf\n", x);

  return 0;
}
