// Kyle Ashcraft
// swap_case.cpp
// 3/5/2018
// MS Visual Studio 2017
// swap upper case letters to lower case and lowercase to uppercase

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string swapCase(const string& s){
	string newString = s;
	for(int i = 0; i < s.length(); i++){
		if (islower(s.at(i))){
			newString.at(i) = toupper(s.at(i));
		} else {
			newString.at(i) = tolower(s.at(i));
		}
	}
	return newString;
}

int main (){
	string sentence, newString;
	
	cout << "Enter a string: ";
	getline(cin, sentence);
	
	cout << "the new string is: " << swapCase(sentence) << endl;	
	
	return 0;
}
