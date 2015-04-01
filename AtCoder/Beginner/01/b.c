// B: 視程の通報
#include <stdio.h>
#include <stdlib.h>
#define KM  1000
int main(void) {
  int vv = 0;
  int m;
  scanf("%d", &m);
  // vv はここではとりあえずメートルで表しておく
  if (m < 0.1 * KM)
    vv = 0;
  else if (0.1 * KM <= m && m <= 5 * KM)
    vv = m * 10;
  else if (6 * KM <= m && m <= 30 * KM)
    vv = 50 * KM + m;
  else if (35 * KM <= m && m <= 70 * KM) {
    vv = ((m - 30 * KM) / (5 * KM)) * KM + 80 * KM;
  } else
    vv = 89 * KM;
  vv /= KM;
  if (vv >= 0 && vv <= 9) {
    printf("0%d\n", vv);
  } else {
    printf("%d\n", vv);
  }

  return EXIT_SUCCESS;
}
