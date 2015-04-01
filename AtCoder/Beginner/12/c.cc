#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i < 10; i++)
    for (int j = 1; j < 10; j++)
      sum += i * j;
  int target = sum - n;
  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      if (target == i * j)
        cout << i << " x " << j << endl;
    }
  }
  return 0;
}
