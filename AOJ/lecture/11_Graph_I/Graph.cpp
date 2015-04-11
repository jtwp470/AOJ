// Graph I - Graph
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_A
// Status:Accepted: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=1286678#2
#include <iostream>
using namespace std;

int main(void) {
  int n; cin >> n;
  int adj[n][n];    // 隣接行列
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      adj[i][j] = 0;

  for (int i = 0; i < n; i++) {
    // uは頂点番号,kはuの出次数.なお出次数とは頂点から出て行く辺の数を示す
    int u, k; cin >> u >> k;
    for (int j = 0; j < k; j++) {
      int v; cin >> v; adj[u-1][v-1] = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n-1; j++)
      cout << adj[i][j] << " ";
    cout << adj[i][n-1] << endl;
  }
  return 0;
}
