#include <iostream>
using namespace std;

int next_digit(int d) {
  if (d == 9)
    return 0;
  return ++d;
}

int prev_digit(int d) {
  if (d == 0)
    return 9;
  return --d;
}

int dist_dec(int a, int b) {
  int c = 0;
  while (a != b) {
    c++;
    a = prev_digit(a);
  }
  return c;
}

int dist_inc(int a, int b) {
  int c = 0;
  while (a != b) {
    c++;
    a = next_digit(a);
  }
  return c;
}

int min(int a, int b) {
  if (a > b)
    return b;
  else
    return a;
}
int main() {
  int a, b;
  cin >> a >> b;
  cout << min(dist_inc(a, b), dist_dec(a, b)) << endl;
  return 0;
}
