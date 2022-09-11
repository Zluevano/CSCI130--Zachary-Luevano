/*
i = (E/R) e^*(-t/RC)
*/
#include <iostream>
#include  <cmath>
#include <iomanip>

using namespace std;

int main ()
{
//Prompt user of program description:
  cout << setw(62) << "Use to calculate the current based on time" << endl;
  
//Intalitize Variables:
  double i; // main function
  double E; // Battery voltage (volts)
  double R; // Value of resistor (ohms)
  double C; // Value of battery capacity (farads)
  double t; // time (seconds) after switch is closed
  double e; // Eurlers number
    e = 2.71828;

//Prompt user for input
  cout << setw(60) << "Please enter the following parameters:" << endl;
  cout << endl;

  cout << "Enter voltage of battery in volts" << endl;
  cin >> E;
  cout << "Enter resistance of resistor in ohms" << endl;
  cin >> R;
  cout << "Enter battery capacity in farads" << endl;
  cin >> C;







  
}
