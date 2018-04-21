//File: fractions.cpp
//Name: Ashcraft, Kyle
//Date: 2/7/18
//Compiler used: MS Visual Studio 2018
//Purpose: Add, subtract, multiply, and divide fractions

#include <iostream>

using namespace std;

int main(){
	
	int option = 0, n1 = 0, d1 = 0, n2 = 0, d2 = 0, num = 0, remainder = 0;
	
	cout << "Fractions" << endl << "=========" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl << endl;
	cout << "Please choose an option (1-4): ";
	
	cin >> option;
	
	switch (option) {
		case 1:
			cout << "For the first fraction," << endl;
			cout << "Please enter numerator: ";
			cin >> n1;
			cout << "Please enter denominator: ";
			cin >> d1;
			cout << endl << "For the second fraction," << endl;
			cout << "Please enter numerator: ";
			cin >> n2;
			cout << "Please enter denominator: ";
			cin >> d2;
			
			if (d1 == 0 || d2 == 0){
				cout << "ERROR: ZERO DIVIDE" << endl;
			} else if (d1 == d2){
				cout << "Result: ";
				
				if ((n1+n2)/d1 > 1){
					num = (n1+n2)/d1;
					remainder = (n1+n2)%d1;
					cout << num;
					remainder == 0 ? cout << endl : cout << " " << remainder << "/" << d1;
				} else {
					cout << n1 + n2 << "/" << d1;
				}
			} else {
				n1 *= d2;
				n2 *= d1;
				d1 *= d2;
				d2 = d1;
				
				cout << "Result: ";
				
				if ((n1+n2)/d1 > 1){
					num = (n1+n2)/d1;
					remainder = (n1+n2)%d1;
					cout << num;
					remainder == 0 ? cout << endl : cout << " " << remainder << "/" << d1;
				} else {
					cout << n1 + n2 << "/" << d1;
				}
			}
			
			break;
		case 2:
			cout << "I will subtract fractions for you later!" << endl;
			break;
		case 3:
			cout << "I will multiply fractions for you later!" << endl;
			break;
		case 4:
			cout << "I will divide fractions for you later!" << endl;
			break;
		default:
			cout << "IMPROPER INPUT: Please use a number 1-4";
			break;
	}
	
	
	return 0;
}
