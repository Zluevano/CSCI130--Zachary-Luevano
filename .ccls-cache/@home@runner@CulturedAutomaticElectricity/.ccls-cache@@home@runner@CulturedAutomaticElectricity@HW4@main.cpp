#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

  int input;
  int output = 0;
  int total;
  int temp_int;
  int unique; // # of unique answers
  int a, b, c;

  cin >> a >> b >> c;

  int mod = 42;
    a = a % mod;
    b = b % mod;
    c = c % mod;
  
  //I made this way late at work through alot of brute force so I too am confused how it even works, I think... if a doesn't equal b or c it adds one because it's unique, if it isn't unique and adds 
  
  if ((a != b) && (a != c))
    output ++;
  else if ((a == b) && (a == c))
    output ++;
  else
    output ++;
  //else if (a == c)
    //output ++;
  
    cout << output << endl;

  if ((b != a) && (b != c))
    output ++;
  else if ((b == a) && (b == c))
    output ++;
  //else if ((b == a) && (b == c))
  //output ++;
  
  cout << output << endl;

  if ((c != a) && (c != b))
    output ++;
  else if ((c == a) && (c == b))
    output ++;
  //else if ((c == b) && (c == a))
  //  output ++;

  if ((a == b) && (a == c))
    output = 1;
    cout << output << endl;


  
  cout << endl;
  if (output <= 0)
    cout << "One " << endl;
  else
  cout << output << endl;
  }
/*
  for (int i = 0; i <= 10; i++) {
    cin >> input;

    output = input % 42;

    cout << output;
    cout << endl;
  }
}
*/