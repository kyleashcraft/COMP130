#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<vector<int> > raggedMatrix(5);
	
	for (int i = 0; i<5; i++){
		for(int j = 0; j <= i; j++){
			raggedMatrix[i].push_back(j+1);
			cout << raggedMatrix[i][j] << " ";
		}
		cout << endl;
	} 
	
	return 0;
}
