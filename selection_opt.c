#include "selection.h"

void Selection_Sort(int arr[], int size)
{
	int min_indx;

	for(int i = 0;i <size; i++)
	{
		min_indx = i;

		for(int j = i;j < size ; j++)
			if(arr[min_indx] > arr[j])
			{
				min_indx = j;
				
			}
	swap(&arr[i], &arr[min_indx]);
	}
}
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}