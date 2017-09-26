//============================================================================
// Name        : exp_factorial.cpp
// Author      : Tobias Valbjørn
// Date		   : 26/9-2017
// Copyright   : Free for all
// Description : Exponential factorial function using templates
//============================================================================

#include <iostream>
#include "sum_n.h"
using namespace std;

int main() {
	int a=5;
	float b=5.1;


	cout << "Return value from sum_n: " << sum_n<int>(a) << "\n"<<endl;
	cout << "Return value from sum_n: " << sum_n<float>(b) << "\n" <<endl;
	//cout << "Return value from sum_n: " << sum_n<double>(c) << "\n" <<endl;
	//cout << "Return value from sum_n: " << sum_n<long long>(d) << "\n" <<endl;

	return 0;
}
