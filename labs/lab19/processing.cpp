#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	
	ifstream text;
	string paragraph;
	
	text.open("GDP.txt");
	if (text.is_open()){
		getline(text, paragraph);
		cout << "Input file before preprocessing... " << endl << endl << endl;
		cout << paragraph << endl << endl << endl;
		for (int i = 0; i < paragraph.length(); i++){
			paragraph[i] = tolower(paragraph[i]);
			if (paragraph[i] == '\''){
				paragraph.erase(i, 2);
				i--;
			}
			if (paragraph[i] != ' ' &&
				(paragraph[i] < 'A' || paragraph[i] > 'Z') &&
				(paragraph[i] < 'a' || paragraph[i] > 'z')){
					paragraph.erase(i, 1);
					i--;
			}
		}
		cout << "Preprocessed..." << endl << endl;
		cout << paragraph;
	}
	
	return 0;
}

