// B: 回転
#include <stdio.h>
#include <stdlib.h>
#define N 4
int main(void) {
  int x, y;
  char map[N][N];
  for (y = 0; y < N; y++) {
    scanf("%c %c %c %c\n", &map[y][0], &map[y][1], &map[y][2], &map[y][3]);
  }

  for (y = 3; y >= 0; y--)
    printf("%c %c %c %c\n", map[y][3], map[y][2], map[y][1], map[y][0]);
  return EXIT_SUCCESS;
}
