#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n = 0;
  cin >> n;
  int sum = 0;
  int nv = n;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    if (x == 0) nv--;
    else sum += x;
  }
  double ave = ceil((double)sum / (double)nv);
  cout << ave << endl;
  return 0;
}
