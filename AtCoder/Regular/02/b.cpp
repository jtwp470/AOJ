#include <iostream>
#include <algorithm>
#include <cstdio>
#define rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define rrep(i, n) for (int (i) = (n)-1; (i)>=0; (i)--)
#define debug(x) cout <<#x<<": " <<x<<endl;
using namespace std;

bool isDivide(int y, int m, int d) {
  if (y % m == 0) {
    cout << y % m << endl;
    int t = y / m;
    if (t % d == 0)
      return true;
  }
  return false;
}

bool isYruu(int y) {
  bool f = false;
  if (y % 4 == 0)
    f = true;
  if (y % 100 == 0)
    f = false;
  if (y % 400 == 0)
    f = true;
  return f;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false); // cin や cout が遅い原因を取り除く
  int y, m, d;
  int mmax[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  scanf("%d/%d/%d", &y, &m, &d);
  if (isDivide(y, m, d) == true) {
    goto end;
  }

  for (int yy = y; yy <= 2999; yy++) {
    for (int mm = m; mm <= 12; mm++) {
      if (mm == 2) {
        if (isYruu(yy))
          mmax[1] = 29;
        else
          mmax[1] = 28;
      }
      for (int dd = d; dd <= mmax[mm-1]; dd++) {
        if (isDivide(yy, dd, mm))
          y = yy; d = dd; m = mm; goto end;
      }
    }
  }
  return 0;

 end:
  printf("%d/%02d/%02d\n", y, m, d);
  return 0;
}
