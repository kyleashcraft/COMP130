#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	
	srand(time(0));
	
	cout << "Exercise 1..." << endl << endl;
	
	vector<vector<int> > raggedMatrix(5);
	
	for (int i = 0; i<5; i++){
		for(int j = 0; j <= i; j++){
			raggedMatrix[i].push_back(j+1);
			cout << raggedMatrix[i][j] << " ";
		}
		cout << endl;
	} 
	
	int msize = 0;
	
	cout << endl << endl << "Exercise 2..." << endl;
	
	cout << "Enter the size for the matrix: ";
	cin >> msize; 
	
	vector<vector<int> > binaryMatrix(msize);
	
	for (int i = 0; i < msize; i++){ //seed the matrix
		for (int j = 0; j < msize; j++){
			binaryMatrix[i].push_back(rand()%2);
			cout << binaryMatrix[i][j] << " ";			
		}
		cout << endl;
	}
	
	int mDiag = 0; //used to check same numbers on top left to bottom right diag
	int subDiag = 0; // used for top right to bottom left diag
	bool sameRow = false, sameCol = false; //used to test if any col or rows have all 1s or 0s
	
	for (int i = 0; i < msize; i++){
		int rowSum = 0; //counter for row
		mDiag += binaryMatrix[i][i]; //counter for first diag
		subDiag += binaryMatrix[i][msize - 1 -  i]; //counter for second diag
		for(int j = 0; j < msize; j++){
			rowSum += binaryMatrix[i][j]; //counter for row incremented
		}
		if(rowSum == msize) { //if row sum has a value equal to width/height size (all 1s)
			cout << "Row " << i+1 << " has all ones!\n";
			sameRow = true; //note that there was at least one row with all same
		}
		if (rowSum == 0) { //if row sum has a value equal to 0 (all 0s)
			cout << "Row " << i+1 << " has all zeroes!\n";
			sameRow = true; //note that at least one row had all same
		}
	}
	
	if (sameRow == false) cout << "No same number on a row." << endl; //if NO row had all same, print that out
	
	for (int i = 0; i < msize; i++){
		int colSum = 0; //col sum counter
		for (int j = 0; j < msize; j++){
			colSum += binaryMatrix[j][i];
		}
		if(colSum == 0){ //if col sum is all zeroes
			cout << "Column " << i << " has all zeroes!" << endl; 
			sameCol = true; //keep track
		}
		if(colSum == msize){ //if col sum is all ones
			cout << "Column " << i << " has all ones!" << endl;
			sameCol = true; //keep track
		}
	}
	
	if (sameCol == false) cout << "No same number on a column." << endl; //if no col with all same type, print it
	
	mDiag == msize || mDiag == 0 ? cout << "Same numbers on the major diagonal.\n" : cout << "No same numbers on the major diagonal\n"; //same type check for diags
	subDiag == msize || subDiag == 0 ? cout << "Same numbers on the subdiagonal.\n" : cout << "No same numbers on the subdiagonal\n";
	
	return 0;
}
