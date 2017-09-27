#ifndef FACTORIAL_N_INCLUDED
#define FACTORIAL_N_INCLUDED

using namespace std;

template<class T>
int factorial_n(T n)
{
	T temp;

	if (n <= 1)
		return 1;

	temp = n * factorial_n(n - 1);
	return temp;
}

#endif // ADD_H_INCLUDED 
