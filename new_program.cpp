#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

int main(){	
	
	string fileName, date, purpose;
		
	cout << "Please enter a file name for your program: ";
	cin >> fileName;
	
	cout << "Please enter a date: ";
	cin >> date;
	
	cout << "Please enter a brief description of the purpose of this program: ";
	cin.ignore();
	getline(cin, purpose);
	
	cout << endl << endl;
	
	fileName += ".cpp";
	
	cout << "Writing to " << fileName << " ..." << endl;
	
	ofstream output( fileName.c_str() );
	
	output << "//File: " << fileName << endl;
	output << "//Name: Kyle Ashcraft" << endl;
	output << "//Date: " << date << endl;
	output << "//Compiler used: MS Visual Studio 2018" << endl;
	output << "//Purpose: " << purpose << endl << endl;
	
	output << "#include <iostream>" << endl << endl << "using namespace std;" << endl << endl;
	
	output << "int main(){ \n \n \nreturn 0; \n}";
	
	output.close();
	
	return 0;
}

