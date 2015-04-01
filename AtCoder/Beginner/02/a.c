// A: 正直者
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int X, Y;
  scanf("%d %d", &X, &Y);
  if (X < Y)
    X = Y;
  printf("%d\n", X);
  return EXIT_SUCCESS;
}
