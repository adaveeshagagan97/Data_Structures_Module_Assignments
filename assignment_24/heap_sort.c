#include "Heap.h"

/* Function body to implement heap sort */
void heap_sort(data_t * arr, int size)
{
    /* Define local variable */
    int index = size - 1;

    /* function call to create max heap*/
    build_maxheap(arr,size);

    /* Traverse and sort */
    while (index >= 0)
    {
	swap(&arr[0], &arr[index]);
	maxheapify(arr, 0, index);
	index--;
    }
}

/* Function body to implement build_maxheap */
void build_maxheap(data_t * arr, int size)
{
    /* Define local variable */
    int index = size / 2 - 1;

    /* Traverse and call maxheapify function */
    while (index >= 0)
    {
	maxheapify(arr, index, size);
	index--;
    }
}

/* Function body to implement maxheapify */
void maxheapify(data_t * arr, int index, int size)
{
    /* Declare local variables */
    int L, R, large;

    /* Initialise */
    L = 2 * index + 1;
    R = 2 * index + 2;

    /* Compare and update large */
    (arr[index] < arr[L] && L < size) ? (large = L) : (large = index);

    /* Compare and update large */
    if (arr[large] < arr[R] && R < size)
    {
	large = R;
    }

    /* Do condition checking */
    if (index != large)
    {
	/* swap */
	swap(&arr[large], &arr[index]);
	maxheapify(arr, large, size);
    }
}

/* Function body to swap two elements */
void swap(data_t * first, data_t * second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

/* Function body to scan array elements from the user */
void populate_array(data_t * arr, int size)
{
    for (int i = 0; i < size; i++)
	scanf("%d", &arr[i]);
}

/* Function body to print array elements */
void print_array(data_t * arr, int size)
{
    for (int i = 0; i < size; i++)
	printf("%d ", arr[i]);

    /* Print new line */
    printf("\n");
}
