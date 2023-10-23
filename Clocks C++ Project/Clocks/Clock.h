/*
* Emmelia Gardner
* CS-210
* Project One
* Create two clocks that display simultaneously and allow for user input
*/

#ifndef ADD_H_INCLUDED
#define ADD_H_INCLUDED
#include <string>

// Sets the initial time of the clock
void setTime(int, int, int);

// Adds an hour to the time
void addHour();

// Adds a second to the time
void addSecond();

// Adds a minute to the time
void addMinute();

// Accesses the format needed to display the clock in 12 hour format, using a temp variable
std::string get12HourFormat();

// Accesses the format needed to display the clock in 24 hour format
std::string get24HourFormat();

// Pads values with leading 0s if value is less than 10
std::string pad(int);

// Determines whether the 12 hour format is AM or PM
std::string getSuffix();

#endif