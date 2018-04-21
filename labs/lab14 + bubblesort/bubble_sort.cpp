#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));
	const int FLAG = 25;
	int rows = 0, columns = 0, temp = 0;
	int arr[11];

	for (int i = 0; i < 10; i++) {
		arr[i] = rand()%25;
	}
	arr[10] = FLAG;

	cout << "Array: ";

	for (int i = 0; i < 11; i++) {
		cout << arr[i] << " ";
	}

	cout << endl << endl << ".......................Sorting....................... " << endl << endl;


	while (arr[0] != FLAG) {
		for (int i = 0; i < 11; i++) {
			if (arr[i] < arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	cout << endl << endl << "sorted: ";

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	cout << endl << endl;

	return 0;
}
