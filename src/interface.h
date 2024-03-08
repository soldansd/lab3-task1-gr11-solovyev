//Created by Solovyev Daniil

#ifndef INTERFACE
#define INTERFACE

//This file contains function protoypes for server.c server file

// Function to determine the number of days in a given month
int daysInMonth(int month, int year);

// Function to determine the number of days from 01/01/1970 to a given date
long daysSince1970(int day, int month, int year);

#endif