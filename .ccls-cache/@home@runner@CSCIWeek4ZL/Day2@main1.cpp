//Last week's Spavanac problem done in class for HW week 3

#include <iostream>

using namespace std;

int main()
{
// Inputs
int hours, minutes;
cin >> hours >> minutes;

//outputs
  int alarm_hours, alarm_mins;

  if (minutes < 45)
  {
  alarm_hours = hours - 1;
  alarm_mins = minutes + 60 - 45;
    
  }  else // mins >= 45
  alarm_hours = hours;
  alarm_mins = minutes - 45;
  {

  }
  if (alarm_hours == -1)
    alarm_hours = 23;
cout <<alarm_hours << " " << abs(alarm_mins);


  
}