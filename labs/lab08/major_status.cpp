//File: major_status.cpp
//Name: Ashcraft, Kyle
//Date: 2/14/2018
//Compiler used: MS Visual Studio 2018
//Purpose: Analyze a two character string for major and grade level.

#include <iostream>
#include <string>

using namespace std;

int main(){
	string code = "", response = "";
	
	cout << "Enter two characters: ";
	cin >> code;
	
	switch (code[0]){
		case 'M':
			response += "Mathematics";
			break;
		case 'C':
			response += "Computer Science";
			break;
		case 'I':
			response += "Information Technology";
			break;
		default:
			cout << "Invalid major code";
			return(1);
	}
	
	switch (code[1]){
		case '1':
			response += "Freshman";
			break;
		case '2':
			response += "Sophomore";
			break;
		case '3':
			response += "Junior";
			break;
		case '4':
			response += "Senior";
			break;
		default:
			cout << "Invalid status code";
			return(1);
	}
	
	cout << response << endl;
	
	return 0;
}

