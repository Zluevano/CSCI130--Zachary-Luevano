// This is a test with manupulator

#include <iostream>

using namespace std;

int main()
{
int a = 10;
int b = 20;
int c = 10;


  //Comparing variables to one another.//
  
  cout << (a < b) << endl; // Displays 1 as true.
  
  cout << (a > b) << endl; // Displays 0 as false.

  //cout << (a = c) << endl; // Doesn't work as it declared the variable is being set to C

  //Simply means if a is equal to c
  cout << (a == c) << endl;

  cout << (a != c) << endl; // != means if they aren't equal in this case they are equal so its a 0.

  cout << ( (a < b) && (a == c) ) << endl;
    //&& just means and another condition

  cout << ( (c == b) || (a < b) ) << endl;
    // || shows a or like the && is and

  
}