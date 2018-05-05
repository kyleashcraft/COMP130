#include <iostream>
#include <vector>
#include <cstdlib>
#include "intsort.h"

using namespace std;


int main(){
	srand(time(0));
	
	const int SIZE = 10;
	
	vector <int> vec;
	
	cout << "Populating 10 integer numbers between 55 and 75..." << endl;
	
	populate(vec, SIZE, 55, 75);
	
	display(vec);
	
	cout << "Sorted in (non-decreasing) order..." << endl;
	
	sortNonIncreasing(vec);
	
	display(vec);
	
	cout << "Numbers shuffled..." << endl;
	
	shuffle(vec);
	
	display(vec);
	
	cout << "Numbers shuffled again..." << endl;
	
	shuffle(vec);
	
	display(vec);
	
	vec.clear();
	
	cout << "Size after using clear() method: " << vec.size();
	
	return 0;
}
