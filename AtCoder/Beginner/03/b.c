// B: AtCoder社のトランプ
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(char com) {
  char strs[8] = {'a', 't', 'c', 'o', 'd', 'e', 'r', '\0'};
  int i;
  for (i = 0; i < 7; i++) {
    if (com == strs[i]) {
      return 0;  // OK
    }
  }
  return -1;      // FAIL
}

int main(void) {

  char S[11], T[11];
  scanf("%s\n%s", S, T);
  int len = strlen(S);
  int i;
  for (i = 0; i < len; i++) {
    if (S[i] == '@' && T[i] == '@')
      // 2箇所とも@の場合無条件で合致するので何もしない
      continue;
    if (S[i] == '@') {
      if (compare(T[i]) <= -1)
        goto lose;
      else
        continue;
    }
    if (T[i] == '@') {
      if (compare(S[i]) <= -1)
        goto lose;
      else
        continue;
    }
    if (S[i] != T[i])
      goto lose;
  }
  printf("You can win\n");
  return EXIT_SUCCESS;

 lose:
  printf("You will lose\n");
  return EXIT_SUCCESS;
}
