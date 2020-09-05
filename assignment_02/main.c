/*
   Title       : WAF to insert data after and before given data, & at nth position. Also to delete given element (SLL)
   Author      : Gagan A
   Date        : 05/09/2020
   Description : Input : Read choice from the user
                 Output: Perform operation on SLL wrt the choice made
*/

#include <stdio.h>
#include "Sll.h"

int main()
{
    /* Declare local variables */
    char option;
    data_t data, g_data, n_data;
    int n, choice, result;
    Slist *head = NULL;

    do
    {
	/* Function call to select operation */
	choice = select_operation();

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
		(result == FAILURE) ? printf("Failed: Memory not allocated\n") : printf("Data inserted succesfully\n");
		break;
 
	    /* Insert after */
	    case 2:
		/* Read g_data from the user */
		printf("Enter given data: ");
		scanf("%d", &g_data);

		/* Read n_data from the user */
		printf("Enter new data: ");
		scanf("%d", &n_data);

		/* Calling function and storing its value in result variable */
		result = sl_insert_after(&head, g_data, n_data);

		/* Compare result and print respective output */
		if (result == LIST_EMPTY)
		{
		    printf("Failed: List is empty\n");
		}
		else if (result == DATA_NOT_FOUND)
		{
		    printf("Failed: Data not found\n");
		}
		else if (result == FAILURE)
		{
		    printf("Failed: Memory not allocated\n");
		}
		else
		{
		    printf("Data insertion successful\n");
		}
		break;

	    /* Insert before */
	    case 3:
		/* Read g_data from the user */
		printf("Enter given data: ");
		scanf("%d", &g_data);

		/* Read n_data from the user */
		printf("Enter new data: ");
		scanf("%d", &n_data);

		/* Calling function and storing its value in result variable */
		result = sl_insert_before(&head, g_data, n_data);

		/* Compare result and print respective output */
		if (result == LIST_EMPTY)
		{
		    printf("Failed: List is empty\n");
		}
		else if (result == DATA_NOT_FOUND)
		{
		    printf("Failed: Data not found\n");
		}
		else if (result == FAILURE)
		{
		    printf("Failed: Memory not allocated\n");
		}
		else
		{
		    printf("Data insertion successful\n");
		}
		break;

	    /* Delete element */	
	    case 4:
		/* Read g_data from the user */
		printf("Enter data to be deleted: ");
		scanf("%d", &g_data);

		/* Calling function and storing its value in result variable */
		result = sl_delete_element(&head, g_data);

		/* Compare result and print respective output */
		if (result == LIST_EMPTY)
		    printf("Failed: List is empty\n");
		else if (result == FAILURE)
		    printf("Failed: Memory not allocated\n");
		else if (result == DATA_NOT_FOUND)
		    printf("Failed: Data not found\n");
		else
		    printf("Data deleted successfully\n");
		break;

            /* Insert at nth */
	    case 5:
		/* Read index(n) from the user */
		printf("Enter index(n): ");
		scanf("%d", &n);

		/* Read data from the user */
		printf("Enter data: ");
		scanf("%d", &data);

		/* Check if n < 1 or not */
		if (n < 1)
		{
		    printf("Error: Index [n] should be a postive integer number\n");
		}
		else
		{
		    /* Calling function and storing its value in result variable */
		    result = sl_insert_nth(&head, n, data);

		    /* Compare result and print respective output */
		    (result == FAILURE) ? printf("Failed: Couldn't insert node\n", n) : printf("Data inserted successfully\n", n);
		}
	       	break;

 	    /* Print the list */	
	    case 6:
	        /* Calling function and storing its value in result variable */
		result = sl_print_list(head);

		/* Compare result and print respective output */
		(result != LIST_EMPTY) ? : printf("Failed: List is empty\n");
		break;

	    default:
		printf("Invalid choice\n");
	}

	/* Check for continue */
	printf("Do you want to continue (y/n): ");
	getchar();
	scanf("%c", &option);
	(option != 'y') ? : printf("***********************************\n\n");

    } while (option == 'y');

    return 0;
}
