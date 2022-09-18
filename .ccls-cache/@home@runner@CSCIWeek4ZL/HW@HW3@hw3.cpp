/*
Programmer: Zachary Luevano
Date Finished : 9/16/2022
Course: CSCI 130

Description: Somewhat harder to program, thank goodness for that help on Friday, what this does is you enter a number that is the number of test cases, after that you enter however many N cases and it calculates the last digit of the factorial by doing a modulus division of 10.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

int fac_value;
int T; // Number of test cases

cin >> T;

// i needs to be 1 here as if it's 0 it will just multiply by zero at the end
  

for (int i = 0 ; i < T; i++){
  cout << "Enter the value to !" << endl;
  cin >> fac_value;
  int value = 1;
  
//Make the calculations:
  for (int K = 0; K < fac_value; K++){
    value = value * (K + 1);

  
  if (i != T)
    cout << " " << endl;
    }
  if (value <= 6)
    cout << value % 10 << endl;
  else
    cout << value % 10 << endl;
  }
  return 0;
}



