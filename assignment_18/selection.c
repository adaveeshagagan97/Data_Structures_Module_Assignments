#include "Sort.h"

/* Function body to implement selection sort in ascending order */
void selection_sort(data_t * arr, int size)
{
    int i, j, min;

    /* Loop to pick minimum element */
    for (i = 0; i < size - 1; i++)
    {
	/* Update mininum element */
	min = i;

	/* Loop to compare minimum element with other elements */
	for (j = i + 1; j < size; j++)
	{
	    /* Check condition */
	    if (arr[min] > arr[j])
	    {
		/* Update minimum element */
		min = j;
	    }
	}

	/* If right position is found */
	if (min != i)
	{
	    /* Swap the elements */
	    swap (&arr[i], &arr[min]);
	}
    }
}
