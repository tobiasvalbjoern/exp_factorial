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

int main() {

	for (int x = 0; x <= 9; x++) {
		std::cout << "Int input: " << x << " Output: "
			 << sum_n<int>(x) << "\n" << std::endl;

	}

	for (double x = 0; x <= 9; x++) {
		std::cout << "Double input: " << x << " Output: "
			 << sum_n<double>(x) << "\n" << std::endl;

	}
}

