/*
   Title       : WAF to sort given array using bubble sort, insertion sort and selection sort
   Author      : Gagan A
   Date        : 15/09/2020
   Description : Input : Read size, array elements and choice from the user 
                 Output: Perform sorting operation wrt the choice made 
*/

#include "Sort.h"

int main()
{
    /* Declare local variables */
    char option;
    int size, choice;

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

	    /* Function call to select operation */
	    choice = select_operation();

	    /* Perform operation wrt the choice made */
	    switch (choice)
	    {
		/* Bubble sort in ascending order */
		case 1:
		    /* Function call to sort array */
		    bubble_sort(arr, size);

		    /* Print sorted array elements by calling function */
		    printf("Bubble sort output: ");
		    print_array(arr, size);
		    break;

		/* Insertion sort in ascending order */     
		case 2:
		    /* Function call to sort array */
		    insertion_sort(arr, size);

		    /* Print sorted array elements by calling function */
		    printf("Insertion sort output: ");
		    print_array(arr, size);
		    break;

		/* Selection sort in ascending order */    
		case 3:
		    /* Function call to sort array */
		    selection_sort(arr, size);

		    /* Print sorted array elements by calling function */
		    printf("Selection sort output: ");
		    print_array(arr, size);
		    break;

		default:
		    printf("Error: Invalid choice\n");
	    }
	}

	/* Check for continue */
	printf("Do you want to continue (y/n): ");
	getchar();
	scanf("%c", &option);
	(option != 'y') ? : printf("***********************************\n\n");

    } while (option == 'y');

    return 0;
}
