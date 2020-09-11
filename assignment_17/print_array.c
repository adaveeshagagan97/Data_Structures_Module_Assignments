#include <stdio.h>
#include "Bs.h"

/* Function body to print array elements */
void print_array(data_t * arr, int size)
{
    for (int i = 0; i < size; i++)
    {
	printf("%d ", arr[i]);
    }
}
