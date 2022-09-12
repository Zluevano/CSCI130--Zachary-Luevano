#include <iostream>
using namespace std;
int main()
{
  int a;
  int b;

  cin >> a >> b;
  cout << endl; 

  if 
    ((a < b) && (a >= 0) && (a <= 1000000) && (b <= 0) && (b <= 1000000))
      //((a < b) && (a >= 0) && (b <= 1000000))
  cout << a << " " << b << endl;  

  else
    cout << b << " " << a << endl;

/*
  else if
     ((b < a) && (b >= 0) && (a <= 1000000))
  cout << b << " " << a << endl;
    
  else
  cout << "Try again" << endl;
*/
  
  return 0;

}