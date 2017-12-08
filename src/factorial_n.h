#ifndef FACTORIAL_N_INCLUDED
#define FACTORIAL_N_INCLUDED

template<class T>
int factorial_n(T n)
{
	if (n <= 1)
		return 1;

	return n * factorial_n(n - 1);
}

#endif // ADD_H_INCLUDED 
