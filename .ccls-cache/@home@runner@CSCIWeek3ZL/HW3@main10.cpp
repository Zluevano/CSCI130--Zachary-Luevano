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
  //  double C; // Value of battery capacity (farads) - Apperantly this wasn't part of the equation
  double RC; // Time constant
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
  
  cout << "Enter the time constant" << endl;
  cin >> RC;
  
  cout << "Enter time in seconds after the switch is closed" << endl;
  cin >> t;
  
  cout << "Euler's number is also used \n" <<  e << endl;

//Perform calculations: i = (E/R) e^*(-t/RC)
  //Power function (Number 1, Number 2) number 1 raised to the number 2
  i = ((E/R) * pow(e,((-t) / (RC))));

  cout << setw(50) << "The resulting = " << endl;
  cout << setw(43) << i << " amps" << endl;

return 0; 
}