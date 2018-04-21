//File: input.cpp
//Name: Ashcraft, Kyle
//Date: 10/14/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Read a .txt file in C++

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream input;
	
	input.open("numbers.txt");
	
	int score1, score2, score3;
	
	input >> score1;
	input >> score2;
	input >> score3;
	
	cout << "Total score is " << score1 + score2 + score3 << endl;
	
	input.close();
	
	cout << "Done" << endl;
	
	return 0;
}
