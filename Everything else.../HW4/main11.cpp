/*
Programmer: Zachary Luevano
Date Finished : 9/11/2022
Course: CSCI 130

Description: Calculates two areas one with cheese to the base or in then case the pizza
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
cout <<setprecision(8) << fixed;
  

int C; // Radius of Pizza crust - Circumference
double CD; 
double CA; // Area of R - C for just the crust - Pizza Area 

int R; // Radius
double PD; // Diameter calculated from radius
double PA; // Area from R and D
  
  
double CH; // Percentage of cheese of pizza of area / area * 100 - Cheese Area
  
double pi;
  pi = 3.14159;

// User Prompt
  cin >> R >> C; // Enter a space apart

// Calculations
  // Pizza calculations
  PD = (R * R);
  PA = (PD * pi);

  // Crust calculations
  CD = (R-C) * (R-C);
  CA = (CD * pi);

  // Crust to Pizza ratio calculations 
  CH = (CA / PA) *100;

  cout << CH << endl; 
}