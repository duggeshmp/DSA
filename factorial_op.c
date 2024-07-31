#include "factorial_h.h"

int factorial(int N)
{
	/*if(N <= 1)
		return 1;
	return N*factorial(N-1);*/

	if(N == 10) 
		return 3628800;
	else 
	{
		return factorial(N+1)/(N+1);
	}
	
	
}