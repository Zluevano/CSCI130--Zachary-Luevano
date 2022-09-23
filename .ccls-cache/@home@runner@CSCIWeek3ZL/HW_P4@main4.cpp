#include <iostream>
#include <string>
using namespace std;

int main() {
  // Allocate Space/Define Variables
  char c1, c2;
  int n;

  // For quotes don't forget to use back slash!
  // Prompt and acquiring inputs
  cout << "Please Enter \"A51\":" << endl;

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

  //
  // Now Testing ignore function
  // Ignore instructs to ignore input for a certain string value or when a
  // specific character is found
  //

  // Allocate space for Char and int.
  char c3, c4, c5;
  int m;

  // User Prompt
  cout << endl;
  cout << "Enter a sentences with proper punctuation." << endl;

  // Ignores next 20 characters or until the letter after the first period
  // whichever is first.
  // In the case of '\n' it pulls the first character after a new line, in      // this case its whatever   you character you first enter, it seems to      
  //override   the number.
  
  cin.ignore (20, '\n');
  
  // Save next character that isn't a space or whitespace
  cin >> c3;

  // Display back to user
  cout << "c3 = " << c3 << endl;



  //
  //Now testing the putback and peek function, simply saves a character to     //be used later, peek looks at it, putback replaces something
  //


  char c6, c7, c8, c9, ch_p;
  int b;

  // Clear the input stream as done above
  cin.ignore (100, '\n');
  cout <<"\n";

  //Initalize char for test.
  c8 = 'x';

  //Prompt user for input. 
  cout << "Enter the string \'neat\' " << endl;

  //Look at the input:
  ch_p = cin.peek(); //peek at first place, and put back
  cin.ignore (1, '\n'); //ignores that first place

  cin.get(c6); // Save 2nd place in the string
  cin.ignore(1, '\n'); //ignores 3rd place of neat or 'a'
  cin.putback(c8); //Insert char c8 or 'x'
  cin.get(c7); //Gets the next value in stream, which was just inserted so x
  cin.get(c9); //Obtains last value of 'neat'


  //display this output
  cout <<"ch_p = " << ch_p << endl; 
  cout <<"c6 = " << c6 << endl; 
  cout <<"c7 = " << c7 << endl; 
  cout <<"c9 = " << c9 << endl; 

  //
  //Now Testing inputing a data type string and getline
  //
  
  string teststr, teststr2;

  //Testing with cin
  cout << endl;
  cout <<"What's your favorite food? " << endl; //User Prompt
  cin >> teststr;
  cout <<"You entered: " << teststr << endl;

  //Clear input stream
  cin.ignore (100, '\n');
  cout <<"\n";

  cout <<"What is your favorite beverage?" << endl; //User Prompt
  getline(cin, teststr2); //Gets everything including space
  cout << "You entered: " <<teststr2 << endl;
  

  
}
