#ifndef SUM_N_INCLUDED
#define SUM_N_INCLUDED

#include "factorial_n.h"
#include <math.h>
#include <cmath>
using namespace std;

template<class T>
const T sum_n(T t_x)
{
	T res;
	T fact;
	T total = 0;
	for (T n = 0; n <= t_x; ++n)
	{
		fact = factorial_n(n);

		assert(factorial_n(1) == 1);
		assert(factorial_n(2) == 2);
		assert(factorial_n(3) == 6);
		assert(factorial_n(10) == 3628800);

		res = pow(t_x, n / fact);

		total += res;
	}
	return total;
}

#endif // ADD_H_INCLUDED 
