#include <iostream>
#include <cmath>

using namespace std;

int main()
{
//Declare Variables
double H30; // Hydronium Ion concentration
double pH;
  
//Obtain User inputs
cout << "Enter hydronium ion concentration moles/liter";
cin >> H30;
  
//Display
pH = -1 * log10(H30);
cout << "The Ph level is " << pH << endl;
}