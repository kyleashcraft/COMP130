//File: Output.cpp
//Name: Ashcraft, Kyle
//Date: 2/14/18
//Compiler used: MS Visual Studio 2018
//Purpose: Create an output .txt file in C++

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream output;
	
	output.open("numbers.txt");
	
	output << 95 << " " << 56 << " " << 34;
	
	output.close();
	
	cout << "Done" << endl;
	
	return 0;
}
