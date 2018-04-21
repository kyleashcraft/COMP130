//File: 5_and_6.cpp
//Name: Ashcraft, Kyle
//Date: 2/8/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Determine a number's divisibility by 5 and 6

#include <iostream>

using namespace std;

int main(){
	
	int number = 0;
	
	cout << "Enter an integer: ";
	cin >> number;
	
	cout << "Is " << number << " divisible by 5 and 6? ";
	(number % 5 == 0 && number % 6 == 0) ? cout << "true" : cout << "false";
	
	cout << endl;
	
	cout << "Is " << number << " divisible by 5 or 6? ";
	(number % 5 == 0 || number % 6 == 0) ? cout << "true" : cout << "false";
	
	cout << endl;
	
	cout << "Is " << number << " divisible by 5 or 6, but not both? ";
	((number % 5 == 0 && number % 6 != 0) || (number % 5 != 0 && number % 6 == 0)) ? cout << "true" : cout << "false";
	
	return 0;
}
