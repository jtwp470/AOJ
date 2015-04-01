// B: おいしいたこ焼きの食べ方
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 1, i;
  scanf("%d", &n);
  int min = 100;
  for (i = 0; i < n; i++) {
    int input;
    scanf("%d", &input);
    if (input < min)
      min = input;
  }
  printf("%d\n", min);
  return EXIT_SUCCESS;
}
