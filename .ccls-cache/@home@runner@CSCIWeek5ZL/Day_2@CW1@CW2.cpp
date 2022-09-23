#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main (){
  ifstream infile; //Declare input stream variable
  char ch; //read in chars
  
  infile.open("aSuperSong.dat"); // open file
  infile.get(ch); // Get the first character

  //This just will ask, if you reached the end or not.
  while (!infile.eof()) //This will return a 1 or 0, stop when reach end
    {
      cout << ch; //Display the character
      infile.get(ch);  
    } 
}