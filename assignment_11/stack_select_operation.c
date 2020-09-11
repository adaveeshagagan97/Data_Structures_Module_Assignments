#include <stdio.h>

/* Function body to select operation */
int stack_select_operation(void)
{
    /* Declare local variable */
    int choice;

    /* Print menu */
    printf("Select the option\n");
    printf("-----------------\n");
    printf("1. Create a stack\n");
    printf("2. Push operation\n");
    printf("3. Pop operation\n");
    printf("4. Peek operation\n");
    printf("5. Peep operation\n");
    printf("6. Delete stack\n");
    printf("-----------------\n");

    /* Read choice from the user */
    printf("Enter the choice: ");
    scanf("%d", &choice);

    /* Return the value of choice */
    return choice;
}
