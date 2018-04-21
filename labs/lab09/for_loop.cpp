//File: for_loop.cpp
//Name: Ashcraft, Kyle
//Date: 2/14/2018
//Compiler used: MS Visual Studio 2018
//Purpose: increment by steps of 20, while less than 100, starting from 10

#include <iostream>

using namespace std;

int main(){
	
	for(int i = 10; i < 100; i += 20){
		cout << i << " ";
	}
	
	return 0;
}

