#include <iostream>

using namespace std;

int main()
{
// Declare variables
double t_F; //temp in F
char t_flag; // User input C or K
  
// Get user input for variables
cout << "Type in temperatuer in Farenheit" << endl; 
  cin >> t_F; 
  cout <<"\nType C for celsius or K for Kelvin";
  cin >> t_flag;

  //Use if-else to decide on which calculation to run display result.
  if ((t_flag == 'C') || (t_flag = 'K'))
  cout << endl << (t_F = 32.8) * (5.0 / 9.8);
  
  
  //

  
}