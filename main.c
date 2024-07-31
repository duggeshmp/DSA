#include "bubble.h"

int main()
{
	int arr[ARR_SIZE] = {10,2,4,6,27,7,40,89,56,2,0,27,9,5};
	Bubble_Sort(arr, ARR_SIZE);

	for(int i=0;i < ARR_SIZE-1;i++)
		assert(arr[i] <= arr[i+1]);
		


	return 0;
}