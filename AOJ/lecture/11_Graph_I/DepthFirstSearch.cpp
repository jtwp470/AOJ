// GraphI - Depth First Search
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_B
#include <iostream>
#include <stack>
//#define RECURSION
using namespace std;

int adj[101][101] = {0}; // 隣接行列
int d[101] = {0};        // vを最初に発見した発見時刻
int f[101] = {0};        // vの隣接リストを調べ終えた完了時刻
int t = 0;
int n;
stack<int> st;
void dfs(int v) {
  d[v] = ++t;
  for (int i = 1; i <= n; i++) {
    if (adj[v][i] == 1 && d[i] == 0) // 辺が接続されていてかつその辺が未訪問である
      dfs(i);
  }
  f[v] = ++t;
}

void dfs_norecursion(int v) {
  d[v] = ++t;
  st.push(v);
  while (!st.empty()) {
    int k = st.top();
    int v = -1;
    for (int i = 1; i <= n; i++) {
      if (adj[k][i] == 1 && d[i] == 0) {
        v = i; break;
      }
    }
    if (v != -1) {
      st.push(v);
      d[v] = ++t;
    } else {
      st.pop();
      f[k] = ++t;
    }
  }
}
int main(void) {
  cin >> n;
  for (int i = 0; i < n; i++) {
    // uは頂点番号,kはuの出次数.なお出次数とは頂点から出て行く辺の数を示す
    int u, k; cin >> u >> k;
    for (int j = 0; j < k; j++) {
      int v; cin >> v; adj[u][v] = 1;
    }
  }

  for (int i = 1; i <= n; i++)
    // 頂点iを訪問していない場合は探索
    if (d[i] == 0) {
    #ifdef RECURSION
      dfs(i);
    #else
      dfs_norecursion(i);
    #endif
    }
  for (int i = 1; i <= n; i++)
    cout << i << " " << d[i] << " " << f[i] << endl;
  return 0;
}
