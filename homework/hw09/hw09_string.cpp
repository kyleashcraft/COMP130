#include <iostream>
#include <string>

using namespace std;

int* count(const string& s){
	int size = s.length();
	int *count = new int [size];
	
	for (int i = 0; i < size; i++){
		count[i] = 0;
	}
	
	for (int i = 0; i < size; i++){
		if ( isdigit(s.at(i) ))	count[ s.at(i) - 48 ] += 1;
	}
	
	return count;
}

void count(const string& s, int counts[], int size){
	for (int i = 0; i < size; i++){
		if ( isdigit(s.at(i)) ) counts[ s.at(i) - 48 ] += 1;
	}
}

int main() {
	
	string test1 = "12203AB3";
	string test2 = "SSN is 343 32 4545 and ID is 434 34 4323";
	
	int* counts = count(test1);
	
	cout << "String to process is \"" << test1 << "\"" << endl;
	
	for (int i = 0; i < 10; i++){
		cout << "counts[" << i << "] is " << counts[i] << endl;
	}
	cout << "String to process is \"" << test2 << "\"" << endl;
	
	delete counts;
	
	counts = new int[10];
	
	for (int i = 0; i < 10; i++){
		counts[i] = 0;
	}
	
	count(test2, counts, test2.length() );
	
	for (int i = 0; i < 10; i++){
		cout << "counts[" << i << "] is " << counts[i] << endl;
	}
	

	return 0;
}
