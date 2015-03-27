#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char ch;
  int i;
 
  int count[26] = {};
  while(scanf("%c", &ch) != EOF) {
    if (ch >= 'a' && ch <= 'z')
      count[ch % 'a']++;

    else if (ch >= 'A' && ch <= 'Z')
      count[(ch + 32) % 'a']++;
    else
      continue;
  }

  for (i = 0; i < 26; i++)
    printf("%c : %d\n", 'a' + i, count[i]);
  return 0;
}
