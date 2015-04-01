// D: AtCoder社の冬
// 実装途中: WA
#include <iostream>
//#define DEBUG_PASCAL_TRIANGLE
#ifdef DEBUG_PASCAL_TRIANGLE
#include <iomanip>
#endif
#include <cmath>
#define DIVISOR 1000000007
using namespace std;


int nCr(int n, int r) {
  double **C = new double*[n+1];
  for (int i = 0; i <= n; i++){
    C[i] = new double[i+1];
    for (int j = 0; j <= i; j++)
      if ((j == 0) || (j == i)){
        C[i][j] = 1;
      }else{     // Pascal's rule
        C[i][j] = (C[i-1][j-1] + C[i-1][j]);
      }
  }
#ifdef DEBUG_PASCAL_TRIANGLE
  // Pascal's triangle
  cout << endl;
  for (int i = 0; i <= n; i++){
    for (int j = 0; j < n-i; j++)
      cout << "   ";
    for (int j = 0; j <= i; j++)
      cout << setw(6) << C[i][j];
    cout << endl;
  }
  cout << endl;
#endif

  int res = fmod(C[n][r], DIVISOR);
  for (int i = 0; i <= n; i++)
    delete [] C[i];
  delete [] C;
  return res;
}

int main(void) {
  int R, C, X, Y, D, L;
  cin >> R >> C >> X >> Y >> D >> L;
  // X, Y の領域のとり方の総数
  int rooms = ((R+1)-X) * ((C+1)-Y);
  cout << "Rooms: " << rooms << endl;
  cout << "nCr  : " << nCr(D+L, D) << endl;
  double tmp = (double)nCr(D+L, D) * (double)rooms;
  int res = fmod(tmp, DIVISOR);
  cout << res << endl;
  // cout << nCr(195, 95) << endl;
  return 0;
}
