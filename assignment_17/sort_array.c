#include "Bs.h"

/* Function body to sort the array elements in ascending order */
void sort_array(data_t * arr, int size)
{
    /* Declare local variables */
    int i, j, temp;

    /* Logic to sort array elements in ascending order */
    for (i = 0; i < size - 1; i++)
    {
	for (j = 0; j < size - 1 - i; j++)
	{
	    /* If true, swap the elements */
	    if (arr[j] > arr[j + 1])
	    {
		temp = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = temp;
	    }
	}
    }
}
