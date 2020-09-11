#include "Bs.h"

/* Function body to search key element using recursive binary search method */
int binary_recursive(data_t * arr, data_t key, int low, int high)
{
    /* Declare local variable */
    int mid;

    /* Base condition */
    if (low <= high)
    {
	/* Assign mid */
	mid = (low + high) / 2;

	/* Check if arr[mid] = key element */
	if (arr[mid] == key)
	{
	    return mid + 1;
	}
	/* Check if arr[mid] < key element */
	else if (arr[mid] < key)
	{
	    /* Update low and call function recursively */
	    binary_recursive(arr, key, mid + 1, high);
	}
	/* If arr[mid] > key */
	else
	{
	    /* Update high and call function recursively */
	    binary_recursive(arr, key, low, mid - 1);
	}
    }
    /* If key element is not found */
    else
    {
	return ELEMENT_NOT_FOUND;
    }
}
