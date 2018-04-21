#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

	srand(time(0));
	int size = 0, above = 0;
	double avg = 0;
	cout << "Exercise 11.1..." << endl;
	cout << "Enter array size: ";
	cin >> size;

	int *arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = 1 + rand() % 10;
		avg += arr[i];
		cout << arr[i] << " ";
	}

	avg /= size;

	cout << endl << "The average of the array of numbers is " << avg << endl;

	for (int i = 0; i < size; i++) {
		if (*arr > avg) above++;
		arr++;
	}

	cout << "Amount of numbers in array above the average: " << above << endl;

	cout << endl << "Exercise 11.2..." << endl << "Enter the size of another array: ";
	cin >> size;

	int *arr2 = new int[size];

	cout << "Enter the values of your array: ";

	for (int i = 0; i < size; i++) {
		cin >> *arr2;
		arr2++;
	}

	arr2 -= size;

	int *uniq = new int[size];

	int uniqI = 0;

	for (int i = 0; i < size; i++) {
		bool isUniq = true;
		for (int j = 0; j < i; j++) {
			if (arr2[i] == uniq[j]) isUniq = false;
		}

		if (isUniq) {
			uniq[uniqI] = arr2[i];
			cout << uniq[uniqI] << " ";
			uniqI++;
		}
	}

	return 0;
}

