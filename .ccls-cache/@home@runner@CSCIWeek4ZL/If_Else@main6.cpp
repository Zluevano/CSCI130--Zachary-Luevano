#include <iostream>
using namespace std;

int main()
{
// Declare variables
double T_F; //temp in F
char T_Flag; // User input C or K
  
// Get user input for variables
cout << "Type in temperatuer in Farenheit" << endl; 
  cin >> T_F; 
  cout <<"\nType C for celsius or K for Kelvin ";
  cin >> T_Flag;

  //If C or c is entered it displays the following below, if its anyone else then it will display Kelvin
  if ((T_Flag == 'C') || (T_Flag == 'c'))
    cout << endl << (T_F - 32.0) * (5.0 / 9.0) << "Degrees C" << endl;  
    else
     cout << endl
          << (((T_F - 32.0) * (5.0 / 9.0)) +273.15) << "Degrees Kelvin" << endl;


return 0;   
}