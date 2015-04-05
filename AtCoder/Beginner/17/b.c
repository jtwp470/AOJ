// [AC] http://abc017.contest.atcoder.jp/submissions/378228
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char s[50];
  int i = 0;
  for (i = 0; i < 50; i++)
    s[i] = ' ';
  scanf("%s", s);
  int len = strlen(s);
  i = 0;
  while (i < len) {
    //    printf("%d:%c\n", i, s[i]);
    if (s[i] == 'o' || s[i] == 'k' || s[i] == 'u')
      i++;
    else if (s[i] == 'c') {
      if (i <= 48 && s[i+1] == 'h')
        i += 2;
      else {
        puts("NO");
        return EXIT_SUCCESS;
      }
    }
    else {
      puts("NO");
      return EXIT_SUCCESS;
    }
  }
  puts("YES");
  return EXIT_SUCCESS;
}
