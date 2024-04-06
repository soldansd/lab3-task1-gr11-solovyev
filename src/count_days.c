//Created by Solovyev Daniil

//This file contains implementations of count_days.h file functions

#include "count_days.h"

int daysInMonth(int month, int year) {
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                return 29; // Leap year
            else
                return 28; // Not a leap year
        default:
            return -1; // Incorrect month
    }
}

long daysSince1970(int day, int month, int year) {
    long days = 0;
    int y;
    for (y = 1970; y < year; y++) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            days += 366; // Leap year
        else
            days += 365; // Not a leap year
    }
    for (int m = 1; m < month; m++) {
        days += daysInMonth(m, year);
    }
    days += day - 1;
    return days;
}

long daysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2) {
    long days1 = daysSince1970(day1, month1, year1);
    long days2 = daysSince1970(day2, month2, year2);
    return days2 - days1;
}