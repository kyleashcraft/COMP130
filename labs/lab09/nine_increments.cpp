//File: nine_increments.cpp
//Name: Ashcraft, Kyle
//Date: 2/14/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Increment from 0 to 117 in steps of 9 using a for and while loop.

#include <iostream>

using namespace std;

int main(){
	
	cout << "Output from the for-loop... \n";
	
	for(int i = 0; i <= 117; i += 9){
		cout << i << " ";
	}
	
	cout << "\nOutput from the while-loop... \n";
	
	int i = 0;
	
	while(i <= 117){
		cout << i << " ";
		i += 9;
	}
	
	return 0;
}

