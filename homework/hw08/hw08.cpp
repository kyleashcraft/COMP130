#include <iostream>
#include <string>

using namespace std;

void printGenes(string genome){
	bool capture = false;
	bool noGenes = true;
	for(int i = 0; i < genome.length(); i++){
		if (capture == true){
			string next = genome.substr(i,3);
			if (next == "TAG" || next == "TAA" || next == "TGA" || next == "ATG") {
				capture = false;
				cout << endl;
			} else {
				noGenes = false;
				cout << next;
				i += 2;
			}
		}
		
		if (genome.substr(i,3) == "ATG"){
			capture = true;
			i += 2;
		}
	}
	if (noGenes) cout << "no gene is found" << endl;
	return;
}

string sort(string& s){
	string sorted;
	while(s.length() != 0){
		int temp = 0;
		for(int j = 0; j < s.length(); j++){
			if (s[j] < s[temp]) temp = j;
		}
		sorted += s[temp];
		s.erase(temp, 1);
	}
	return sorted;
}

int main(){
	
	string genome, word;
	
	cout << "Enter a genome string: ";
	cin >> genome; 
	
	printGenes(genome);
	
	
	cout << endl << endl;
	
	
	cout << "Enter a string: ";
	cin >> word;
	cout << "the sorted string is " << sort(word);
	
	return 0;
}
