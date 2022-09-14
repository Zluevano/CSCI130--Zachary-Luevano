//Description: Calculate average steps the while loop just runs forever or until something ends it.
#include <iostream>

using namespace std;

int main ()
{
int sum = 0;
int num;

  //  This is a way to do it, only problem with this is you'd have to copy it a bunch.
  cout << "Enter a number to sum. " << endl;
  cin >> num;


  //while loop used for repition:
  //While (Statment)
  //Then follows the execution
  while (cin)
    {
      sum = sum + num;
      cout <<"Enter a number to sum." << endl;
      cin >> num;
    }
  
  cout << "Sum = " << sum << endl;
  
}