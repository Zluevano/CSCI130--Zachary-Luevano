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
int N; // Number of steel rods
int i; // used for for loop
int Li; // Number of length of rods
int total; // Used to calculate 
int Ftotal; // Used to calculate final total
  
total = 0;
cin >> N;

for  (i = 0 ; i < N; i++){
  cin >> Li;
  total += Li-1;



  if (i + 1 != N)
    cout << " " << endl;
    else {
    Ftotal = total + 1;
    cout << Ftotal << endl;
      
      }
  }
/*
  Ftotal = total + 1;
   cout << endl;
  cout <<Ftotal;
*/
}

// Explanation on how this works... 
//So you enter a number cin N (Number of loops) and then a 'for' loop is repeated for the amount of N times adding one (i++) each time its looped, the next step is the input of length of rods (cin Li), this is repeated N times and added each += under a different itneger total, each times a Li is added it -1 from it. After that a 'if' loop is ran to see if i + 1 = N or in other words if the 'for' loop is at N times, if not it will rerun and rerun the loop for however many times is specified by N. If it does = N it will enter a else and will display a new equation Ftotal = total + 1. at which point it simply outputs the value out.

//The total is = 0 as the starting condition, the total is 0 before you enter any values.