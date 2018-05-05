#ifndef INTSORT_H
#define INTSORT_H

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void populate (vector<int>& p_vector, int size, int lower, int upper) {
	for (int i = 0; i < size; i++)
		p_vector.push_back( lower + rand() % (upper - lower + 1) );
}

void display (vector<int>& p_vector) {
		int size = p_vector.size();
		for (int i = 0; i < size; i++){
			cout << p_vector.at(i) << " ";
		}
		cout << endl;
}

void shuffle (vector<int>& p_vector){
	for (int i = 0; i < p_vector.size(); i++){
		swap(p_vector[i], p_vector[rand() % 10]);
	}
}

void sortNonIncreasing (vector<int>& p_vector){
	int index;
	for (int i = 0; i < p_vector.size(); i++){
		index = i;
		for (int j = i + 1; j < p_vector.size(); j++){
			if(p_vector[j] > p_vector[index]) index = j; 
		}
	swap(p_vector[index], p_vector[i]);
	}
}
	
#endif

