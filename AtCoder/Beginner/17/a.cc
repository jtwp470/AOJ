#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int s, e;
  for (int i = 0; i < 3; i++) {
    cin >> s >> e;
    sum += (s * e) / 10;
  }
  cout << sum << endl;
  return 0;
}
