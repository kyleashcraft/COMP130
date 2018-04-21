//File: miles_to_km.cpp
//Name: Ashcraft, Kyle
//Date: 2/14/2018
//Compiler used: MS Visual Studio 2018
//Purpose:

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << left << setw(8) << "Miles" << "Kilometers" << endl;
	
	for (int i = 1; i < 11; i++){
		cout << left << setw(8) << setprecision(5) << showpoint;
		cout << i << i * 1.609 << endl;
	}
	
	return 0;
}

