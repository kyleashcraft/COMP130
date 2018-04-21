//File: multiplication_array.cpp
//Name: Ashcraft, Kyle
//Date: 2/26/18
//Compiler used: MS Visual Studio 2018
//Purpose: Use loops to display a 2d multiplication table

#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main(){
	
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	
	cout << setw(4);
	
	for (int i = 1; i < 5; i++){
		SetConsoleTextAttribute(handle, i+2);
		cout << setw(4);
		for (int j = 0; j < 10; j++){
			cout << setw(4) << i*j;
		}
		cout << endl;
	}
	
	return 0;
}

