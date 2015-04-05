// Accept: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=1273486#1
#include <iostream>
using namespace std;

int main(void) {
  string s;
  while (getline(cin, s)) {
    // theかthis, thatが見つかるまで一文字ずつずらしていく
    while (s.find("the") == string::npos &&
           s.find("this") == string::npos &&
           s.find("that") == string::npos) {
      for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'z')
          s[i] = 'a';
        else if (s[i] >= 'a' && s[i] <= 'z')
          s[i]++;
      }
    }
    cout << s << endl;
  }
  return 0;
}
