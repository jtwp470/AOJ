#include <iostream>
using namespace std;

int main() {
  int res = 1;
  int n;
  cin >> n;
  if (n >= 2) {
    if (n % 2 == 0)
      res = n / 2;
    else
      res = n / 2 + 1;
  }
  cout << res << endl;
  return 0;
}
