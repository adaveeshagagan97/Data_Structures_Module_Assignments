/*
   Title       : WAP for stack implementation using linked list
   Author      : Gagan A
   Date        : 13/08/2020
   Description : Input : Read choice from the user
                 Output: Do operation and print output wrt the choice made by the user on Stack list
*/

#include <stdio.h>
#include "Stack.h"

int main()
{
    /* Declare local variables */
    char option;
    int choice, result, flag = 0;
    data_t data;
    Stack_t * top = NULL;

    do
    {
	/* Function call to select operation */
	choice = select_operation();

	/* Push operation */
	if (choice == 1)
	{
	    /* Read data from the user */
	    printf("Enter data: ");
	    scanf("%d", &data);

	    /* Calling function and storing its value in result variable */
	    result = push(&top, data);

	    /* Compare result and print respective output */
	    if (result == STACK_IS_EMPTY)
		printf("Failed: Stack is empty\n");
	    else if (result == e_false)
		printf("Failed: Memory not allocated\n");
	    else
		printf("Pushing an element into stack successful\n");

	    /* Re-assign */
	    flag = 1;
	}
	/* Pop operation */
	else if (choice == 2 && flag)
	{
	    /* Calling function and storing its value in result variable */
	    result = pop(&top);

	    /* Compare result and print respective output */
	    (result == STACK_IS_EMPTY) ? printf("Failed: Stack is empty\n") : printf("Popping an element from stack successful\n");
	}
	/* Peek operation */
	else if (choice == 3 && flag)
	{
	    /* Calling function and storing its value in result variable */
	    result = peek(&top);
	    
	    /* Compare result and print respective output */
	    (result == STACK_IS_EMPTY) ? printf("Failed: Stack is empty\n") : printf("The top most element in stack is %d\n", result);
	}
	/* Free stack list */
	else if (choice == 4 && flag)
	{
	    /* Calling function and storing its value in result variable */
	    result = free_stack(&top);
	    
	    /* Compare result and print respective output */
	    (result == STACK_IS_EMPTY) ? printf("Failed: Stack is not created\n") : printf("Deletion of entire stack is successful\n");

	    /* Re-assign */
	    flag = 0;
	}
	/* Peep operation */
	else if (choice == 5 && flag)
	{
	    /* Calling function and storing its value in result variable */
	    result = print_stack(top);
	    /* Compare result and print respective output */
	    (result != STACK_IS_EMPTY) ? : printf("Failed: Stack is empty\n");
	}
	/* Check if choice entered is in range */
	else if (choice < 1 || choice > 5)
	{
	    printf("Error: Invalid choice\n");
	}
	/* If stack is not created and above operations are tried to perform */
	else
	{
	    printf("Error: Stack is not created\n");
	}

	/* Check for continue */
	printf("Do you want to continue(y/n): ");
	getchar();
	scanf("%c", &option);
	(option != 'y') ? : printf("***********************************\n\n");

    } while (option == 'y');

    return 0;
}
