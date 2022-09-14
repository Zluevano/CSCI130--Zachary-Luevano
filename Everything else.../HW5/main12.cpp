/*
Programmer: Zachary Luevano
Date Finished : 9/11/2022
Course: CSCI 130

Description: Takes two values a and b and organizes them from smallest to largest
The Kattis program was not exact as it didn't specify conditions if A = B
*/

#include <iostream>
using namespace std;
int main()
{
  int a;
  int b;

  cin >> a >> b;
  cout << endl; 

    if ((a < b) && (a >= 0) && (b <= 1000000))
  cout << a << " " << b << endl;  

    else if ((b < a) && (b >= 0) && (a <= 1000000))
  cout << b << " " << a << endl;

    else if (a == b)
  cout << a << " " << b << endl;
      
  else
    cout << "Try again" << endl;

return 0;
}