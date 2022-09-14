#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
  int H;
  int M;
  int NM;
  int NH;
  
  cin >> H >> M;

  M = M + 15;
  
  if (M/60 == 0) {
    H = H - 1;
  }
  else {
  M = M / 60;
  }

  if (H < 0){
  H = H + 24;
  }
  cout << H << " " << M;
    return 0;
}