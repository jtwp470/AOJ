#include <vector>
#include <iostream>
#define rep(i, n) for (int i=0; i<n; i++)
using namespace std;

int main(void) {
  int T, Nt, Mc;
  // 入力処理
  cin >> T;
  cin >> Nt;
  int takoyaki[Nt];
  rep(i, Nt) {
    cin >> takoyaki[i];
  }
  cin >> Mc;
  int customer[Mc];
  rep(i, Mc) {
    cin >> customer[i];
  }
  int tt = 0;
  for (int ic = 0; ic < Mc; ic++) {
    while (customer[ic] - takoyaki[tt] > T) // たこ焼きを進める
      tt++;
    if (customer[ic] < takoyaki[tt++])
      goto no;
  }
  goto yes;
 no:
  cout << "no" << endl;
  return 0;
 yes:
  cout << "yes" << endl;
  return 0;
}
