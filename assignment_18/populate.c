#include "Sort.h"

/* function body to scan array elements from the user */
void populate_array(data_t * arr, int size)
{
    for (int i = 0; i < size; i++)
	scanf("%d", &arr[i]);
}
