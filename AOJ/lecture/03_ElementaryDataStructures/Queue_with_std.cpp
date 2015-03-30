#include <iostream>
#include <queue>

#define rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define rrep(i, n) for (int (i) = (n)-1; (i)>=0; (i)--)
#define debug(x) cout <<#x<<": "<<endl;

#define MAX_LENGTH   100000
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false); // cin や cout が遅い原因を取り除く
  int n, quontum;
  cin >> n >> quontum;
  queue< pair<string, int> > q;

  rep(i, n) {
    string name;
    int time;
    cin >> name >> time;
    q.push(make_pair(name, time));
  }


  int total = 0;
  while (!q.empty()) {
    pair<string, int> x = q.front(); q.pop();
    if (x.second <= quontum) {
      total += x.second;
      cout << x.first << " " << total << endl;
    } else {
      x.second -= quontum;
      total += quontum;
      q.push(x);
    }
  }
  return 0;
}
