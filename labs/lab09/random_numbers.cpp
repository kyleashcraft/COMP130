//File: random_numbers.cpp
//Name: Ashcraft, Kyle
//Date: 2/14/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Prompt for a lower and upper bound, then display 10 random numbers within those bounds.

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	
	srand(time(0));
	
	int lower = 0, upper = 0;
	
	cout << "Enter a lower bound: ";
	cin >> lower;
	
	cout << "Enter an upper bound: ";
	cin >> upper;
	
	for(int i = 0; i < 10; i++){
		cout << lower + rand() % (upper - lower + 1) << " ";
	}
	
	return 0;
}

