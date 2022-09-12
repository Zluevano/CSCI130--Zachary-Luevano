#include <iostream>
using namespace std;
int main ()
{
//Declare Variables:
  double T_F;
  char T_Flag;

//Prompt user for input
  cout << "Type in a temp in Farenheit: ";  
    cin >> T_F;
  cout << "\nType C for celsius or K for Kelvin.";
    cin >> T_Flag;

// Else if Statment:
  if (((T_Flag == 'C')) || (T_Flag == 'c'))
    cout << endl << (T_F - 32.0) * (5.0 / 9.0) << "  Degrees C" << endl;

  else if 
      (((T_Flag == 'K')) || (T_Flag == 'k'))
      cout << endl << (T_F - 32) * (5.0 / 9.0) + (273.15) << " Degrees K = " << endl; 

  else
    cout << endl << "Try again" << endl;
  return 0;
}