/*
Chloe Sciarrone
Project 1: Clocks
*/

#include <iostream>
using namespace std;

void PrintMenu() {	// this function prints the menu options
	cout << endl;
	cout << "**************************" << endl;
	cout << "* 1 - Add One Hour       *" << endl;
	cout << endl;
	cout << "* 2 - Add One Minute     *" << endl;
	cout << endl;
	cout << "* 3 - Add One Second     *" << endl;
	cout << endl;
	cout << "* 4 - Exit Program       *" << endl;
	cout << "**************************" << endl;
	cout << endl;
}

int addHour(int currentHour) {	// adds one hour to standard 12-hour clock
	currentHour += 1;
	if (currentHour > 12) {		// if hour exceeds 12, it loops back to 1
		currentHour = 1;
	}
	return currentHour;
}

int addHourMil(int currentHourMil) {	// adds one hour to 24-hour clock
	currentHourMil += 1;
	if (currentHourMil > 23) {	// if hour exceeds 23, it loops back to 0
		currentHourMil = 0;
	}
	return currentHourMil;
}

int addMinute(int currentMinute) {	// adds one minute to both clocks
	currentMinute += 1;
	if (currentMinute > 59) {	// current minute cannot exceed 59
		currentMinute = 0;
	}
	return currentMinute;
}

int addSecond(int currentSecond) {	// adds one second to both clocks
	currentSecond += 1;
	if (currentSecond > 59) {	// current second cannot exceed 59
		currentSecond = 0;
	}
	return currentSecond;
}

void PrintClocks(int currentHour, int currentHourMil, int currentMinute, int currentSecond) {
	string timeOfDay;	// time of day will determine whether "AM" or "PM" is used for standard clock

	if (currentHourMil >= 0 && currentHourMil <= 11) {	// assigns time of day with "AM" 
		timeOfDay = " AM";
	}
	else if (currentHourMil >= 12 && currentHourMil <= 23) {	// assigns time of day with "PM"
		timeOfDay = " PM";
	}
	else {
		timeOfDay = " ***Mil Time Error***";	// there is an issue with 24-hour clock time if the two previous 'if' conditions are not met
	}
	
	cout << "**************************\t**************************" << endl;
	cout << "*      12-Hour Clock     *\t*      24-Hour Clock     *" << endl;
	
	/* 
	the following if-else branch determines if any values have a 0 in front of them
	this is found by looking at which values are less than 10 (single digit values)
	*/
	if (currentHour < 10 && currentMinute < 10 && currentSecond < 10) {
		cout << "*      0" << currentHour << ":0" << currentMinute << ":0" << currentSecond << timeOfDay << "      *\t";
		cout << "*      0" << currentHourMil << ":0" << currentMinute << ":0" << currentSecond << "          *";
		cout << "**************************\t**************************" << endl;
	}

	else if (currentHour < 10 && currentMinute < 10) {
		cout << "*      0" << currentHour << ":0" << currentMinute << ":" << currentSecond << timeOfDay << "      *\t";
		cout << "*      0" << currentHourMil << ":0" << currentMinute << ":" << currentSecond << "          *";
		cout << "**************************\t**************************" << endl;
	}

	else if (currentHour < 10 && currentSecond < 10) {
		cout << "*      0" << currentHour << ":" << currentMinute << ":0" << currentSecond << timeOfDay << "      *\t";
		cout << "*      0" << currentHourMil << ":" << currentMinute << ":0" << currentSecond << "          *";
		cout << "**************************\t**************************" << endl;
	}

	else if (currentMinute < 10 && currentSecond < 10) {
		cout << "*      " << currentHour << ":0" << currentMinute << ":0" << currentSecond << timeOfDay << "      *\t";
		cout << "*      " << currentHourMil << ":0" << currentMinute << ":0" << currentSecond << "          *";
		cout << "**************************\t**************************" << endl;
	}

	else {
		cout << "*      " << currentHour << ":" << currentMinute << ":" << currentSecond << timeOfDay << "      *\t";
		cout << "*      " << currentHourMil << ":" << currentMinute << ":" << currentSecond << "          *";
		cout << "**************************\t**************************" << endl;
	}
}

int main() {	// main function starts by initializing clock values
	int userInput = 0;	// user input is initialized with 0 so the menu is printed
	int currentHour = 1;
	int currentHourMil = 13;
	int currentMinute = 30;
	int currentSecond = 15;

	while (userInput != 4) {	// unless the user input is 4, the clocks and menu will continue printing
		PrintClocks(currentHour, currentHourMil, currentMinute, currentSecond);
		PrintMenu();
		cin >> userInput;

		switch (userInput) {	// switch case handles user input according to the menu options
		case 1:
			currentHour = addHour(currentHour);		// case 1 adds an hour to both clocks
			currentHourMil = addHourMil(currentHourMil);
			break;
		case 2:		// case 2 adds one minute to both clocks
			currentMinute = addMinute(currentMinute);
			break;
		case 3:		// case 3 adds one second to both clocks
			currentSecond = addSecond(currentSecond);
			break;
		default:	// if one of the previous cases are not selected, a default message is output
			cout << "Please Enter One Of The Menu Options";
			break;
		}
	}
	return 0;	// the while is is broken when input is 4, in this case the program is exited
}