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
float cosx;

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

cosx = cos(deg);
    
  timex = x / (v0 * cosx);
  //timex = ((x) / (v0 * (cos(deg))));
cout << timex << endl;
    
  yt = (((v0 * timex) * sin(deg))) - ((1/2 * g) * pow(timex, 2));
cout << yt << endl;
    
//  if (i + 1 != N)
//    cout << " " << endl;
    
    if  ((yt < h2-1) && (yt > h1+1)) 
      cout << " safe " << endl;
      
    else
      cout << " unsafe " << endl;
 

  
// 19 45 20 9 12 = unsafe
// 20 45 20 9 12 = safe
// 20 45 18.1 9 12
}
}
  