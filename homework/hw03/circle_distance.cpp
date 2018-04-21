//File: circle distance
//Name: Ashcraft, Kyle
//Date: 2/14/2018
//Compiler used: MS Visual Studio 2018
//Purpose: 

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float x1=0, y1=0, x2=0, y2=0, dist=0;
	const float RAD = 6378.1;
	float toRadians(float);
	
	cout << "Enter Point 1 (latitude, longitude) in degrees: ";
	cin >> y1 >> x1;
	
	cout << "Enter point 2 (latitude, longitude) in degrees: ";
	cin >> y2 >> x2;
	
	dist = RAD * acos( sin(toRadians(y1)) * sin( toRadians(y2)) + cos(toRadians(y1)) * cos(toRadians(y2)) * cos(toRadians(x1 - x2) ) );
	
	cout << "The distance between the two points is " << dist << " km";
	
	return 0;
}

float toRadians (float num){
		return num * M_PI / 180;
}

