// GraphI - Breadth First Search
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_C
#include <iostream>
#include <queue>
using namespace std;

int adj[101][101] = {0}; // 隣接行列
int d[101] = {0};
int n;

void BreadthFirstSearch(int v) {
  queue<int> q;
  q.push(v);
  d[v] = 0;
  while (!q.empty()) {
    int c = q.front();
    int v = -1;
    for (int i = 1; i <= n; i++) {
      if (adj[c][i] == 1 && d[i] == -1) {
        v = i;
        break;
      }
    }
    if (v != -1) {
      q.push(v);
      d[v] = d[c] + 1;
    } else
      q.pop();
  }
}
int main(void) {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int u, k; cin >> u >> k;
    d[i] = -1;
    for (int j = 0; j < k; j++) {
      int v; cin >> v; adj[u][v] = 1;
    }
  }
  BreadthFirstSearch(1);
  for (int i = 1; i <= n; i++)
    cout << i << " " << d[i] << endl;
  return 0;
}
