#include "Bs.h"

/* Function body to search key element using binary search iterative method */
int binary_iterative(data_t * arr, data_t key, int size)
{
    /* Declare local variables */
    int mid, high, low;

    /* Define variable */
    high = size - 1;
    low = 0;

    /* Run loop until you find key element */
    while (low <= high)
    {
	/* Assign mid */
	mid = (low + high) / 2;

	/* Check if arr[mid] = key element*/
	if (arr[mid] == key)
	{
	    return mid + 1;
	}
	/* Check if arr[mid] < key element */
	else if (arr[mid] < key)
	{
	    /* Update low */
	    low = mid + 1;
	}
	/* If arr[mid] > key element */
	else
	{
	    /* Update high */
	    high = mid - 1;
	}
    }

    /* If key element is not found */
    return ELEMENT_NOT_FOUND;
}
