#include <iostream>

using namespace std;

int main()
{
  bool i = true;
  bool j = false;

// Simply repeats whatever the value of i and j are
  cout << "i = " << i << endl;
  cout << "j = " << j << endl;
  cout << "j = " << i << endl;
  cout << "i = " << j << endl;
  
  char char1 = '9';
  int myInt = 9;

cout << endl;
  cout << " This is how char1 is stored. " << char1 << endl;
  cout << " In ASCII this is the integer value. " << static_cast <int>(char1) << endl;

cout << endl;

// Does char1 equal myInt?
  cout << (char1 == myInt) << endl; 
// False because the int value of char1 of 9 is 57 for ASCII
  
  int a, b, c;
    a = 10;
    b = 33;
    c = 42;

// Does c NOT = b and is a+b > c?
  cout << (( c!= b) || ((a+b) > c)) << endl;
  
  



  
}