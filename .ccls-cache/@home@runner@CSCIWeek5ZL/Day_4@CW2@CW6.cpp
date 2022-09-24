//Frog PH values, file from D2L you can get rid of dates as this doesn't ask for time
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
// Identify Variables
double pH;
int Location;
char ch_temp; //Tempoary characters for site
string Date;

// Site Variables
double cumalative1 = 0;
int Site1_count = 0;

double cumalative2 = 0;
int Site2_count = 0;

double cumalative3 = 0;
int Site3_count = 0; 
  
// Declare Stream Variables
ifstream inFile;
ofstream outFile;

// Declare File to Open
inFile.open("FrogPH.txt");

// While loop for data.
  while (!inFile.eof()){
    
  // Pattern in file, 4 letters a _ and a number so just throw away the letters(char
  for (int k = 0; k <5; k++)
    {
      inFile >> ch_temp;  
    }
    
  inFile >> Location;
  inFile >> pH;
  inFile >> Date;
    
//Read in Locaiton, pH and then Date
cout << Location << " " << pH << " " << Date << endl;

//Store things accordingly
    switch(Location){
      case 1: {
      cumalative1 += pH;
      Site1_count++;
      break;  
    }
      case 2: {
      cumalative2 += pH;
      Site2_count++;
      break; 
    }
      case 3: {
      cumalative1 += pH;
      Site3_count++;
      break; 
    }
        
      default: {
      cout << "You done messed up" << endl;
   }
      
  }

    
  cout << "At Site 1 the average pH was " << cumalative2 / Site1_count << endl;
  cout << "At Site 2 the average pH was " << cumalative2 / Site2_count << endl;
  cout << "At Site 3 the average pH was " << cumalative2 / Site3_count << endl;

    
inFile.close(); 
}
}