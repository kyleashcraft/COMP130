//File: star_pyramid.cpp
//Name: Ashcraft, Kyle
//Date: 2/26/18
//Compiler used: MS Visual Studio 2018
//Purpose: output a star pyramid with sized based on user input

#include <iostream>

using namespace std;

int main(){
	
	int stars = 0;
	
	cout << "Enter a positive integer to determine width of stars in widest column: ";
	cin >> stars;
	
	cout << endl << endl;
	
	for (int line = 1; line <= stars; line++){
		for (int i = 1; i <= line; i++){
			cout << "*";
		}
		cout << endl;
	}
	
	for (int line = stars - 1; line > 0; line--){
		for (int i = line; i > 0; i--){
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}

