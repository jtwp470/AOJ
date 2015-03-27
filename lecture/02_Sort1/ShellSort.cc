/*
 * Segmentation Fault を起こすけど理由がわからん
 */
//#include <iostream>
#include <stdio.h>
//#include <algorithm>
#define rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define rrep(i, n) for (int (i) = (n)-1; (i)>=0; (i)--)
// #define debug(x) cout <<#x<<": "<<endl;
// using namespace std;


// シェルソート用に間隔を生みだす
// 間隔は h_i+1 = 3 * h_i + 1 を使う
// 戻り値はgの要素数
int generateG(int *g) {
  const int max_range = 1000000;
  int i = 0;
  g[0] = 1;
  while (i < 100) {
    g[i+1] = 3 * g[i] + 1;
    //    printf("[%d]:%d\n",  i, g[i]);
    if (g[i] >= max_range) {
      i--;
      break;
    }
    i++;
  }
  return i;
}

// 一定の間隔gだけ離れた要素のみを対象とした挿入ソート
int insertionSort(long *a, long n, long g) {
  int cnt = 0;
  int i;
  for (i = g; i < n; i++) {
    long v = a[i];
    long j = i - g;
    while (j >= 0 && a[j] > v) {
      a[j+g] = a[j];
      j = j - g;
      cnt++;
    }
    a[j+g] = v;
  }
  return cnt;
}


void shellSort(long *a, long n) {
  int cnt = 0;
  int g[100] = {};
  int gmax = generateG(g);
  int flg = 0;
  int i;
  for (i = gmax; i >= 0; i--) {
    if (g[i] <= n) {
      if (flg == 0) {
        int m = i + 1;
        printf("%d\n", m);
        flg++;
      }
      if (i == 0)
        printf("%d\n", g[i]);
      else
        printf("%d ", g[i]);
      cnt += insertionSort(a, n, g[i]);
    }
  }
  printf("%d\n", cnt);
  for (i = 0; i < n; i++) {
    printf("%ld\n", a[i]);
  }
}


int main() {
  //  cin.tie(0);
  // ios::sync_with_stdio(false); // cin や cout が遅い原因を取り除く
  long a[120] = {};
  long n = 0;
  scanf("%ld", &n);
  int i;
  for (i = 0; i < n; i++) {
    // cin >> a[i];
    scanf("%ld", &a[i]);
  }
  shellSort(a, n);
  return 0;
}
