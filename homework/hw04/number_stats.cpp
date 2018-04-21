//File: number_stats.cpp
//Name: Ashcraft, Kyle
//Date: 2/24/18
//Compiler used: MS Visual Studio 2018
//Purpose: calculate basic stats of numbers entered

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string numbers = "";
	
	int positives = 0, negatives = 0;
	char j = ' ';
	float avg = 0, total = 0;
	
	
	cout << "Enter an integer, the input ends if it is 0: ";
	getline(cin, numbers);
	
	if (numbers.size() == 1 && (char)numbers.at(0) == '0'){
		cout << endl << endl << "No numbers are entered except 0" << endl;
		return 0;
	}
	
	for (int i = 0; i < numbers.length(); i++){
		j = numbers.at(i);
		if ( isdigit( j ) && j - 48 != 0 ){
			j > 0 ? positives++ : negatives++;
			total += j - 48;
		} else if ( j == '-'){
			negatives++;
			total += (numbers.at(i+1) - 48) * (-1);
			i++;
		}		
	}
		
	avg = total / (positives + negatives); 
	
	cout << "The number of positives is " << positives << endl;
	cout << "The number of negatives is " << negatives << endl;
	cout << "The total is " << total << endl;
	cout << "The average is " << avg << endl;
	
		
	return 0;
}

