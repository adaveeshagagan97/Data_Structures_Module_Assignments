/*
   Title       : WAF to insert & delete the data at first & last position. Also to find given node & to delete list(SLL)
   Author      : Gagan A
   Date        : 31/08/2020
   Description : Input : Read choice from the user
                 Output: Do operation and print output wrt the choice made by the user on Single Linked List
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
	choice = select_operation();

	/* Do respective operation wrt the choice made */
	switch (choice)
	{
	    /* Insert at first */
	    case 1:
		/* Read data from the user */
		printf("Enter data: ");
		scanf("%d", &data);

		/* Calling function and storing its value in result variable */
		result = sl_insert_first(&head, data);

		/* Compare result and print respective output */
		if (result == LIST_EMPTY)
		    printf("Failed: List is empty\n");
		else if (result == FAILURE)
		    printf("Failed: Memory not allocated\n");
		else
		    printf("Data inserted at first succesfully\n");
		break;

	    /* Insert at last */	
	    case 2:
		/* Read data from the user */
		printf("Enter data: ");
		scanf("%d", &data);

		/* Calling function and storing its value in result variable */
		result = sl_insert_last(&head, data);

		/* Compare result and print respective output */
		(result == FAILURE) ? printf("Failed: Memory not allocated\n") : printf("Data inserted at last succesfully\n");
		break;

	    /* Delete at first */	
	    case 3:
		/* Calling function and storing its value in result variable */
		result = sl_delete_first(&head);

		/* Compare result and print respective output */
		(result == LIST_EMPTY) ? printf("Failed: List is empty\n") : printf("Deleted first node successfully\n");
		break;

	    /* Delete at last */	
	    case 4:
		/* Calling function and storing its value in result variable */
		result = sl_delete_last(&head);

		/* Compare result and print respective output */
		(result == LIST_EMPTY) ? printf("Failed: List is empty\n") : printf("Deleted last node successfully\n");
		break;

	    /* Finding a node */	
	    case 5:
		/* Read data from the user */
		printf("Enter the data to be found: ");
		scanf("%d", &data);

		/* Calling function and stoirng its value in result variable */
		result = sl_find_node(&head, data);

		/* Compare result and print respective output */
		if (result == LIST_EMPTY)
		    printf("Failed: List is empty\n");
		else if (result == ELEMENT_NOT_FOUND)
		    printf("Data is not present in the list\n");
		else
		    printf("Data is present in the list\n");
		break;		 

	    /* Delete the list */	
	    case 6:
		/* Calling function and storing its value in result variable */
		result = sl_delete_list(&head);

		/* Compare result and print respective output */ 
		(result == LIST_EMPTY) ? printf("Failed: List is empty\n") : printf("Deleted list successfully\n");
		break;

	    /* Print the list */	
	    case 7:
		/* Calling function and storing its value in result variable */
		result = print_list(head);

		/* Compare result and print respective output */
		(result != LIST_EMPTY) ? : printf("Failed: List is empty\n");
		break;

	    default:
		printf("Invalid choice\n");
	}

	/* Check for continue */
	printf("Do you want to continue(y/n): ");
	getchar();
	scanf("%c", &option);
	(option != 'y') ? : printf("***********************************\n\n");

    } while (option == 'y');

    return 0;
}
