#include <iostream>
#include <fstream> //Needed when dealing with external files
#include <string>
#include <iomanip>

using namespace std;

int main(){
//Declare Variables:
string firstname; //Used for a whole word.
string date;
int TestResult; //Used for just a number.
int count = 0; // Inital count for people tested.
int cumulative_cases = 0; // Inital cases for 0 or 1.

  
//Declare Stream Variables
  ifstream inFile; //Needed to access file we want to load
  ofstream outFile; // Needed to save results of the analysis

//Declare file to open
  inFile.open("TestResultsData.dat"); //Opens the file
  
 //Read the date or in other words the first line of code.
 inFile >> date;
 cout << date << endl;
  
  while(inFile) // Evalutes to true as long as there is data
    {
      //Read in the next line Make sure you read before you update a value to not read from memory

      inFile >> firstname;
      inFile >> TestResult; 

    
      //Update number of cases and Persons tested.
      cumulative_cases = cumulative_cases + TestResult ;
      count++; // Increment the number of cases
    
    }
inFile.close();
cout << " Total number of cases = " << cumulative_cases << endl;
//count - 1 on the count as the first line of 
cout << " Number of persons tested = " << count - 1 << endl;
  }

/* Simply - reading line by line
// Read in the 2 pieces of info on the second line
  inFile >> firstname;
  cout << firstname << " ";
  inFile >> TestResult;
  cout << TestResult << endl;
*/ 