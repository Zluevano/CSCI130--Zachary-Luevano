#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

  int input;
  int output = 0;
  int total;
  int temp_int;
  int unique; // # of unique answers
  int a, b, c, d, e, f, g, h, i, j;

  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;

    a = a % 42;
    b = b % 42;
    c = c % 42;
    d = d % 42;
    e = e % 42;
    f = f % 42;
    g = g % 42;
    h = h % 42;
    i = i % 42;
    j = j % 42;
  
  if ((a != b) && (a != c) && (a != d) && (a != e) && (a != f)&& (a != g) && (a != h) && (a != i) && (a != j))
  output ++;
  else
    output --;
  
  if ((b != a) && (b != c) && (b != d) && (b != e) && (b != f) && (b != g)&& (b != h) && (b != i) && (a != j))
  output ++;
 else
    output = output;
  
  if ((c != a) && (c != b) && (c != d) && (c != e) && (c != f) && (c != g)&& (c != h) && (c != i) && (c != j))
  output ++;
 else
    output = output;
  
  if ((d != a) && (d != b) && (d != c) && (d != e) && (d != f) && (d != g)&& (d != h) && (d != i) && (d != j))
  output ++;
 else
    output = output;
  
  if ((e != a) && (e != b) && (e != c) && (e != d) && (e != f) && (e != g)&& (e != h) && (e != i) && (e != j))
  output ++;

  if ((f != a) && (f != b) && (f != c) && (f != d) && (f != e) && (f != g)&& (f != h) && (f != i) && (f != j))
  output ++;
 else
    output = output;
  
  if ((g != a) && (g != b) && (g != c) && (g != d) && (g != e) && (g != f)&& (g != h) && (g != i) && (g != j))
  output ++;
 else
    output = output;
  
  if ((h != a) && (h != b) && (h != c) && (h != d) && (h != e) && (h != f)&& (h != g) && (h != i) && (h != j))
  output ++;
 else
    output = output;
  
  if ((i != a) && (i != b) && (i != c) && (i != d) && (i != e) && (i != f)&& (i != g) && (i != h) && (h != j))
  output ++;
 else
    output --;
  
  if ((j != a) && (j != b) && (j != c) && (j != d) && (j != e) && (j != f)&& (j != g) && (j != h) && (j != i))
  output ++;
 else
    output --;
  
  if (output == 0)
    cout << "1 " << endl;
  else
  cout << output << endl;
  }
/*
  for (int i = 0; i <= 10; i++) {
    cin >> input;

    output = input % 42;

    cout << output;
    cout << endl;
  }
}
*/