//File: gratuity_calculator.cpp
//Name: Ashcraft, Kyle
//Date: 1/28/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Calculate gratuity based off selected subtotal and percentage

#include <iostream>

using namespace std;

int main () {
	
	float gratuity, subtotal;
	
	cout << "Enter the subtotal and a gratuity rate: ";
	cin >> subtotal >> gratuity;
	
	gratuity = (gratuity/100)*subtotal;
	
	cout << "The gratuity is $" << gratuity << " and the total is $" << gratuity + subtotal;
	
	return 0;
}
