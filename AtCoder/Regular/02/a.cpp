#include <iostream>
#include <algorithm>
#define rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define rrep(i, n) for (int (i) = (n)-1; (i)>=0; (i)--)
#define debug(x) cout <<#x<<": "<<endl;
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false); // cin や cout が遅い原因を取り除く

  int y;
  cin >> y;

  bool f = false;
  if (y % 4 == 0)
    f = true;
  if (y % 100 == 0)
    f = false;
  if (y % 400 == 0)
    f = true;

  if (f)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
