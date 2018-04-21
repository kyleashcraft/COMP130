// Kyle Ashcraft
// 3/7/2018
// Join, replace values, interweave, and find minimum values of arrays.
// MS VISUAL STUDIO 2017
// arrays.cpp

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int minInARange( int arr[], int lowIndex, int highIndex){
	int min = arr[0];
	for(int i = 0; i < 15; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

int main() {
	srand(time(0));
	int firstArray[5], secondArray[5], thirdArray[10], fourthArray[10], rangeArray[15];
	
	int low, high;

	for(int i = 0; i < 5; i++){
		firstArray[i] = 1 + rand() % 10;
		secondArray[i] = 11 + rand() % 10;		
	}
	
	cout << "Array A ... ";
	
	for(int i = 0; i < 5; i++){
		cout << firstArray[i] << " ";
		thirdArray[i] = firstArray[i];
	}
	
	cout << endl << "Array B ... ";
	
	for(int i = 0; i < 5; i++){
		cout << secondArray[i] << " ";
		thirdArray[i+5] = secondArray[i];
	}
	
	for(int i = 0; i < 10; i++){
		i % 2 == 0 ? fourthArray[i] = firstArray[i/2] : fourthArray[i] = secondArray[i/2];
	}
	
	cout << endl << "PART A, content of combined array ... ";
		
	for (int i = 0; i < 10; i++){
		cout << thirdArray[i] << " ";
	}
	
	cout << endl << "PART B, content of interleaved array ... ";
	
	for (int i = 0; i < 10; i++){
		cout << fourthArray[i] << " ";
	}
	
	cout << endl << endl << endl << "EXERCISE 2" << endl << endl;
	
	for (int i = 0; i < 15; i++){
		rangeArray[i] = 15 + rand() % 41;
		cout << rangeArray[i] << " ";
	}
	
	cout << endl << "Enter a low index of the array (0-14): ";
	cin >> low;
	
	cout << "Enter a high index of the array: ";
	cin >> high;
	
	cout << "Minimum found within those indices is: " << minInARange(rangeArray, low, high) << endl;
	
	
	return 0;
}
