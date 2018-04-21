//File: hexadecimal.cpp
//Name: Ashcraft, Kyle
//Date: 2/14/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Convert a hexadecimal digit to a decimal digit

#include <iostream>

using namespace std;

int main(){
	
	char hexadecimal = ' ';
	
	cout << "Enter a hexadecimal character 0-9 or A-F OR a-f: ";
	cin >> hexadecimal;
	
	hexadecimal = toupper(hexadecimal);
		
	if ( (int)hexadecimal >= 48 && (int)hexadecimal <= 57) {
		cout << "Decimal equivalent: " << (int)hexadecimal - 48;
	} else if ( (int)hexadecimal >= 65 && (int)hexadecimal <= 70) {
		cout << "Decimal equivalent: " << (int)hexadecimal - 55;
	} else {
		cout << "Invalid input!";
	}
	
	return 0;
}

