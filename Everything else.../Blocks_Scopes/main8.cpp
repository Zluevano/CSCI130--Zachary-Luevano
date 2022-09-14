# include <iostream>
using namespace std;

int main()
{
// Start of the outer block
  int a = 27;
  int b = 17;
  
    cout << "The value of a = " << a << " And the value of b = " << b 
    << endl;

  cout << endl;
  {
  // Start of inner block
    double a = 46.25;
    double c = 10;

      cout << "The value of a now in the inner = " << a << endl;
      cout << "The value of b now in the inner = " << b << endl;
      cout << "The value of c in the inner = " << c << endl;

    cout << endl;   
  }
//Back to the outer block

  cout << "Back in the outer a is now = " << a << " and b is now = " << b << endl;
  cout << "c doesn't exist here" << endl;

  return 0;  
}