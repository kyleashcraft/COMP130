//Programmers: Kyle Ashcraft, Henri Genesti
//Date 1/24/18
//Purpose: lab 2


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float radius, area, volume, height;
	
	const float PI = 3.14159;
	
	cout << "Enter the radius and length of a cylinder: ";
	cin >> radius >> height;
	
	area = pow(radius, 2) * PI;
	
	volume = area*height;
	
	cout << "The area is " << area << endl;
	cout << "The volume is " << volume << endl;
		
	return 0;
}
