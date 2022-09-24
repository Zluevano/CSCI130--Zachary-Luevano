/* Program requirements, any skip pattern form 0 to 15
skip 0. 1 2 - 2 3 - 3 4 down to 31 32 - 32 1
Skip 0, skip 1  skip 2
1 2      1 3    1  4
2 3      2 4    2  5
3 4      3 5    3  6    
4 5      4 6    4  7
...      ...
30 32    30 1   30  2 
31 1     31 2
Skip = increment by 1, skip = 0. For Skip = 1 + 0 + 1 = 2, 2 + 0 + 1, 3 + 0 + 1
Skip 1 = 1 + 1 + 1, 2 + 1 + 1
Skip 2 = 1 + 2 + 1, 2 + 2 + 1
Program must report for each current pattern, which multiplexer, which channel on each multiplaker and which overall electrical signal recieves what.
*/
#include <iostream>

using namespace std;

int main() {
//OP Enter inputs
  int Iplus;
  int Iminus;
  int skip;

//Skip Pattern Have 32 Rows each row is known as a current pattern.
  cout << "Input desired skip pattern," << endl;
  cin >> skip;

  for (int i = 0; i <= 32; i++)
    {
    Iminus = i; //Just relates Iminus to the number of the for loop.
      //Trick to use when numbers wrap
    Iplus = ((i + (skip)%32)+ 1);
      
    cout << "I- = " << Iminus << " ";
    cout << "I + = " <<Iplus << endl;


    

      
    }
}