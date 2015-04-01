#include <iostream>
#include <cmath>

int main(void) {
  int A, B;
  std::cin >> A >> B;
  int t = std::abs(A - B);
  int cc = 0;
  while (t != 0) {
    if (t > 7) {
      cc++; t -= 10;
    }
    else if (t > 2) {
      cc++; t -= 5;
    }
    else {
      cc++; t -= 1;
    }
    t = std::abs(t);
  }
  std::cout << cc << std::endl;
}
