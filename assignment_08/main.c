/*
   Title       : WAF to reverse the single linked list in both iterative and recursive methods 
   Author      : Gagan A
   Date        : 13/09/2020
   Description : Input : Read choice from the user
                 Output: Perform operation wrt the choice made on single linked list
*/
               
#include <stdio.h>
#include "Sll.h"

int main()
{
    /* Declare local variables */
    char option;
    int choice, result;
    data_t data;
    Slist * head = NULL;

    do
    {
	/* Function call to select operation */
	choice = sl_select_operation();

	/* Do operation wrt the choice made */
	switch (choice)
	{
	    /* Insert at last */
	    case 1:
		/* Read data from the user */
		printf("Enter data: ");
		scanf("%d", &data);

		/* Calling function and storing its value in result variable */
		result = sl_insert_last(&head, data);

		/* Compare result and print respective output */
		(result == FAILURE) ? printf("Failed: List is empty\n") : printf("Data inserted successfully\n");
		break;
	    
	    /* Iterative method */	
	    case 2:
		/* Calling function and storing its value in result variable */
		result = sl_reverse_iterative(&head);

		/* Compare result and print respective output */
		(result == LIST_EMPTY) ? printf("Failed: List is empty\n") : printf("List is successfully reversed\n");
		break;

	    /* Recursive method */	
	    case 3:
		/* Calling function and storing its value in result variable */
		result = sl_reverse_recursive(&head);

		/* Compare result and print respective output */
		(result == LIST_EMPTY) ? printf("Failed: List is empty\n") : printf("List is successfully reversed\n");
		break;

	    /* Print list */	
	    case 4:
		/* Calling function and stroing its value in result variable */
		result = sl_print_list(head);

		/* Compare result and print respective output */
		(result != LIST_EMPTY) ? : printf("Failed: List is empty\n");
		break;

	    default:
		printf("Error: Invalid choice\n");
	}

	/* Check for continue */
	printf("Do you want to continue (y/n): ");
	getchar();
	scanf("%c", &option);
	(option != 'y') ? : printf("***********************************\n\n");

    } while (option == 'y');

    return 0;
}
