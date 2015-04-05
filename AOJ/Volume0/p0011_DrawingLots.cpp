#include <iostream>
#include <utility>
#include <cstdio>
using namespace std;

int main(void) {
  int w, n;
  cin >> w >> n;
  int amida[w];
  for (int i = 0; i < w; i++) {
    amida[i] = i+1;
  }
  for (int i = 0; i < n; i++) {
    int a, b;
    scanf("%d,%d", &a, &b);
    swap(amida[a-1], amida[b-1]);
  }
  for (int i = 0; i < w; i++) {
    cout << amida[i] << endl;
  }
  return 0;
}
