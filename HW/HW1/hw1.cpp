/*
Programmer: Zachary Luevano
Date Finished : 9/15/2022
Course: CSCI 130

Description: Simply uses a bool (r) to evalute several cases as laid out in the book.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
int a;
int b;
int c;
int d;
int e;
bool r; //Result bool gives a 0 or 1.
int re;
  
  
  a = 5; 
  b = 2;
  c = 4;
  d = 6;
  e = 3;
  


// Code is read left to right on line
//r = (a > b); A 1
  
//r = (a != b); B 1
  
//r = ((d % b) == (c & b)); C 1
  
//r = ((a * c) != (d * b)); D 1
  
//r = ((d * b) (c * b)); E 0

//r = !(a *b); F 0

//r = !(a % b * c); G 0
  
//r = !(c % b * a); H 1

r = (b % c * a); // I 1
re = r;

  
cout << r << endl;
  cout << endl;
cout << re << endl;
}