//File: quadratic_roots.cpp
//Name: Ashcraft, Kyle
//Date: 2/5/2018
//Compiler Used: MS Visual Studio 2018
//Purpose: Compute quadratic roots with 3 numbers input by the user

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float a = 0, b = 0, c = 0, discriminant = 0, root1= 0, root2 = 0;
	
	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;
	
	discriminant = pow(b, 2) - 4*a*c;
		
	if (discriminant == 0){
		root1 = -b / 2*a;
		
		cout << "The root is " << root1;
	} else if (discriminant > 0){
		root1 = (-b + pow(discriminant, 0.5) ) / 2*a;
		root2 = (-b - pow(discriminant, 0.5) ) / 2*a;
		
		cout << "The roots are " << root1 << " and " << root2;
	} else {
		cout << "The equation has no real roots";
	}
	
	return 0;
}
