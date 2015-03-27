#include <iostream>
#include <stack>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  stack<char> st[n];

  string com;
  while (true) {
    cin >> com;
    
    if (com == "push") {
      int num; char c;
      cin >> num >> c;
      st[num-1].push(c);
    }
    else if (com == "pop") {
      int num; cin >> num;
      char c = st[num-1].top(); st[num-1].pop();
      cout << c << endl;
    }
    else if (com == "move") {
      int p1, p2; cin >> p1 >> p2;
      char c = st[p1-1].top(); st[p1-1].pop();
      st[p2-1].push(c);
    }
    else if (com == "quit")
      break;
  }
  return 0;
}
