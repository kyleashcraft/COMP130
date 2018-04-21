// Kyle Ashcraft
// cramer.cpp
// 3/5/2018
// MS Visual Studio 2017
// Solve a 2x2 system of linear equations using Cramer's rule

#include <iostream>

using namespace std;

void solveEquation(double a, double b, double c, double d, double e, double f, double& x, double& y, bool& isSolveable){
	double denominator = a*d - b*c;
	if (denominator != 0){
		x = (e*d - b*f)/denominator;
		y = (a*f - e*c)/denominator;
		isSolveable = true;
	} else {
		isSolveable = false;
	}
	return;
}

int main() {
	
	double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, x = 0, y = 0;
	bool isSolveable;
	
	
	cout << "Enter a, b, c, d, e, f: ";
	cin >> a >> b >> c >> d >> e >> f;

	solveEquation(a, b, c, d, e, f, x, y, isSolveable);	

	if (isSolveable){
		cout << "x is " << x << " and y is " << y << endl;
	} else {
		cout << "The equation has no solution." << endl;
	}
	
	return 0;
}
