/*
Programmer: Zachary Luevano
Date Finished : 9/15/2022
Course: CSCI 130

Description: Uses a while loop and if functions to determine two values that are either > than, < than, or == to.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
int a;
int b;
bool FLAG_Result = true;



  while (FLAG_Result == true){
    cout << "\nEnter A and then B:" << endl;
      cin >> a;
      cin >> b;

  if (a > b)
    cout << "a = " << a << " is greather than b =  " << b << endl;
  else if (a < b)
    cout << "a = " << a << " is less than " << b << endl;

// If they are equal the result is simply repeating itself.
    
  else {
    cout << a << " is equal to " << b << endl;
      }
    }
  return 0;
  }