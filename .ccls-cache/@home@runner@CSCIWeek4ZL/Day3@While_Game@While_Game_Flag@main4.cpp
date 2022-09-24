Skip to content



zluevano
zluevano
/
CSCI_Week_4_ZL
C++


Run

Invite









Pane Actions

Pane Actions




CPU
RAM
Storage



1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
▼
▼
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
  
//Initalize guess
  guess = -1;
  
//Generate the random number
  srand((time)(NULL)); // initalize random the seed using the time of the computer
                       // NULL just states its not an input
  number = rand() % 100; //Use mode to get a number between 0 and 99
  // cout << number; // Just used to see the number
  
  while (number != guess)
    {
//Prompt user to guess
   cout << "try to guess the number betwene 0-99 enter an int:" << endl;
      cin >> guess;
   cout << "You guessed " << guess << endl;
    
// Check to see if number is corerct   
    if (guess < number)
      cout << "Too small" << endl;
    else if (guess > number)
      cout << "Too large" << endl;
    else // must be correct
      cout << "You did it! :-D" << endl;
    } 
}


Enable "Accessible Terminal" in Workspace Settings to use a screen reader with the console.
Booting ReplReady
CSCI_Week_4_ZL - Replit