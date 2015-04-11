#include <iostream>
using namespace std;

int main(void) {
  int n;    cin >> n;
  int a, b; cin >> a >> b; // aは出発する町,bは到着地
  int k;    cin >> k;
  int p[k];
  for (int i = 0; i < k; i++)
    cin >> p[i];
  for (int i = 0; i < k; i++) {
    if (p[i] == a || p[i] == b) {
      goto end;
    }
  }

  // 重複要素がある場合これは最短経路ではない
  for (int i = 0; i < k-1; i++)
    for (int j = i+1; j < k; j++)
      if (p[i] == p[j])
        goto end;
  cout << "YES" << endl;
  return 0;
 end:
  cout << "NO" << endl;
  return 0;
}
