/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10013
 */
#include <iostream>
#include <algorithm>
#define rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define rrep(i, n) for (int (i) = (n)-1; (i)>=0; (i)--)
#define debug(x) cout <<#x<<": "<<endl;
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false); // cin や cout が遅い原因を取り除く

  int h, w;

  while (cin >> h >> w, h != 0 && w != 0) {
    for (int y = 0; y < h; y++) {
      cout << "#";
      for (int x = 1; x < w-1; x++) {
        if (y == 0 || y == h-1)
          cout << "#";
        else
          cout << ".";
      }
      cout << "#" << endl;;

    }
    cout << "\n";
  }
  return 0;
}
