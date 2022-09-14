#include <iostream>
#include <fstream>

using namespace std;

int main() {
  cout << "Creating an output file. Please wait..." << endl;

  //set-up code to create an output file
  ofstream myfile;
  myfile.open ("example.txt"); // The create or opening the file we want

  //output to myfile "example.txt" Look at files to the left
  myfile <<"Did you hear about the monkeys that shared an Amazon account?" << endl;
  myfile <<"..." << endl;
  myfile <<"They were PRIME mates." << endl;
  myfile <<"What happens if I add another line?" << endl;

  myfile.close();
  
}