// B: 罠
#include <stdio.h>
#include <stdlib.h>
#define N 30
int main(void) {
  char str[N];
  scanf("%s", str);
  int i;
  for (i = 0; i < N; i++) {
    switch(str[i]) {
    case 'a':
    case 'i':
    case 'u':
    case 'e':
    case 'o':
      break;
    case '\0':
      goto out;
    default:
      printf("%c", str[i]);
      break;
    }
  }
 out:
  printf("\n");
  return EXIT_SUCCESS;
}
