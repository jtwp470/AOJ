#include <iostream>
using namespace std;

bool both = false;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  char ans = '!';
  if (a + b == c && a - b == c)
    ans = '?';
  else if (a + b == c)
    ans = '+';
  else if (a - b == c)
    ans = '-';
  else
    ans = '!';
  cout << ans << endl;
  return 0;
}
