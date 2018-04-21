//File: while_loop.cpp
//Name: Ashcraft, Kyle
//Date: 2/14/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Increment a counter by 10, display doubled value

#include <iostream>

using namespace std;

int main(){
	
	int counter = 10;
	
	while (counter < 100){
		cout << counter * 2 << " ";
		counter += 10;
	}
	
	return 0;
}

