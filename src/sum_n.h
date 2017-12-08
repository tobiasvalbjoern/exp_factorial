#ifndef SUM_N_INCLUDED
#define SUM_N_INCLUDED

#include "factorial_n.h"
#include <math.h>
#include <cmath>

template<class T>
const T sum_n(T t_x) {
	T total = 	0;

	for (T n = 0; n <= t_x; ++n) {total += pow(t_x, n / factorial_n(n));}
	return total;
}

#endif // ADD_H_INCLUDED 
