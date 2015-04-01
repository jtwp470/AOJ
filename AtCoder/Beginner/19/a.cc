// A: 高橋くんと年齢
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  vector<int> a;
  for (int i = 0; i < 3; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  sort(a.begin(), a.end());
  cout << a[1] << endl;
  return 0;
}
