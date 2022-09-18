/*
Programmer: Zachary Luevano
Date Finished : 9/17/2022
Course: CSCI 130

Description: Performs two physics equations first is 
X = V0(t)(cos)(theta)) rewritten to find t.
Y = V(t) = V0(t)(sin(theta))-(1/2)(g)(t)^2

Consists of an input of velocity (v0), deg (Degree, x (Distance to target), h1(Height of wall from bottom to hole), h2(height of wall from top to bottom)
I also used several other variables: degr is the conversion of degrees into radians for C++, yt is simply the height at the end of the Y = equations, g is used at = 9.81, and lastly timex is used for finding time from x.

The ball being launched needs to have a 1.0 gap from the top of the wall and 1.0 gap from the bottom, this simply results in the height being added +1 for the top (h2) and -1 for the bottom (h1).
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
int N; // Number of test cases
  
float v0; // Inital velocity
float deg; // Degree of launch
float x; // Distance to wall
float h1; //Lower portion of wall ------
float h2; //Upper portion of wall           ------ Fit between this gap
float degr; // Degrees to radians
float yt; //Declare y position
float g = 9.81; //Gravity constant

// Only given the x coordinate however this is the part where you can find time.
// x(t) = V0(t)cos(deg)
// x(t)/V0*cos(deg) = t

float timex; // Time from x position
  
cin >> N;

  for (int i = 0; i < N; i++){
  // Input velocity, angle, x distance, lower height of wall, upper height of wall
  cin >> v0 >> deg >> x >> h1 >> h2;

deg = (deg * (3.141592/180));   
timex = x / (v0 * cos(deg));

//tsqr = (pow(timex, 2));

    yt = (v0 * timex * sin(deg) - (0.5 * g * (pow(timex, 2))));  
//  yt = ((v0 * timex * sin(degr))) - ((1/2 * g) * tsqr);
    
//  if (i + 1 != N)
//    cout << " " << endl;
    
    if  ((yt < h2-1) && (yt > h1+1)) 
      cout << "Safe" << endl;
      
    else
      cout << "Not Safe" << endl;
 

  
// 19 45 20 9 12 = unsafe
// 20 45 20 9 12 = safe
// 20 45 18.1 9 12
}
}
  