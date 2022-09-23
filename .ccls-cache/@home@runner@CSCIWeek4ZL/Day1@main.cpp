#include <iostream>
#include <cmath>
using namespace std;
/*
int main(){

// Example A from packet - Practice with Switch
int n = 0;
// This only does the case in which the int n = to, in this case its always case 0
  
switch (n){ // N <=2 is always 


  
  case 0:
    cout << "You won rock, paper, scissors." << endl;
    break;
  
  case 1:
    cout << "The result is a tie, try again." << endl;
    break;

  case 2:
    cout << "Today is not your day, try again." << endl;
    break;
  }
}
*/

//Example B from packet - switch
//Whatever the switch states will go to that case.
/*
int main(){

  int dig = 24;
  switch (dig/8){

    case 0:
      cout << "The flow is low." << endl;
      break;
    case 1:
      cout << "The flow is low." << endl;
      break;
    // case 1: DUPLICATE CASE.
    case 2:
      cout << "The flow is normal." << endl;
      break;
    case 3:
      cout << "The flow is high." << endl;
      break;
    default:
      cout << "Dig exceeds 15. Try again" <<endl; 
    }
}
*/

// Example c from practice with switch
int main(){
int p19 = -8;

  switch (p19 % 4) {
    case 0:
      cout << "P19 is divisible by 4. " << endl;
      break;
    case 1:
    case 2:
    case 3:
      cout << "The remainder of " << p19 << " / 4is" << p19 % 4 << endl;
      break;
    default:
      cout << "Something is wrong. Line 71" << endl;  
  }
}