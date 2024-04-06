/* hello.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "count_days.h"
#include "count_days.c"

int main (int argc, char* argv[])
{
  if (argc != 7) {
    printf("Incorrect amount of parameters data");
    return 1;
  }

  int day1 = atoi(argv[1]), month1 = atoi(argv[2]), year1 = atoi(argv[3]);
  int day2 = atoi(argv[4]), month2 = atoi(argv[5]), year2 = atoi(argv[6]);

  if(day1 == 0 || month1 == 0 || year1 == 0 ||
     day2 == 0 || month2 == 0 || year2 == 0 || 
     day1 > 31 || month1 > 12 || day2 > 31 || month2 > 12)
  {
    printf("Incorrect input data");
    return 2;
  }

  long days = daysBetweenDates(day1, month1, year1, day2, month2, year2);

  if (days < 0) {
    printf("Second date should be more or equal to first date");
    return 3;
  }

  printf("Amount of days between dates: %ld\n", days);

  return 0;
}
