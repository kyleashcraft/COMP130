//File:  backwards_int_and_sort.cpp
//Name: Ashcraft, Kyle
//Date: 
//Compiler used: MS Visual Studio 2018
//Purpose: 

#include <iostream>

using namespace std;

void reverse(int number){
	int backwards = 0;
	while (number != 0){
		backwards += number%10;
		number /= 10;
		if (number > 0){
			backwards *= 10;
		}
	}
	cout << backwards;
	return;
}

void displaySortedNumbers(double num1, double num2, double num3){
	if (num1 > num2){
		if (num1 > num3){
			if (num2 > num3){
				cout << num3 << " " << num2 << " " << num1;
			} else {
				cout << num2 << " " << num3 << " " << num1;
			}
		} else {
			cout << num2 << " " << num1 << " " << num3;
		}
	} else {
		if (num2 > num3){
			if (num3 > num1){
				cout << num1 << " " << num3 << " " << num2;
			} else {
				cout << num3 << " " << num1 << " " << num2;
			}
		} else {
			if (num2 > num1){
				cout << num1 << " " << num2 << " " << num3;
			}
		}
	}
	return;
}

int main(){
	
	int reverseNum = 0, num1 = 0, num2 = 0, num3 = 0;
	
	cout << "Please enter a number you would like to reverse: ";
	cin >> reverseNum;
	reverse(reverseNum);
	
	cout << endl << endl << "Please enter three numbers you would like to sort (in increasing order) seperated by spaces: ";
	cin >> num1 >> num2 >> num3;
	
	cout << endl;
	
	displaySortedNumbers(num1,num2,num3);
	
	return 0;
}

