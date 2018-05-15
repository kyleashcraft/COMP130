#include <iostream>

using namespace std;

int fact(int numb){
	if (numb <= 1) return 1;
	else return numb * fact ( numb - 1 );
}

int fibonacci (int n){
	if (n == 2 || n == 1) return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

int gcd(int m, int n){
	if (m < n) swap(m, n);
	if (m % n == 0) return n;
	return (n, m % n);
}

double series(double n){
	if (n == 1) return 1;
	return 1/n + series(n-1);
}

float series2(float n){
	if (n == 1) return 1.0/3.0;
	return n/(2*n + 1) + series2(n-1);
}

float series3(float n){
	if (n == 1) return 1.0/2.0;
	return n/(n+1) + series3(n-1);
}

int main(){
	
	cout << "gcd(312, 676): " << gcd(312, 676) << endl;
	cout << "gcd(30,45): " << gcd(30, 45) << endl << endl;

	
	for(int i = 1; i < 11; i++){
		cout << "i = " << i << ", sum of series = " << series(i) << endl;
	}
	
	cout << endl << endl;
	
	for(int i = 1; i < 11; i++){
		cout << "i = " << i << ", sum of series = " << series2(i) << endl;
	}
	
	cout << endl << endl;
	
	for(int i = 1; i < 11; i++){
		cout << "i = " << i << ", sum of series = " << series3(i) << endl;
	}
	
	return 0;
}
