#include <stdio.h>

int main(void) {
  int n = 0;
  scanf("%d", &n);

  int i;
  int r[n];
  for (i=0; i<n; i++) {
    scanf("%d", &r[i]);
  }
  
  int j, max;
  for (i=0; i<n-1; i++) {
    for (j=i+1; j<n; j++) {
      int tmp = r[j] - r[i];
      if (max < tmp)
	max = tmp;
    }
  }

  printf("%d\n", max);
  return 0;
}
