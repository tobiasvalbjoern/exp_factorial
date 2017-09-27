//============================================================================
// Name        : exp_factorial.cpp
// Author      : Tobias Valbjørn
// Date		   : 26/9-2017
// Copyright   : Free for all
// Description : Exponential factorial function using templates
//============================================================================
//To link the math library with the linker, go into project properties
//find linker. Add "m".
#include <iostream>
#include <cmath>
#include "sum_n.h"
using namespace std;

int main()
{

	for (int x = 0; x <= 9; x++)
	{
		int xresult=sum_n<int>(x);
		cout << "Int input: " << x<< " Output: "<< xresult << "\n"
				<< endl;

	}

	for (double x = 0; x <= 9; x++)
	{
		double xresult=sum_n<double>(x);
		cout << "Double input: " << x<< " Output: "<< xresult << "\n"
				<< endl;

	}
}

//exp(-x)=1/exp(blabla)
/*
 if(a<0)
 {
 cout << "Return value from sum_n with int: " << 1/sum_n<int>(a)<<
 "\n"<<endl;
 }

 if(b<0)
 {
 cout << "Return value from sum_n with double: " << 1/sum_n<double>(b) <<
 "\n" <<endl;
 }
 */
//Remember to add the functionality, so that function only accepts the valid
//numbers. ie no negative.
