#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(void) {
  int n;
  set<string> v;
  set<string>::iterator it;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.insert(s);
  }
  it = v.begin();
  cout << *it << endl;
  return 0;
}
