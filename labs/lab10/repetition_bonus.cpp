//File: repetition_bonus.cpp
//Name: Ashcraft, Kyle
//Date: 2/27/18
//Compiler used: MS Visual Studio 2018
//Purpose: Output an upwards pointing triangle based off of the length of one equilength side's length.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int number = 0, diff = 0;
	
	cout << "Enter a baseline number for your pyramid: ";
	cin >> number;
	
	cout << endl;
	
	for (int i = 1; i <= number; i++){
		diff = number - i;
		for (int j = 1; j <= number; j++){
			j > diff ? cout << setw(2) << "*" : cout << setw(2) << " ";
		}
		for (int j = 0; j < i; j++){
			cout << setw(2) << "*";
		}
	
		cout << endl;
	}
	
	return 0;
}

