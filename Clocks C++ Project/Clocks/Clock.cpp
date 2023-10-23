/*
* Emmelia Gardner
* CS-210
* Project One
* Create two clocks that display simultaneously and allow for user input
*/

#include "Clock.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

int hours;
int minutes;
int seconds;

// Sets the initial time of the clock
// @param 3 integer values; h, m, s - assigned to hours, minutes, and seconds
// @returns no data because this method is a setter
void setTime(int h, int m, int s) {
	hours = h;
	minutes = m;
	seconds = s;
}

// Adds an hour to the time
// @param none
// @returns no data because this method is a setter
void addMinute() {
	if ((minutes >= 0) && (minutes <= 58)) {
		minutes += 1;
	}
	else { // if minutes = 59
		minutes = 0;
		addHour();
	}
}

// Adds a second to the time
// @param none
// @returns no data because this method is a setter
void addSecond() {
	if ((seconds >= 0) && (seconds <= 58)) {
		seconds += 1;
	}
	else { // if seconds = 69
		seconds = 0;
		addMinute();
	}
}

// Adds a minute to the time
// @param none
// @returns no data because this method is a setter
void addHour() {
	if ((hours >= 0) && (hours <= 22)) {
		hours += 1;
	}
	else {
		hours = 0;
	}
}

// Accesses the format needed to display the clock in 12 hour format, using a temp variable
// @param none
// @returns padded 12 hour format and suffix
std::string get12HourFormat() {
	int tempHours;
	if (hours == 0) {
		tempHours = 12;
	}
	else if (hours > 12) {
		tempHours = hours - 12;
	}
	else {
		tempHours = hours;
	}
	return pad(tempHours).append(":") + pad(minutes).append(":") + pad(seconds).append(" ") + getSuffix();
}

// Accesses the format needed to display the clock in 24 hour format
// @param none
// @returns padded 24 hour format
std::string get24HourFormat() {
	return pad(hours).append(":") + pad(minutes).append(":") + pad(seconds).append(" ");
}


// Pads values with leading 0s if value is less than 10
// @param an integer value  
// @returns the integer value called, with a leading 0
std::string pad(int value) {
	std::string str = std::to_string(value);
	std::ostringstream ss;
	ss << std::setw(2) << std::setfill('0') << str; // pad with leading 0
	std::string s = ss.str();
	return s;
}

// Determines whether the 12 hour format is AM or PM
// @param none
// @returns 'AM' (if hours is less than 12) or 'PM'
std::string getSuffix() {
	if (hours < 12) {
		return "A.M.";
	}
	else {
		return "P.M.";
	}
}
