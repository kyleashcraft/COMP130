#include <iostream>
#include <string>

using namespace std;

template <typename T>
T maximum(T arr[], int size){
	T max = arr[0];
	for(int i = 1; i < size; i++){
		if (arr[i] > max) max = arr[i];
	}
	return max;
}


int main(){
	
	int arrA[3] = { 1, 2000, 3 };
	double arrB[3] = { 45.7, 23.6, 999.3 };
	string arrC[3] = { "ghi", "abc", "def" };
	
	cout << "Maximum from integer array = " << maximum(arrA, 3) << endl;
	cout << "Maximum from double array = " << maximum(arrB, 3) << endl;
	cout << "Maximum from string array = " << maximum(arrC, 3) << endl;

	return 0;
}
