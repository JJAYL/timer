/* time example */
#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, struct tm, difftime, time, mktime */
#include <iostream>

double delaySeconds(double sec) {

	double seconds;
	time_t timeBegin, timeNow;
  
	time(&timeBegin);

   for(seconds=0;seconds<sec;) {
	  time(&timeNow);
	  seconds = difftime(timeNow,timeBegin);
  }
	return seconds;
}

int main ()
{
	int d;
	std::cout<<"input a numeber to start the timer";
	std::cin>> d;
	double sec;

  sec=delaySeconds(360);
  printf ("%.f Aegis has expired \n \a", sec);
  sec=delaySeconds(480);
  printf ("%.f Roshan has spawned \n \a", sec);

  return 0;
}