//File: number_sort.cpp
//Name: Ashcraft, Kyle
//Date: 2/5/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Sort any three numbers in non-descending order

#include <iostream>

using namespace std;

int main(){
	
	int a = 0, b = 0, c = 0;
	
	cout << "Please enter 3 numbers to be sorted: ";
	cin >> a >> b >> c;
	
	if (a >= b) {
		if (a >= c) {
			if (b >= c) {
				cout << c << " " << b << " " << a;
			} else {
				cout << b << " " << c << " " << a;
			}
		} else {
			cout << b << " " << a << " " << c;
		}
	} else {
		if (a >= c) {
			cout << c << " " << a << " " << b;
		} else {
			if (b >= c){
				cout << a << " " << c << " " << b;
			} else {
				cout << a << " " << b << " " << c;
			}
		}
	}
	
	return 0;
}
