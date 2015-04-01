#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  vector<int> p;
  int n;
  int res;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    p.push_back(x);
  }

  sort(p.begin(), p.end());
  bool f = true;
  int sec = 0;
  for (int i = n-1; i >= 0; i--) {
    if (p[i] < p[n-1]) {
      sec = p[i];
      f = false;
      break;
    }
  }
  if (f)
    sec = p[0];
  cout << sec << endl;
  return 0;
}
