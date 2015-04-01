#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  if (x == 12)
    x = 1;
  else
    x += 1;
  cout << x << endl;
  return 0;
}
