/*
  Title       : WAP for queue implementation using linked list 
  Author      : Gagan A
  Date        : 14/09/2020
  Description : Input : Read choice from the user 
                Output: Perform operation wrt the choice made on queue list 
*/

#include "Queue.h"

int main()
{
    /* Declare local variables */
    char option;
    int result, choice;
    data_t data;

    /* Define structure pointers */
    Queue_t * front = NULL;
    Queue_t * rear = NULL;

    do
    {
	/* Function call to select operation */
	choice = select_operation();

	/* Perform operation wrt the choice made */
	switch (choice)
	{
	    /* Enqueue */
	    case 1:
		/* Read data from the user */
		printf("Enter data: ");
		scanf("%d", &data);

		/* Calling function and storing its value in result variable */
		result = enqueue(&front, data, &rear);

		/* Compare result and print respective output */
		(result == e_false) ? printf("Failed: Memeory not allocated\n") : printf("Element added to queue successfully\n");
		break;

	    /* Dequeue */	
	    case 2:	
		/* Calling function and storing its value in result variable */
		result = dequeue(&front, &rear);

		/* Compare result and print respective output */
		(result == e_false) ? printf("Failed: Queue is empty\n") : printf("Element deleted from queue successfully\n");
		break;

	    /* Print queue */
	    case 3:
		/* Calling function and storing its value in result variable */
		result = print_queue(front, rear);

		/* Compare result and print respective output */
		(result != e_false) ? : printf("Failed: Queue not created\n");
		break;

	    default:
		printf("Error: Inavlid choice\n");

	}

	/* Check for continue */
	printf("Do you want to continue (y/n): ");
	getchar();
	scanf("%c", &option);
	(option != 'y') ? : printf("***********************************\n\n");

    } while (option == 'y');

    return 0;
}
