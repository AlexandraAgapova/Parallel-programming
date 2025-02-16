#include <iostream>
#include <cmath>
#include <vector>

#ifndef ARRAY_TYPE
#define ARRAY_TYPE float
#endif

constexpr size_t ARRAY_SIZE = 10000000;

using namespace std;

int main() {
	vector<ARRAY_TYPE> arr(ARRAY_SIZE);
	constexpr ARRAY_TYPE step = 2 * M_PI / ARRAY_SIZE;
	
	for (size_t i = 0; i < ARRAY_SIZE; ++i) {
		arr[i] = sin(i * step);
	}
	
	ARRAY_TYPE sum = 0;
	for (size_t i = 0; i < ARRAY_SIZE; ++i) {
		sum += arr[i];
	}

	cout << "Sum: " << sum << endl;
	return 0;
}

