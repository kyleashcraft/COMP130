//File: feet_to_meters.cpp
//Name: Ashcraft, Kyle
//Date: 1/28/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Feet to meters conversion

#include <iostream>

using namespace std;

int main() {
	
	float feet, meters;
	
	cout << "Enter a value for feet: ";
	cin >> feet;
	
	meters = feet * 0.305;
	
	cout << feet << " feet is " << meters << " meters";
	
	return 0;
}
