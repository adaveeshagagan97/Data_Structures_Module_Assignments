#include "Quick.h"

/* Function body to implement quick sort */
void quick_sort(int arr[], int low, int high)
{
    /* Declare local variable */
    int index;

    /* Base condition */
    if (low < high)
    {
	/* To get the partition value */
	index = partition(arr, low, high);

	/* Quick sort left sub array */
	quick_sort(arr, low, index);

	/* Quick sort right sub array */
	quick_sort(arr, index + 1, high);
    }			
}

/* Function body to implement partition */
int partition(int arr[], int low, int high)
{
    /* Declare local variables */
    int pivot, p, q;

    /* Initialise */
    pivot = low;
    p = low + 1;
    q = high;

    /* While p and q does not cross over repeat */
    while(p <= q)
    {
	/* If the p value is less than pivot, keep incrementing by 1 */
	while (arr[p] < arr[pivot])
	{
	    p++;
	}
	/* If the q value is greater than pivot, keep decrement by 1 */
	while (arr[q] > arr[pivot])
	{
	    q--;
	}
	/* If p crossover q, swap p and q */
	if(p < q)
	{
	    swap(&arr[p], &arr[q]);
	}
    }

    /* swap the pivot value with q */
    swap( &arr[q], &arr[pivot]);
    return q;
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
