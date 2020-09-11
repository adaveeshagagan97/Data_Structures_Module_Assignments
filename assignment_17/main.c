/*
   Title       : Write a binary search function in both iterative and recursive methods
   Author      : Gagan A
   Date        : 11/09/2020
   Description : Input : Read choice, size, array elements from the user
                 Output: Do respective operation wrt the choice made 
*/

#include <stdio.h>
#include "Bs.h"

int main()
{
    /* Declare local variables */
    char option;
    int result, choice, size;
    data_t key;

    /* Red size of the array from the user */
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    /* Do error checking */
    if (size < 1)
    {
	printf("Error: size should be a positive integer only\n");
    }
    else
    {
	/* Declare array */
	data_t arr[size];

	/* Read array elements from the user by calling function */
	printf("Enter array elements: ");
	populate_array(arr, size);

	/* Sort the array in ascending order by calling function */
	sort_array(arr, size);
	printf("\n");

	do
	{
	    /* Function call to select operation */
	    choice = select_operation();

	    /* Perform operation wrt choice */
	    switch (choice)
	    {
		/* Iterative method */
		case 1:
		    /* Read key element from the user */
		    printf("Enter the key element to be searched: ");
		    scanf("%d", &key);

		    /* Calling function and storing its value in result variable */
		    result = binary_iterative(arr, key, size);

		    /* Compare result and print respecctive output */
		    (result == ELEMENT_NOT_FOUND) ? printf("Failed: Element not found") : printf("The key element %d is found at %d position in the array", key, result);
		    break;

		/* Recursive method */     
		case 2:
		    /* Read key element from the user */
		    printf("Enter the key element to be searched: ");
		    scanf("%d", &key);

		    /* Calling function and storing its value in result variable */
		    result = binary_recursive(arr, key, 0, size - 1);
		    
		    /* Compare result and print respecctive output */
		    (result == ELEMENT_NOT_FOUND) ? printf("Failed: Element not found") : printf("The key element %d is found at %d position in the array", key, result);
		    break;

		/* Print array elements */    
		case 3:
		    /* Calling function to print array elements */
		    print_array(arr, size);
		    break;

		default:
		    printf("Error: Invalid choice");

	    }

	    /* Check for continue */
	    printf("\nDo you want to continue (y/n): ");
	    getchar();
	    scanf("%c", &option);
	    (option != 'y') ? : printf("***********************************\n\n");

	} while (option == 'y');
    } 

    return 0;
}
