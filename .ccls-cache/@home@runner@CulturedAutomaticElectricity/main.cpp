#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

  int input;
  int output = 0;
  int a, b, c;

  cin >> a >> b >> c;

    a = a % 42;
    b = b % 42;
    c = c & 42;

if ((a != b) && (a != c)) 
  ++output;

if ((b != a) && (b != c))
  ++output;

if ((c != a) && (c != b))
  ++output ;

cout << output << endl;
  
 if (output == 0)
    cout << "1 " << endl;
  else
  cout << output << endl;
  }