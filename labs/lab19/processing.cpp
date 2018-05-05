#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct Word {
	string phrase;
	int count;
	Word *rlink = nullptr;
};

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
			if (paragraph[i] == ' ' && paragraph[i+1] == ' '){ //REMOVES EXTRA SPACES CREATED BY REMOVED NUMBERS
				paragraph.erase(i, 1);
				i--;
			}
		}
		cout << "Preprocessed..." << endl << endl;
		cout << paragraph;
	}
	
	Word *first = nullptr; //FIRST POINTER REMAINS STATIONARY
	Word *moving = nullptr; 
		
	first = new Word;
	first->count = 0;
		
	moving = new Word;
	moving->count = 0;
	
	first->rlink = moving;
				
	string tempString = ""; //TEMP STRING IS THE BUFFER THAT COLLECTS CHARACTERS UNTIL A SPACE IS REACHED, INDICATING THE END OF A WORD
			
	for (int i = 0; i < paragraph.length(); i++){ //LOOP THAT ITERATES THROUGH PROCESSED STRING AND GENERATES LINK LIST
		if(paragraph.at(i) != ' '){ //if a character is not a space (i.e. part of a word)...
			tempString.push_back( paragraph.at(i) ); //then append it to the tempString word buffer
		}
		
		if(paragraph.at(i) == ' ' || i == paragraph.length() - 1 ){ //if a space is reached, indicating the end of a word, or the end of the string is reached (end of last word)
			if(first->phrase == ""){ //if the first pointer's phrase is empty... (this if block executes once)
				first->phrase = tempString;
				first->count++;
				tempString = "";
			} else { //if the first phrase in the list is empty...
				while(tempString != ""){ //keep iterating through the link list to look for a matching word
					if(moving->phrase == ""){ //if the moving pointer finds a data location with no keyword (this occurs once after first pointer is given a value)...
						moving->phrase = tempString;
						tempString = ""; //clear temp string for next word
						break;
					}
					if (moving->phrase == tempString){ //if moving pointer finds a keyword matching the current buffer keyword
						moving->count++; //increase the occurrence coint
						tempString = ""; //clear tempString for next word
					}
					if (moving->rlink == nullptr){ //if the moving pointer reaches the end of the list (no matching keyword is found for the current one)
						Word *temp = nullptr; //create a new pointer
						temp = new Word; //attach it a new value
						temp->phrase = tempString; //put the temp string in as the phrase
						temp->count = 1; //set the occurence counter equal to one
						moving->rlink = temp; //append new pointer to the end of the link list
						tempString = ""; //
					}
					moving = moving->rlink; //increment moving through the list
				}
				moving = first; //after while statement executes and keyword is either added to new list item or a list item is incremented, set the moving pointer back to the beggining
			}
		}
	}	
	
	cout << endl << endl << "Word Counts" << endl;
	
	while(moving != nullptr){ //data entry type formatting of output
		cout << "Word:  " << left << setw(20) << moving->phrase << right << setw(8) << "Count: " << moving->count << endl;
		moving = moving->rlink;
	}
	
	moving = first;
	
	cout << endl << endl;
	
	while (moving != nullptr){ //more sentence-like formatting of output
		cout << "'" << moving->phrase << "' occurs ";
		moving->count == 1 ? cout << "once" << endl : cout << moving->count << " times" << endl;
		moving = moving -> rlink;
	}
	
	
	return 0;
}

