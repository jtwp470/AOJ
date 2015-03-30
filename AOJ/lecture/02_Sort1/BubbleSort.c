#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
  int n, i, j, cnt = 0;
  scanf("%d", &n);

  int a[n]; 
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n-1; i++) {
    for (j = n-1; j > i; j--) {
      if (a[j] < a[j-1]) {
	swap(&a[j], &a[j-1]);
	cnt++;
      }
    }
  }

  for (i=0; i<n;i++) {
    if (i == n - 1)
      printf("%d\n",a[i]);
    else
      printf("%d ", a[i]);
  }
  printf("%d\n",cnt);
  return 0;
}

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
