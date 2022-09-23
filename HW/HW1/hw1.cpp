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
  else if (a == b)
    cout << "a = " << a << " is equal to " << b << endl;
    
  else {
    cout << "That's it! " << a << " is less than " << b << endl;
    FLAG_Result = false;
    
      }
    }
  }