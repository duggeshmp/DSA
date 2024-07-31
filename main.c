#include "factorial_h.h"

int main()
{
	int fact=0;
	assert(factorial(0) == 1);

	fact = factorial(8);
	
	printf("\n%d",fact);
}