#include <stdio.h>

/* Function body to select operation */
int select_operation(void)
{
    /* Declare local variable */
    int choice;

    /* Print menu */
    printf("Select the option\n");
    printf("----------------------------------------\n");
    printf("1. Binary Search Using Iterative Method\n");
    printf("2. Binary Search Using Recurisve Method\n");
    printf("3. Print the array elements\n");
    printf("----------------------------------------\n");

    /* Read choice from the user */
    printf("Enter the choice: ");
    scanf("%d", &choice);

    /* Return the value of choice */
    return choice;
}
