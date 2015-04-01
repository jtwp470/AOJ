// C: スフィンクスのなぞなぞ
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  cin >> m;
  // i: 大人 j:老人 k:赤ちゃん
  for (int j = 0; j < 2; j++) { // 老人の数は1人か2人(解法2より)
    for (int k = 0; k <= n; k++) {
      for (int i = 0; i <= n; i++) {
        if (2 * i + 3 * j + 4 * k == m && i + j + k == n) {
          printf("%d %d %d\n", i, j, k);
          goto end;
        }
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
 end:
  return 0;
}
