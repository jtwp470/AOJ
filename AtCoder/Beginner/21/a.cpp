#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  int cnt = 0;
  vector<int> res(10);
  while (n > 0) {
    if (n >= 8) {
      n -= 8; res.at(cnt++) = 8;
    } else if (n >= 4) {
      n -= 4; res.at(cnt++) = 4;
    } else if (n >= 2) {
      n -= 2; res.at(cnt++) = 2;
    } else {
      n -= 1; res.at(cnt++) = 1;
    }
  }
  cout << cnt << endl;
  for (int i = 0; i < cnt; i++)
    cout << res.at(i) << endl;
  return 0;
}
