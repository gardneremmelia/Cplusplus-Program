/*
* Emmelia Gardner
* CS-210
* Project One
* Create two clocks that display simultaneously and allow for user input
*/

using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include "Clock.h"

// Displays the clocks 
// @param none
// @returns nothing, but prints the formatted clock display
void printClocks() {
	cout << string(15, '*') << endl;
	cout << "12-Hour Clock" << endl;
	cout << get12HourFormat() << endl;
	cout << string(15, '*') << endl;
	cout << "24-Hour Clock" << endl;
	cout << get24HourFormat() << endl;
	cout << string(15, '*') << endl;
	cout << endl;
}

// Displays the menu
// @param none
// @returns nothing, but prints the formatted menu
void printMenu() {
	cout << string(15, '*') << endl;
	cout << "1 - Add One Hour" << endl;
	cout << "2 - Add One Minute" << endl;
	cout << "3 - Add One Second" << endl;
	cout << "4 - Exit Program" << endl;
	cout << string(15, '*') << endl;
	cout << endl;
}



// Displays the clocks and menu until user quits program by selecting 4, completing the actions provided in the menu when user selects the given choices
// @param none
// @returns 0
int main() {
	int userInput;
	bool quit = false;

	setTime(23, 2, 2); // Set the time

	while (!quit) { // Allow for user input until selects '4'
		printClocks();
		printMenu();
		cin >> userInput; // Get the user choice
		if (userInput == 4) {
			cout << "Good Bye" << endl;
			quit = true;
		}
		else {
			if (userInput == 1) {
				addHour();
			}
			else if (userInput == 2) {
				addMinute();
			}
			else if (userInput == 3) {
				addSecond();
			}
			else { // userInput isn't 1, 2, 3, or 4
				cout << "Invaid choice. Please try again." << endl;
			}
		}
	}

	return 0;
}