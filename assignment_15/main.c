/*
  Title       : WAP for queue implementation using array 
  Author      : Gagan A
  Date        : 16/09/2020
  Description : Input : Read choice from the user 
                Output: Perform operation wrt the choice made on array
*/

#include "Queue.h"

int main()
{
    /* Declare local variables */
    char option;
    int result, choice, size;
    data_t data, element;
    Queue_t * queue;

    do
    {
	/* Function call to select operation */
	choice = select_operation();

	/* Perform operation wrt the choice */
	switch (choice)
	{
	    /* Create queue using array */
	    case 1:
		/* Read size of the array from the user */
		printf("Enter size of the array: ");
		scanf("%d", &size);

		/* Function call to create queue using array */
		result = create_queue_array(&queue, size);

		/* Compare and print respective output */
		if (result == NOT_IN_RANGE)
		{
		    printf("Error: Size should be a positive integer\n");
		}
		else if (result == e_false)
		{
		    printf("Failed: Queue array not created\n");
		}
		else
		{
		    printf("Queue array created successfully\n");
		}

		break;

	    /* Enqueue operation */	
	    case 2:
		/* Read data from the user */
		printf("Enter data: ");
		scanf("%d", &data);

		/* Function call to insert an element into queue array */
		result = enqueue(&queue, data);

		/* Compare and print respective output */
		if (result == QUEUE_NOT_CREATED)
		{
		    printf("Failed: Queue not created\n");
		}
		else if (result == e_false)
		{
		    printf("Failed: Queue is full\n");
		}
		else
		{
		    printf("Data inserted successfully\n");
		}

		break;

	    /* Dequeue operation */	
	    case 3:
		/* Function call to remove an element from queue array */
		result = dequeue(&queue, &element);

		/* Compare and print respective output */
		if (result == QUEUE_NOT_CREATED)
		{
		    printf("Failed: Queue not created\n");
		}
		else if (result == e_false)
		{
		    printf("Failed: Queue is empty\n");
		}
		else
		{
		    printf("Data deleted successfully\n");
		}

		break;

	    /* Print queue array elements */	
	    case 4:
		/* Function call to print queue */
		result = print_queue_array(queue);

		/* Compare and print respective output */
		if (result == QUEUE_NOT_CREATED)
		{
		    printf("Failed: Queue not created\n");
		}
		else if (result == e_false)
		{
		    printf("Failed: Queue is empty\n");
		}

		break;

	    default :
		printf("Error: Invalid choice\n");
	}

	/* Check for continue */
	printf("Do you want to continue (y/n): ");
	getchar();
	scanf("%c", &option);

    } while (option == 'y');

    return 0;
}    
