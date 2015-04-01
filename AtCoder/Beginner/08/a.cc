#include <iostream>
using namespace std;

int main(void) {
  int s, t;
  cin >> s >> t;
  int ans = t - s + 1;
  if (s == t)
    ans = 1;
  cout << ans << endl;
  return 0;
}
