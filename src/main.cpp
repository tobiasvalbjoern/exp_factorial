//============================================================================
// Name        : exp_factorial_n.cpp
// Author      : Tobias Valbjørn
// Date		   : 26/9-2017
// Copyright   : Free for all
// Description : Exponential factorial_n function using templates
//============================================================================
//To link the math library with the linker, go into project properties
//find linker. Add "m".
#include <iostream>
#include <cmath>
#include <assert.h>
#include "sum_n.h"

using namespace std;

int main() {

	assert(sum_n<int>(0) == 1);
	assert(sum_n<int>(1) == 2);
	assert(sum_n<int>(2) == 5);
	assert(sum_n<int>(3) == 8);

	for (int x = 0; x <= 9; x++) {
		cout << "Int input: " << x << " Output: "
			 << sum_n<int>(x) << "\n" << endl;

	}

	for (double x = 0; x <= 9; x++) {
		cout << "Double input: " << x << " Output: "
			 << sum_n<double>(x) << "\n" << endl;

	}
}

