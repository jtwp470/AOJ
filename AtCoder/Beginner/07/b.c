// B: 辞書式順序
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char *a, int n) {
  int i = 0;
  while (i < n)
    printf("%c", a[i++]);
  puts("");
}

int main(void) {
  char str[11];
  scanf("%s", str);
  int l = strlen(str);
  if (l == 1) {
    if (str[l-1] == 'a')
      puts("-1");
    else {
      str[l-1]--;
      print(str, 1);
    }
  }
  else {
    str[l-1]--;
    print(str, 1);
  }

  return EXIT_SUCCESS;
}
