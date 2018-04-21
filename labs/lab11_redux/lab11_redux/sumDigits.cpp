#include "sumDigits.h"

using namespace std;

int getPentagonalNumber(int n) {
	return (n * (3 * n - 1) / 2);
};

int sumDigits(long n) {
	int sum = 0;

	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
};