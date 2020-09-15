#include "Sort.h"

/* Function body to implement insertion sort in ascending order */
void insertion_sort(data_t * arr, int size)
{
    int i, j, key;

    /* Loop to select element by element */
    for (i = 1; i < size; i++)
    {
	/* Update key */
	key = arr[i];
	j = i - 1;

	while (j >= 0 && arr[j] > key)
	{
	    arr[j + 1] = arr[j];
	    j -= 1;
	}

	arr[j + 1] = key;
    }
}
