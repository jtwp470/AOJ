#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int n;
  cin >> n;
  int hh = n / 3600;
  int mm = (n - hh * 3600) / 60;
  int ss = (n - hh * 3600 - mm * 60) % 60;
  printf("%02d:%02d:%02d\n", hh, mm, ss);
  return 0;
}
