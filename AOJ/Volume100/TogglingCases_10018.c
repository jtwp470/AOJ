#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char input[1200];
  fgets(input, sizeof(input), stdin);
  int i;
  int t = strlen(input);
  for (i = 0; i < t; i++) {
    if (input[i] >= 'A' && input[i] <= 'Z') {
      printf("%c", input[i] + 32);
    } else if (input[i] >= 'a' && input[i] <= 'z') {
      printf("%c", input[i] - 32);
    } else
      printf("%c", input[i]);
  }
  return EXIT_SUCCESS;
}
