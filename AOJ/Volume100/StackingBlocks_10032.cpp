#include <iostream>
#include <stack>
using namespace std;

int main(void) {
  stack<char> st[100];

  string com;
  while (true) {
    cin >> com;
    if (com == "push") {
      char c;
      cin >> c;
      st.push(c);
    } else if (com == "pop") {
      char c = st.top(); st.pop();
      cout << c << endl;
    } else if (com == "quit")
      break;
  }
  return 0;
}
