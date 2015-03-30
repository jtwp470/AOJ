/*
  STDを使って実装する
*/
#include <iostream>
#include <algorithm>
#include <deque>
#define rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define rrep(i, n) for (int (i) = (n)-1; (i)>=0; (i)--)
#define debug(x) cout <<#x<<": "<<endl;
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false); // cin や cout が遅い原因を取り除く
  deque<int> q;
  deque<int>::iterator it;
  int n, k;
  char command[50];
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> command;
    if (command[0] == 'i') {
      cin >> k;
      q.push_front(k);
    } else if (command[6] == 'F') {
      q.pop_front();
    } else if (command[6] == 'L') {
      q.pop_back();
    } else {
      cin >> k;
      it = find(q.begin(), q.end(), k);
      if (it != q.end())
        q.erase(it);
    }
  }

  if (q.empty())
    return 0;
  it = q.begin();
  cout << *it;
  while (++it != q.end())
    cout << ' ' << *it;
  cout << endl;
  return 0;
}
