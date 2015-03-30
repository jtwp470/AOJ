#include <iostream>
#include <algorithm>
#define rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define rrep(i, n) for (int (i) = (n)-1; (i)>=0; (i)--)
#define debug(x) cout <<#x<<": "<<endl;
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false); // cin や cout が遅い原因を取り除く
  int a[100];
  int n;
  cin >> n;
  rep(i, n) {
    cin >> a[i];
  }

  int c = 0;
  // selection sort
  rep(i, n-1) {
    int minj = i;
    for (int j = i+1; j < n; j++) {
      if (a[j] < a[minj])
        minj = j;
    }
    if (i != minj) {
      swap(a[i], a[minj]);
      ++c;
    }
  }
  rep(i, n-1) {
    cout << a[i] << " ";
  }
  cout << a[n-1] << endl;
  cout << c << endl;
  return 0;
}
