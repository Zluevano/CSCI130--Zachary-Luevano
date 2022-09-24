//Description Testing while loop for game that uses a while loop.
//Random number guessing game

//rand () returns an int value between 0 and 32767
//srand used to initalize the random number generator
//These require cstdlib and ctime for clock in 'random' generation

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
//Declare variables
  int number;
  int guess;
  bool FLAG_continue = true;

//Initalize guess
  guess = -1;

//Generate the random number
  srand((time)(NULL)); // initalize random the seed using the time of the computer
                       // NULL just states its not an input
  number = rand() % 100; //Use mode to get a number between 0 and 99
  // cout << number; // Just used to see the number

  while (FLAG_continue) // is FLAG_Continue still 1? Eventually it should be updated to 0
    {
//Prompt user to guess
   cout << "try to guess the number betwene 0-99 enter an int:" << endl;
      cin >> guess;
   cout << "\nYou guessed " << guess << endl;
  
// Check to see if number is corerct   
    if (guess < number)
      cout << "Too small" << endl;
    else if (guess > number)
      cout << "Too large" << endl;
    else // must be correct With flag you must update else to update the flag statment
    {
      cout << "You did it! :-D" << endl;
      FLAG_continue = false;
      }
    } 
}