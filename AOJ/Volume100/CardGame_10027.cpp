// Status:AC: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=1272221#2
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  vector<pair<string,string> > v;
  int n; cin >> n;
  v.reserve(n); // n 個の領域を確保しておく
  int taro = 0;
  int hanako = 0;

  for (int i = 0; i < n; i++) {
    pair<string, string> p;
    string a, b;
    cin >> a >> b;
    p.first = a; p.second = b;
    //    v.at(i) = p;
    v.push_back(p);
  }

  for (vector<pair<string,string> >::iterator it = v.begin(); it != v.end(); it++) {
    pair<string, string> p = *it;
    if (p.first > p.second)
      taro += 3;
    else if (p.first < p.second)
      hanako += 3;
    else {
      taro++; hanako++;
    }
  }
  cout << taro << " " << hanako << endl;
  return 0;
}
