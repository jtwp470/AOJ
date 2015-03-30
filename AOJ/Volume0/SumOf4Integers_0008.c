#include <stdio.h>

int main(void)
{
  int n = 0;
  while (scanf("%d", &n) != EOF) {
    if (n <= 36) {
      int a, b, c, d, cnt = 0;
      for(a=0; a < 10; a++) {
	for(b=0; b < 10; b++) {
	  for(c=0; c < 10; c++) {
	    for(d=0; d < 10; d++) {
	      if (a+b+c+d == n)
		cnt++;
	    }
	  }
	}
      }
      printf("%d\n", cnt);
    } else 
      printf("0\n");
  }

  return 0;
}
