//File: coin_flip.cpp
//Name: Ashcraft, Kyle
//Date: 2/14/2018
//Compiler used: MS Visual Studio 2018
//Purpose:

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	srand(time(0));
	
	int guess = 0, flip = 0;
	
	flip = rand() % 2;
	
	cout << "I am flipping a coin. enter 1 <head> 0 <tail>: ";
	cin >> guess;
	
	if (guess != 0 || guess != 1){
		cout << "You must enter either 0 or 1 \nRun the program again. bye!";
		return 1;
	}
	
	cout << "Computer generated a \t";
	flip == 1? cout << "HEAD" : cout << "TAIL";
	
	cout << endl << "You guessed ";
	guess == flip ? cout << "right!" : cout << "wrong!";
	
	return 0;
}

