// Kyle Ashcraft
// 3/13/18
// routers.cpp
// generate an array of random variables, then determine any unique router relations
// MS Visual Studio 2017

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void displayArr(int arr[][10]){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			cout << setw(4) << right << arr[i][j];
		}
		cout << endl;
	}
	return;
}

int main() {
	
	srand(time(0));
	
	int arr[10][10];
	
	cout << "Creating random router connections to routers 1-10..." << endl;
	
	for(int i = 0; i < 10; i++){
		arr[i][0] = i + 1;
		for(int j = 1; j < 10; j++){
			arr[i][j] = 1 + rand() % 25;
		}
	}
	
	displayArr(arr);
	
	cout << endl << endl << "Removing neighbors if they are 1 to 10..." << endl;
	
	for(int i = 0; i < 10; i++){
		for(int j = 1; j < 10; j++){
			for (int k = 1; k < 11; k++){
				if(arr[i][j] == k)
					arr[i][j] = 0;
			}	
		}
	}	
	
	displayArr(arr);
	
	cout << endl << endl << "Router Neighbor Report..." << endl;
	
	for(int i = 0; i < 10; i++){
		cout << setw(3) << arr[i][0] << " is a neighbor to: "; 
		for(int j = 1; j < 10; j++){
			if (arr[i][j] != 0) cout << setw(3) << right << arr[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
