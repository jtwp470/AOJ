#include <iostream>
#include <set>
using namespace std;

int main() {
  int n;
  set<int> ng;
  cin >> n;
  for (int i = 0; i < 3; i++) {
    int x;
    cin >> x;
    ng.insert(x);
  }
  int c = 0;

  while (c <= 100) {
    //    cout << c << "回目: " << n << endl;
    if (ng.find(n) != ng.end())
      break;
    if (n > 0) {
      // 3 で引く
      if (ng.find(n-3) == ng.end() && n - 3 >= 0)
        n -= 3;  // ng ではないので 3 で引いて値を更新
      else if (ng.find(n-2) == ng.end() && n - 2 >= 0)
        // 3 で 引くと ng 数字にぶち当たるので次は2で引いてみる
        n -= 2;
      else if (ng.find(n-1) == ng.end() && n - 1 >= 0)
        n -= 1;
      else
        break;
    }
    else {
      cout << "YES" << endl;
      return 0;
    }
    c++;
  }
  cout << "NO" << endl;
  return 0;
}
