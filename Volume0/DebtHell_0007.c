#include <stdio.h>
int futureDebt(int n) {
  int debt = 100000;
  int i;
  for(i=0; i<n; i++) {
    debt += debt * 0.05;
    if (debt % 1000 != 0)
      debt += 1000 - (debt % 1000);
  }
  return debt;
}
int main(void)
{
  int n = 0;
  scanf("%d", &n);
  printf("%d\n", futureDebt(n));
  return 0;
}
