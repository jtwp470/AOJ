// D: LCM Rush
// http://abc020.contest.atcoder.jp/submissions/378094
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <queue>
#include <numeric>

#define rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define rrep(i, n) for (int (i) = (n)-1; (i)>=0; (i)--)
#define debug(x) cout <<#x<<": "<< x << endl;
using namespace std;

#define DIVIDE    1000000007

long gcd(int x, int y) {
  if (x == 0 || y == 0)
    return 0;

  while (x != y) {
    if (x > y) x = x - y;
    else       y = y - x;
  }
  return x;
}

long lcm(int x, int y) {
  return (x / gcd(x, y)) * y;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false); // cin や cout が遅い原因を取り除く
  map<int, queue<int> > maps; // i % kと対応
  int n, k;
  cin >> n >> k;
  //  k %= DIVIDE;
  long sum = 0;
  // i % k で余る数と対応付け
  for (int i = 1; i <= n; i++) {
    maps[i % k].push(i);
    // printf("maps[%d] = %d\n", i%k, i);
  }

  for (int i = 0; i < k; i++) {
    long gc;
    if (i == 0)
      gc = gcd(k, k);
    else
      gc = gcd(i, k);
    queue<int> q = maps[i];
    // 等差数列の和の公式 S = (初項 + 末項) * 項数 / 2
    int i_sums = (q.front() + q.back()) * q.size() / 2;
    sum += (i_sums * k / gc);
    sum = sum % DIVIDE;
  }
  cout << sum % DIVIDE << endl;

  return 0;
}
