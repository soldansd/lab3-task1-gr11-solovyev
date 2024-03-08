//Created by Solovyev Daniil

//This file contains implementations of interface.h file functions

#include "interface.h"

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