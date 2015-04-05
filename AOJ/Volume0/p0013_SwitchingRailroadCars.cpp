#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  vector<int> stack;
  int in;
  while (cin >> in) {
    if (in == 0) {
      cout << stack.back() << endl; stack.pop_back();
    } else
      stack.push_back(in);
  }
    return 0;
}
