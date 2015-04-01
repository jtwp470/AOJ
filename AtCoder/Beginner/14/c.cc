#include <iostream>
using namespace std;
#define MAX  1000002

void foo(int *a, int min, int max) {
  a[min]++; // 始点は+1
  a[max+1]--; // 終点は-1
}

void sum(int *a) {
  for (int i = 1; i < MAX; i++)
    a[i] += a[i-1];
}

int max_array(int *a) {
  int max = 0;
  for (int i = 0; i < MAX; i++) {
    if (max < a[i])
      max = a[i];
  }
  return max;
}

int main() {
  int coloring[MAX] = {};
  int n;
  cin >> n;
  int a, b;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    foo(coloring, a, b);
  }

  sum(coloring);
  cout << max_array(coloring) << endl;
  return 0;
}
