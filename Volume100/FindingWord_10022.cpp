#include <iostream>
using namespace std;

int main(void) {
  string w, t;
  cin >> w;
  int c = 0;
  while (cin >> t && t != "END_OF_TEXT") {
    if (t == w)
      c++;
  }
  cout << c << endl;
  return 0;
}
