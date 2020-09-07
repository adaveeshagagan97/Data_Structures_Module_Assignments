/*
   Title       : WAF to insert the new data in the already sorted linked list & to detect whether the given linked list is ending with loop or not
   Author      : Gagan A
   Date        : 07/09/2020
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
    data_t data, n_data, g_data;
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

		/* Calling function and stroing its value in result variable */
		result = sl_insert_last(&head, data);

		/* Compare result and print respective output */
		(result == FAILURE) ? printf("Failed: List is empty\n") : printf("Data inserted successfully\n");
		break;

	    /* Insert in sorted SLL */
	    case 2:
		/* Read n_data from the user */
		printf("Enter new data: ");
		scanf("%d", &n_data);

		/* Calling function and stroing its value in result variable */
		result = sl_insert_sorted(&head, n_data);

		/* Compare result and print respective output */
		if (result == LIST_EMPTY)
		    printf("Failed: List is empty\n");
		else if (result == FAILURE)
		    printf("Failed: Memory not allocated\n");
		else if (result == DATA_ALREADY_PRESENT)
		    printf("Failed: Data already present\n");
		else
		    printf("Data inserted successfully\n");
		break;

	    /* Create loop in SLL */
	    case 3:
		/* Read g_data from the user */
		printf("Enter given data: ");
		scanf("%d", &g_data);

		/* Calling function and stroing its value in result variable */
		result = sl_create_loop(&head, g_data);

		/* Compare result and print respective output */
		if (result == LIST_EMPTY)
		    printf("Failed: List is empty\n");
		else if (result == DATA_NOT_PRESENT)
		    printf("Failed: Data not found\n");
		else
		    printf("Loop is created\n");
		break;

	    /* Find loop in SLL */	
	    case 4:
		/* Calling function and stroing its value in result variable */
		result = sl_find_loop(&head);

		/* Compare result and print respective output */
		if (result == LIST_EMPTY)
		    printf("Failed: List is empty\n");
		else if (result == LOOP_NOT_FOUND)
		    printf("Loop does not exist\n");
		else
		    printf("Loop exists\n");
		break;

	    /* Print list */	
	    case 5:
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
