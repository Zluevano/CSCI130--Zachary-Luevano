#include <iostream>
#include <string>
using namespace std;

int main() {
  // Allocate Space/Define Variables
  char c1, c2;
  int n;

  // For quotes don't forget to use back slash!
  // Prompt and acquiring inputs
  cout << "Please Enter \"A 51\":" << endl;

  // Prompt and acquire feedback
  // cin >> c1 >> c2 >> n;

  // Prompt and acqurie feedback as desired this allowes any input to be taken
  // even a 'space'
  cin.get(c1);
  cin.get(c2);
  cin >> n;

  // Doesn't work - gives error with Integer
  // cin.get(n);

  // display output:
  cout << "c1 = " << c1 << endl;
  cout << "c2 = " << c2 << endl;
  cout << "c3 = " << n << endl;

  // Now Testing ignore function
  // Ignore instructs to ignore input for a certain string value or when a
  // specific character is found

  // Allocate space for Char and int.
  char c3, c4, c5;
  int m;

  // User Prompt
  cout << endl;
  cout << "Enter 2 sentences with proper punctuation." << endl;

  // Ignores next 20 characters or until the letter after the first period
  // whichever is first.
  cin.ignore(20, '\n');

  // Save next character that isn't a space or whitespace
  cin >> c3;

  // Display back to user
  cout << "c3 = " << c3 << endl;
}
