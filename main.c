#include "insertion_H.h"

int main()
{
	int arr[ARRAY_SIZE] = {1,5,4,9,8,7,3,4,8,10};

	Insertion_Sort(arr, ARRAY_SIZE);

	for(int i =0;i < ARRAY_SIZE; i++)
		assert(arr[i] >= arr[i-1]);

	return 0;
}