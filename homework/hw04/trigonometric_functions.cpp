//File: trigonometric_functions.cpp
//Name: Ashcraft, Kyle
//Date: 2/27/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Print fixed point values of sin and cos functions

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	cout << left << setw(8) << "Degree" << setw(10) << "Sin" << setw(10) << "Cos" << endl;
	
	for (int i = 0; i <= 360; i += 10){	
		cout << fixed << setprecision(4) << left;
		cout << setw(8) << i;
		cout << setw(10) << sin(i*M_PI/180);
		cout << setw(10) << cos(i*M_PI/180) << endl;
	}
	
	return 0;
}

