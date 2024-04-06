//Created by Solovyev Daniil

#ifndef COUNT
#define COUNT

//This file contains function protoypes for count_days.c server file

// Function to determine the number of days in a given month
int daysInMonth(int month, int year);

// Function to determine the number of days from 01/01/1970 to a given date
long daysSince1970(int day, int month, int year);

// Function to determine the number of days between two dates
long daysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2);

#endif