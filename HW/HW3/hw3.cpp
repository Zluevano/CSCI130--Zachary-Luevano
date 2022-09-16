/*
Programmer: Zachary Luevano
Date Finished : 9/16/2022
Course: CSCI 130

Description: Really what this does is add a number N amount of times, each time it adds it takes 1 away. At the end it adds one back to the sum.
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
    cout << value << endl;
    }
  }
}



