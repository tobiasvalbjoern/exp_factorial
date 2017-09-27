#ifndef SUM_N_INCLUDED
#define SUM_N_INCLUDED

#include "factorial_n.h"
#include <math.h>
#include <cmath>
using namespace std;

template<class T>
T sum_n(T x)
{
	T res;
	T fact;
	T total=0;
	for (T n = 0; n <= x; n++)
	{
/*
		if (x<0)
		{
			x=abs(x);
		}
*/

		if (n < 0)
			cout << "That is not a positive integer.\n";
		else
		{
			fact = factorial_n(n);
			//cout << n << " factorial is: " << fact << endl;
		}
		res = pow(x, n/fact);

		total+=res;
	}
	return total;
}

#endif // ADD_H_INCLUDED 
