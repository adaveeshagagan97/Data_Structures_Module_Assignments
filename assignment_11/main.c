/* 
   Title       : WAP for stack implementation using array
   Author      : Gagan A
   Date        : 11/09/2020
   Description : Input : Read choice from the user 
                 Output: Perform operation wrt the choice made by the user
*/

#include <stdio.h>
#include "Stack.h"

int main()
{
    /* Declare local variables */
    char option;
    int choice, result, size, count = 0;
    data_t data, element;
    Stack_t * stack;

    do
    {
	/* Function call to select operation */
	choice = stack_select_operation();

	/* Check if choice entered is 1 */
	if (choice == 1)
	{
	    /* Read size of stack array from the user */
	    printf("Enter size of the stack: ");
	    scanf("%d", &size);

	    /* Check if size entered is a positive integer or not */
	    if (size < 0)
	    {
		printf("Error: Size should be a positive integer only\n");
	    }
	    else
	    {
		/* Creating stack using array by calling function */
		result = create_stack(&stack, size);

		/* Compare result and printf respective output */
		(result == e_false) ? printf("Failed: Stack is full\n") : printf("Stack created successfully\n");

		/* Re-assign */
		count = 1;
	    }
	}
	/* Check if choice entered is 2 and whether stack is created */
	else if (choice == 2 && count)
	{
	    /* Read data from the user */
	    printf("Enter data: ");
	    scanf("%d", &data);

	    /* Inserting an element into stack by calling function */
	    result = push(&stack, data);

	    /* Compare result and printf respective output */
	    if  (result == e_false) 
		printf("Failed: Stack is full\n");
	    else if(result == STACK_NOT_CREATED)
		printf("Failed: Stack not created\n");
	    else 
		printf("Insertion of element successful\n");
	}
	/* Check if choice entered is 3 and whether stack is created */
	else if (choice == 3 && count)
	{
	    /* popping an element from the stack by calling function */
	    result = pop(&stack, &element);

	    /* Compare result and printf respective output */
	    if  (result == e_false) 
		printf("Failed: Stack is full\n");
	    else if(result == STACK_NOT_CREATED)
		printf("Failed: Stack not created\n");
	    else 
		printf("Deletion of element successful\n");
	}
	/* Check if choice entered is 4 and whether stack is created */
	else if (choice == 4 && count)
	{
	    /* Get the top most element of the stack by calling function */
	    result = peek(&stack, &element);

	    /* Compare result and printf respective output */
	    (result == e_false) ? printf("Failed: Stack is empty\n") : printf("%d\n", element);
	}
	/* Check if choice entered is 5 and whether stack is created */
	else if (choice == 5 && count)
	{
	    /* Print the elements of the stack by calling function */
	    result = peep(stack);

	    /* Compare result and printf respective output */
	    if (result == e_false)
		printf("Failed: Stack is empty\n");
	    else if (result == STACK_NOT_CREATED)
		printf("Failed: Stack not created\n");
	}
	/* Check if choice entered is 6 and whether stack is created */
	else if (choice == 6 && count)
	{
	    /* Delete stack array by calling function */
	    result = delete_stack(&stack);

	    /* Compare result and printf respective output */
	    (result == e_false) ? printf("Failed: Stack is empty\n") : printf("Deletion of entire stack successful\n");
	}
	/* Check if choice is in range or not */
	else if (choice > 6 || choice < 1)
	{
	    printf("Error: Invalid choice\n");
	}
	/* If user tries to perform operations without creating stack */
	else
	{
	    printf("Error: Stack not created\n");
	}

	/* Check for continue */
	printf("Do you want to continue (y/n): ");
	getchar();
	scanf("%c", &option);
	(option != 'y') ? : printf("***********************************\n\n");

    } while (option == 'y');

    return 0;
}
