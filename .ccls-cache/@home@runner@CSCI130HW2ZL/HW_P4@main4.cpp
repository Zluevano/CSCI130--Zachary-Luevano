/*
This progam is used to calculate the radius of a bike crank arm.
Works using imperial units with a conversion of MM to In
*/ 

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  cout << "Calculating Bike Crank Radius" << endl;
  cout << endl; //Used for Space on Console

  // Initalize Variables
  double L, P, S, R; // MM, LB, PSI, In
  const double Pi = 3.14159265359; //Used for Calculating Radius
  

  // Prompt User for Length (L) Force (P) and Stress (S)
  
  //Obtain Length in MM
  cout << "Input length in MM." << endl;
  cin >> L;
  cout << " Length = " << L << "MM" << endl;
   
  cout << endl; //Used for Space on Console

  //Obtain Force in LB
  cout << "Input Force in Pounds = " << endl;
  cin >> P;
  cout << "Force  = " << P << "Lb" << endl;

  cout << endl; //Used for Space on Console

  //Obtain Stress in PSI
  cout <<"Input Stress in PSI = " << endl;
  cin >> S;
  cout << "Stress in PSI = " << S << endl;

  cout <<endl; //Used for Space on Console

  //Used to Calculate MM to IN
  double L_in = L/25.4;
  cout << "Length in In = " << L_in << "In" << endl;
  
  cout <<endl; //Used for Space on Console

  //Calculate R - Radius in IN
  R = cbrt((P*L_in)/(Pi*S));

  //Display Radius
  cout << "Radius in In = " << R << endl;

return 0;
  
  
  

}
