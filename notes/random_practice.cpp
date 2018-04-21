#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int size = 0;
	
	cout << "ENTER SIZE: ";
	cin >> size;
	
	int arr[size];
	
	for (int i = 0; i < size; i++){
		arr[i] = rand();
		cout << arr[i] << " - ";
	}
	
	return 0;
}
