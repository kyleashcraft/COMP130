#include <iostream>

using namespace std;

int* doubleCapacity(const int* list, int size) {
	int* dub = new int [size*2];
	for(int i = 0; i < size*2; i++){
		if (i < size) {
			dub[i] = list[i];
		} else {
			dub[i] = 0;
		}
	}
	return dub;
}

int main() {
	
	int size = 5;	
	int *numArr = new int[size];
	
	cout << "Normal Array: ";
	
	for (int i = 0; i < size; i++){
		numArr[i] = i + 1;
		cout << numArr[i] << " ";
	}
	
	int *doubled = doubleCapacity(numArr, size);
	
	delete numArr;
	numArr = NULL;
	
	numArr = doubled;
	
	cout << endl << "Doubled array: ";
	
	for (int i = 0; i < size*2; i++){
		cout << numArr[i] << " ";
	}
	
	return 0;
}
