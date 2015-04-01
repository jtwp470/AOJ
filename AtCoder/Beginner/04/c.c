// C: 入れ替え
#include <stdio.h>
#include <stdlib.h>
#define N 5
void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void print(int *a) {
  int i;
  for (i = 0; i < 6; i++)
    printf("%d", a[i]);
  puts("");
}
int main(void) {
  int n = 0, i;
  int cards[6] = {1, 2, 3, 4, 5, 6};
  scanf("%d", &n);
  for (i = 0; i < n % 30; i++) {
    swap(&cards[(i % N)], &cards[(i % N) + 1]);
    //    printf("i = %0d:", i);
    //    print(cards);
  }
  print(cards);
  return EXIT_SUCCESS;
}
