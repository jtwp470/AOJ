#include <stdio.h>
#include <stdlib.h>
#define  START 0
#define  END   1

int roundtime(int time, int which) {
  int min = time % 100;
  int hour = (time - (min)) / 100;

  int mins = hour * 60 + min; // 単位は分
  int res = min % 5;
  if (res > 0) {
    if (which == START)
      // 直後
      mins = mins - res;
    else
      mins = (5 - res) + mins;
  }
  hour = mins / 60;
  min = mins % 60;
  return hour * 100 + min;
}

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void sort(int *start, int *end, int size) {
  int i, j;
  for (i = 0; i < size - 1; i++) {
    for (j = i + 1; j < size; j++) {
      if (start[i] > start[j]) {
        swap(&start[i], &start[j]);
        swap(&end[i], &end[j]);
      }
    }
  }
}

int is_index(int time) {
  int min = time % 100;
  int hour = (time - (min)) / 100;
  return hour * 12 + min / 5;
}

int gettime(int index) {
  int min = 5 * index;
  int h = min / 60;
  int m = min % 60;
  return h * 100 + m;
}
int main(void) {
  int n;
  scanf("%d", &n);
  int s[n], e[n];
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d-%d", &s[i], &e[i]);
    s[i] = roundtime(s[i], START);
    e[i] = roundtime(e[i], END);
    //    printf("Rounded: %d-%d\n", s[i], e[i]);
  }

  sort(s, e, n);

  const int size = 12 * 24 + 1;
  int table[size];
  // 初期化
  for (i = 0; i < size; i++)
    table[i] = 0;

  for (i = 0; i < n; i++) {
    table[is_index(s[i])]++;
    table[is_index(e[i])]--;
  }
  // 足した値を計算
  for (i = 1; i < size; i++) {
    table[i] += table[i-1];
  }
  // 1 以上のところが求める範囲
  for (i = 0; i < size; i++) {
    if (table[i] >= 1) {
      printf("%04d-", gettime(i));   // 始点
      int j;
      for (j = i + 1; j < size; j++) {
        if (table[j] <= 0) {
          printf("%04d\n", gettime(j));
          i = j;
          break;
        }
      }
    }
  }
  return EXIT_SUCCESS;
}
