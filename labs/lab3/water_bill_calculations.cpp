//Written by: Kyle Ashcraft
//Date: 1/31/2018
//Compiler: MS Visual Studio 2018
//Purpose: Calculate water bill based input meter readings, notify of high or low water usage

#include <iostream>

using namespace std;

int main() {
	
	const float MIN_CHARGE = 16.67;
	const int RATE = 7;
	int previousReading = 0, currentReading = 0;
	
	cout << "	WATER BILL CALCULATIONS: " << endl;
	cout << "Enter the current meter readings: ";
	cin >> currentReading;
	cout << "Enter the previous meter readings: ";
	cin >> previousReading;
	
	int gallonsUsed = currentReading - previousReading;
	
	if (gallonsUsed <= 10){
		cout << "LOW WATER USAGE" << endl;
	} else if (gallonsUsed >= 10000){
		cout << "HIGH WATER USAGE" << endl;
	}
	
	cout << "Your montly water bill: $" << gallonsUsed * RATE + MIN_CHARGE;
	
	
	return 0;
}
