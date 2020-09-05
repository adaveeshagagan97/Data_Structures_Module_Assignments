#include <stdio.h>

/* Function body to select operation */
int select_operation()
{
    /* Declare local variable */
    int choice;

    /* Print menu */
    printf("Select the option\n");
    printf("------------------\n");
    printf("1. Insert at last\n");
    printf("2. Insert after\n");
    printf("3. Insert before\n");
    printf("4. Delete element\n");
    printf("5. Insert at nth\n");
    printf("6. Print the list\n");
    printf("-------------------\n");

    /* Read choice from the user */
    printf("Enter the choice: ");
    scanf("%d", &choice);

    /* Return the choice entered by the user */
    return choice;
}
