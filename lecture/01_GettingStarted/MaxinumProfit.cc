#include <iostream>
#include <climits>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  int n = 0;
  cin >> n;
  int min = INT_MAX;
  int ans = INT_MIN;
  int r;
  for (int i = 1; i <= n; i++) {
    cin >> r;
    if (r - min > ans) ans = r - min;
    if (r < min) min = r;
  }
  cout << ans << endl;
  return 0;
}
