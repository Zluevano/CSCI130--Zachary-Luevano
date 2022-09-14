
/*
Programmer: Zachary Luevano
Date Finished : 9/11/2022
Course: CSCI 130

Description: Simply calculates the slope from a delta x and delta y

Equation = (y2 - y1)/(x2 - x1) = m
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main ()
{
// Name of Program
  cout << setw(40) << "Calculating Slopes" << endl;

// Initalize Variables
cout << setprecision(5) << fixed;
  
  int x_1, x_2;
  int y_1, y_2;
  double m;
  double x;
  double y;

  
// Prompt user for inputs
  cout << "To Calculate the slope of two lines you need the ∆X and ∆Y" <<
  "\nEnter the first X point and then the second X as whole numbers." << endl;

    // Acquire x values
    cin >> x_1;
    cin >> x_2;

  cout <<"\nNow enter the first Y point and then the second Y as whole numbers." << endl;

// Acquire y Values
    cin >> y_1;
    cin >> y_2;

// Prompts formula to user
  cout << "\nUsing the formula (y2-y1)/(x2-x1) to find the slope m" << endl;

  // Perform calculations
  y = (y_2) - (y_1); // Calculate Delta y
  cout << setw(35) << " ∆y = " << y << endl; //Display Delta y
  x = (x_2) - (x_1); // Calculate Delta x
  cout << setw(35) << " ∆x = " << x << endl; // Display Delta x

  cout << endl; // Add Space
  
  m = (y / x);
  cout << "The resulting slope is:  " << endl << setw(35) << "M = " << m << endl;

return 0;
}
