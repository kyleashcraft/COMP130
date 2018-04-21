//File: pentagon.cpp
//Name: Ashcraft, Kyle
//Date: 2/12/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Calculate area of a pentagon

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float length = 0, side = 0, area = 0;
	
	cout << "Enter the length from the center to a vertex: ";
	cin >> length;
	
	side = 2*length*sin(M_PI/5);
	area = (5 * pow(side,2))/(4 * tan(M_PI/5));
	
	cout << "The area of the pentagon is " << static_cast<int>(area*100)/100.0;
	
	return 0;
}
