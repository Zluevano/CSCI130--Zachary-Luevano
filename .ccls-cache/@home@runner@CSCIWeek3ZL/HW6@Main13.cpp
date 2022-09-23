#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{

cout << setprecision(2);
int H;
int M;

  cout << "Please enter time in hours and then Minutes" << endl;
  cin >> H >> M;
  M = (M - 45);
  cout << endl;


  if ((H >= 0) && (H < 24) && (M >= 0) && (M < 60)){
  if (H == 0) {
    H = 24;
  }

  if (M < 0){
    H--;
  }
    cout << H << " "<< M << endl;
    
    }
    
     cout << H << " "<< M << endl;
    }
 

/*
  if (H == 0){
    H = 24;
    } 
  if (M < 0) {
  H = H - 1;
  }
      cout << H << " " << M << endl;

    
    }
    }
*/