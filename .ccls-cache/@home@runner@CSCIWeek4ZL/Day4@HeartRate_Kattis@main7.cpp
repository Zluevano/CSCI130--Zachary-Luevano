// 6 beats in 5 seconds
// Formula = (60 * b)/t
// Max condition 60 * (b+1)/t (2 <= b <= 1000)
// Min condition 60 * (b-1)/t

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
cout << setprecision(4) << fixed;
  
int n; // test cases this just tell you how much to run it.
cin >> n;

//Loop and make min, normal and max calculations
int b; // Beats
double t; //Time in seconds
double mincase;
double normal;
double maxcase;

  
  for (int i =0; i < n; i++)
{
cin >> b >> t; // Input beats and time

  mincase = ((60.0)*(b-1))/t;
  normal = ((60.0)*(b))/t;
  maxcase = ((60.0)*(b+1))/t;

  cout << mincase << " " << normal << " " << maxcase << endl;
  
} 


  
}