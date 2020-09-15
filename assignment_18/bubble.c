#include "Sort.h"

/* function body to implement bubble sort in ascending order */
void bubble_sort(data_t * arr, int size)
{
    int i, j, temp;

    for (i = 0; i < size; i++)
    {
	for (j = 0; j < size - 1 - i; j++)
	{
	    /* Swap the elements */
	    if (arr[j] > arr[j + 1])
		swap(&arr[j], &arr[j + 1]);
	}
    }
}  
