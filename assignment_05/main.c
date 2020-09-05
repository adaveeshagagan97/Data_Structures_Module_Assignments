/*
   Title       : WAF to find the mid node & to get the nth node from the end of the linked list (SLL)
   Author      : Gagan A
   Date        : 05/09/2020
   Description : Input : Read choice from the user
                 Output: Perform respective operation on SLL wrt the choice made 
*/

#include <stdio.h>
#include "Sll.h"

int main()
{
    /* Declare local variables */
    char option;
    int result, choice, n;
    data_t data;
    Slist * head = NULL;
    Slist * mid = NULL;

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
		(result == FAILURE) ? printf("Failed: Memory not allocated\n") : printf("Data inserted successfully\n");
		break;

	    /* Find mid */		
	    case 2:
		/* Calling function and storing its value in result variable */
		result = sl_find_mid(&head, &mid);

		/* Compare result and print respective output */
		(result == LIST_EMPTY)? printf("Failed: List is empty\n") : printf("The mid element in the list is %d\n", mid->data);
		break;

	    /* Get nth node from last */	
	    case 3:
		/* Read n from the user */
		printf("Enter position from last node: ");
		scanf("%d", &n);

		/* Check if n is always a positive integer number*/
		if (n < 1)
		{
		    printf("Error: Enter the value of position such that [position > 0]\n");
		}
		else
		{
		    /* Calling function and storing its value in result variable */
		    result = sl_get_nth_from_last(&head, n);

		    /* Compare result and print respective output */
		    if (result == LIST_EMPTY)
			printf("Failed: List is empty\n");
		    else if (result == POSITION_NOT_FOUND)
			printf("Failed: Position entered exceeds the length of list\n");
		    else
			printf("The %d[st/nd/th] node from last is %d\n", n, result);
		}
		break;

	    default:
		printf("Error: Invalid option\n");
	}

	/* Check for continue */
	printf("Do you want to continue (y/n): ");
	getchar();
	scanf("%c", &option);
	(option != 'y') ? : printf("***********************************\n\n");

    } while (option == 'y');

    return 0;
}
