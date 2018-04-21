#include <iostream>
#include <string>

using namespace std;

bool isAnagram(const string& s1, const string& s2){
	
	if (s1.length() != s2.length()) return false;
	
	for (int i = 0; i < s1.length(); i++){
		if (static_cast<int>(s1.find(s2[i],0) ) < 0) return false;
	}
	
	return true;
}

string commonChars(string s1, string s2){
	string comb;
	for (int i = 0; i < s1.length(); i++){
		int var = static_cast<int>(s2.find(s1[i], 0));
		if (var >= 0) {
			comb.push_back(s1[i]);
			s2.erase(var,1);
		}
	}
	comb.length() > 0 ? comb = "The common characters are " + comb : comb = "No common characters";
	return comb;
}

int main(){
	
	string s1, s2;

	cout << "Enter a string s1: ";
	cin >> s1;
	
	cout << "Enter a string s2: ";
	cin >> s2;
	
	cout << s1 << " and " << s2;
	
	isAnagram(s1, s2) ? cout << " are " : cout << " are not ";
	
	cout << "anagrams." << endl << endl;
	
	cout << "Enter a string s1: ";
	cin >> s1;
	
	cout << "Enter a string s2: ";
	cin >> s2;
	
	cout << commonChars(s1, s2);
		
	return 0;
}
