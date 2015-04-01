// B: トリボナッチ数列
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  a[0] = 0;
  a[1] = 0;
  a[2] = 1;

  for (int i = 2; i < n; i++)
    a[i+1] = (a[i] + a[i-1] + a[i-2]) % 10007;
  cout << a[n-1] << endl;
  return 0;
}
