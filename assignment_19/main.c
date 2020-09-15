/*
   Title       : WAF to sort given array using quick sort
   Author      : Gagan A
   Date        : 15/09/2020
   Description : Input : Read size, array elements from the user 
                 Output: Perform quick sorting and print sorted array elements 
*/

#include "Quick.h"

int main()
{
    /* Declare local variables */
    char option;
    int size;

    do
    {
	/* Read size of the array from the user */
	printf("Enter size of the array: ");
	scanf("%d", &size);

	/* Do error checking */
	if (size < 1)
	{
	    printf("Error: Size should be a positive integer only\n");
	}
	else
	{
	    /* Declare array */
	    data_t arr[size];

	    /* Read array elements from the user by calling function */
	    printf("Enter array elements: ");
	    populate_array(arr, size);

	    /* Function call to perform quick sorting */
	    quick_sort(arr, 0, size - 1);

	    /* Function call to print sorted array elements */
	    printf("Quick sort output: ");
	    print_array(arr, size);
	}

	/* Check for continue */
	printf("Do you want to continue (y/n): ");
	scanf(" %c", &option);
	(option != 'y') ? : printf("***********************************\n\n");

    } while (option == 'y');

    return 0;
}
