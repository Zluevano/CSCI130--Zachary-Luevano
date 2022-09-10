#include <iostream>
#include <cmath>

using namespace std;

int main() {
  //Declare variables
  int n;
  double k;

  //Initalize values:
  k = 10;
  n = 10;

  cout << "Start" << endl;
  cout << "n = " << n << endl;
  cout << "k = " << k << endl;

cout << endl;


// Testing for ++n, adds it as the code runs
  cout << "Start for ++n test" << endl;
  k = ++n;
  cout << "n = " << n << endl;
  cout << "k = " << k << endl;

  cout << endl;
  
  cout << "Start for ++n test" << endl;
  k = ++n;
  cout << "n = " << n << endl;
  cout << "k = " << k << endl;
// end of ++n testing

  cout << endl;

// Testing for n++ adds it after the next declaraiton
    cout << "Start for n++ test" << endl;
  k = n++;
  cout << "n = " << n << endl;
  cout << "k = " << k << endl;

  cout << endl;
  
  cout << "Start for n++ test" << endl;
  k = n++;
  cout << "n = " << n << endl;
  cout << "k = " << k << endl;

  cout << endl;

  cout << "Final display test for n++." << endl;
  cout << "n = " << n << endl;
  cout << "k = " << k << endl;

cout << endl;
  
  cout << "and one more to see what happens" << endl;
  cout << "n = " << n << endl;
  cout << "k = " << k << endl;
// End of test for N++
  
 cout << endl;
  
  cout << "Start for just n-- test" << endl;
  k = n--;
  cout << "n = " << n << endl;
  cout << "k = " << k << endl;
  
}


