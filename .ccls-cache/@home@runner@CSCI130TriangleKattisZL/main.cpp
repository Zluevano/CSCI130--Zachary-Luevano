//Kattis problem to calculate the area of a triangle.
#include <iostream>
using namespace std;

int main() 
{
  //Read in h (height) and b (base)
  int h, b;
  double a; // Area

  cin >> h >> b;

  //Calculate Area
  a = 0.5*h*b;
  
  cout << a;
}