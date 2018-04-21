//File: future_dates.cpp
//Name: Ashcraft, Kyle
//Date: 2/8/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Determine the current day of the week and future day of the week based off integer inputs.

#include <iostream>

using namespace std;

int main(){
	
	int today = 0, future = 0;
	
	cout << "Enter todays day: ";
	cin >> today;
	cout << "Enter the number of days elapsed since today: ";
	cin >> future;
	cout << "Today is ";
	
	today %= 7;
	
	switch(today){
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		default:
			cout << "Sunday";
	}
	
	cout << " and the future day is ";
	
	future = (today + future) % 7;
	
		switch(future){
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		default:
			cout << "Sunday";
	}
	
	return 0;
}
