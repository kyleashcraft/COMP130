//File: driver.cpp
//Name: Ashcraft, Kyle
//Date: 2/28/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Write functions to display pentagonal numbers and compare sums of digits.

#include "sumDigits.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	cout << "Question 1 <100 Pentagonal numbers>..." << endl << endl;

	for (int i = 1; i < 101; i++) {
		cout << setw(8) << getPentagonalNumber(i);
		if (i % 10 == 0) {
			cout << endl;
		}
	}

	cout << endl << "Question 2 <Sum of digits> ..." << endl << endl;

	cout << "sumDigits<123> = " << sumDigits(123) << endl;
	cout << "sumDigits<1234> = " << sumDigits(1234) << endl;
	cout << "sumDigits<0> = " << sumDigits(0) << endl;

	return 0;
}
