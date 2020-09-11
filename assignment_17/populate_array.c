#include <stdio.h>
#include "Bs.h"

/* Function body to read array elements */
void populate_array(data_t * arr, int size)
{
    for (int i = 0; i < size; i++)
    {
	scanf("%d", &arr[i]);
    }
}
