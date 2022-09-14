/*
Progammer - Zachary Luevano
Date Completed - Sep 10, 2022
Instructor - Dr. Mellenthin

Description - Basic manipulators used mainly to alter decimal, text and overall structure of text that's displayed throughout the console.
  

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() 
{
                        // Manipulator Testing

  
                        //setprecision()
// Sets the number of decimales in equations to 1, this does round.
// fixed t the end keeps it as a floating point (0.2) not scientific notation
  //cout << setprecision(2) << fixed;

                        //showpoint
// Doubles have 6-7 deciamls, this does the max
  //  cout << fixed << showpoint;

                        //scientific
// This sets all notation to scientific which also will include the setprecision of prior manipulators.
  //  cout << scientific;

                        //setw()
// Setw works on numbers and strings, setting the width of a specific character count per collumn must be set at the start of something, is right justified in other words.
// In other words it just shifts characters on the console.
  cout << setprecision(0) << fixed;
  cout << setw(40) << "You input is being evaluated...";
  cout << "\n";
  cout << endl;
// you can also use setw with different values on a line.
  cout << "We reccomend testing the following time points - Setw:" << endl;
// This sets 5 space to 10, 7 space to 20 and 50.
  cout << setw(5) << 10 << setw(7) << 20 << setw(7) << 50 << endl;
  cout <<endl;

                        //setw and setfill
// set fill and setw test This just fills the gaps with some character we specifiy.
  cout << "We reccomend testing the following time points - Setfill and setw: \n";
  cout << setw(7) << setfill('*') << 10;
  cout << setw(7) << setfill('*') << 20;
  cout << setw(7) << setfill('#') << 50 << endl;

  
// Define Variables for Equations
  int c0; //Number of initial cases
  double r; //Growth Rate Factor
  double m; //Power of polynomial

//Variables for equations 1 and 2
  double ct; //c(t) =
  double A;  //Equation constant related to baseline prevalance

//Variables for user input
  double t; //Time in weeks

//Initalize inital parameters
  c0 = 10;
  r = 0.2;
  m = 1.65;
  t = 10;
  
// Declare values in text for equation
  cout << "For the model m = " << m << ", c0 = " << c0;
  cout << ", r = " << r << "..." << endl;
  cout <<"\nInput time t [Weeks] for the exponential equation" << endl;

// User inputs time for Weeks
  cin >> t;

              //Conversions and Calculations:
//Convert Day to Weeks
  t = t*7;
// Equation 2 for A
  A = pow(c0, (1/m));
// find c(t) at user specified t (Time)
  ct = pow ( (( r/m)*t + A), m);

              // Display results from equations and user input
  //Output in the form of c(t) = xx where t is shown in weeks
  //Including setprecision(2) makes just this display 2 decimals.
  //Including scientific makes the ct as it follows it.
      //You can have seperate manipulators following diferent points. But       it must ALWAYS come before the acutal calculation.
  //cout << "c (" << t/7.00 <<") = " << scientific << ct << endl;
  //cout << "c (" << t/7.00 <<" = " << setprecision(2) << ct  << endl;
  cout << setw(10) << " c(" << t/7.00 <<") = " << ct << endl;

  
}