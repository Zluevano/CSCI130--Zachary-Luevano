#include <iostream>
using namespace std;

int main() 
{
  // Initialize Variables
  char ch1, ch2;
  int val;

  //Prompt User to type in "A=51"
  cout << "Type the following \"A 51\":";

  //Read the Values
  cin >> ch1 >> ch2 >> val;

  //Show what was stored
  cout << "ch1 = " << ch1 << endl;
  cout << "ch2 = " << ch2 << endl;
  cout << "val = " << val << endl;
}