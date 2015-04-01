// C: 風力観測
#include <stdio.h>
#include <stdlib.h>
#define MIN 60

int wind_power(int dis) {
  double disd = (double)dis;
  // ヒントを参照している
  // 割り算の処理をすると非常に怪しいので風速を風程に戻して風力を算出する
  if (0.0 * MIN <= disd && disd < 0.25 * MIN)
    return 0;
  else if (0.25 * MIN <= disd && disd < 1.55 * MIN)
    return 1;
  else if (1.55 * MIN <= disd && disd < 3.35 * MIN)
    return 2;
  else if (3.35 * MIN <= disd && disd < 5.45 * MIN)
    return 3;
  else if (5.45 * MIN <= disd && disd < 7.95 * MIN)
    return 4;
  else if (7.95 * MIN <= disd && disd < 10.75 * MIN)
    return 5;
  else if (10.75 * MIN <= disd && disd < 13.85 * MIN)
    return 6;
  else if (13.85 * MIN <= disd && disd < 17.15 * MIN)
    return 7;
  else if (17.15 * MIN <= disd && disd < 20.75 * MIN)
    return 8;
  else if (20.75 * MIN <= disd && disd < 24.45 * MIN)
    return 9;
  else if (24.45 * MIN <= disd && disd < 28.45 * MIN)
    return 10;
  else if (28.45 * MIN <= disd && disd < 32.65 * MIN)
    return 11;
  else
    return 12;
}

int main(void) {
  int deg, dis;
  char v[16][4] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE",
                   "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW",
  };
  scanf("%d %d", &deg, &dis);
  int power = wind_power(dis);
  if (power <= 0)
    printf("C 0\n");
  else
    printf("%s %d\n", v[((deg *10+1125) / 2250) % 16], power);
  return EXIT_SUCCESS;
}
