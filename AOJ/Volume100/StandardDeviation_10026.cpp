#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <cstdio>
using namespace std;

int main(void) {
  int n;
  cin >> n;

  while (n != 0) {
    vector<int> students(n);
    for (int i = 0; i < n; i++) {
      int t; cin >> t; students.at(i) = t;
    }
    double sum = accumulate(students.begin(), students.end(), 0);
    double ave = sum / (double)n;
    double alpha = 0.0;
    for (int i = 0; i < n; i++) {
      alpha += pow(((double)students.at(i) - ave), 2);
    }
    alpha = alpha / (double)n;
    printf("%.8f\n", sqrt(alpha));
    cin >> n;
  }
  return 0;
}
