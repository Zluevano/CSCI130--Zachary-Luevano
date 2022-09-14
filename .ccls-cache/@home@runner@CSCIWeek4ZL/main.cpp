#include <iostream>
using namespace std;

int main()
{
int n = 0;
  
switch (n) // N <=2 is always 
{
  cin >> n;
  
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