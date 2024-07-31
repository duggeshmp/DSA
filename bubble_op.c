#include "bubble.h"

void Bubble_Sort(int arr[], int size)
{
	for(int i = 0;i <size; i++)
		for(int j = 0;j < size-i ; j++)
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
}
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}