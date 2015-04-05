#include <stdio.h>
long fractorial(int n) {
  if(n == 1)
    return 1;
  else
    return n *fractorial(n-1);
}
int main(void)
{
  int n;
  scanf("%d", &n);
  printf("%lu\n", fractorial(n));
  return 0;
}
