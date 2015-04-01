#include <iostream>
#include <cmath>
using namespace std;

int txa, tya; // 電話をかける前の座標
int txb, tyb; // 電話をかけた後の座標
int T, V;

bool isDraw(int x, int y) {
  double sa = sqrt(pow(x-txa, 2) + pow(y-tya, 2));
  double sb = sqrt(pow(x-txb, 2) + pow(y-tyb, 2));
  double can_move = T * V;
  if (sa + sb <= can_move)
    return true;
  else
    return false;
}

int main() {
  int n;
  cin >> txa >> tya >> txb >> tyb >> T >> V;
  cin >> n;
  int x[n], y[n];
  for (int i = 0; i < n; i++)
    cin >> x[i] >> y[i];
  bool f = false;
  for (int i = 0; i < n; i++) {
    if (isDraw(x[i], y[i]))
      f = true;
  }
  if (f)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
