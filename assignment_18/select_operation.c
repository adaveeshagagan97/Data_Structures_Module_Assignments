#include "Sort.h"

/* Function body to select operation */
int select_operation(void)
{
    /* Declare local variable */
    int choice;

    /* Print menu */
    printf("Select the option\n");
    printf("-----------------\n");
    printf("1. Bubble sort\n");
    printf("2. Insertion sort\n");
    printf("3. Selection sort\n");
    printf("-----------------\n");

    /* Read choice from the user */
    printf("Enter the choice: ");
    scanf("%d", &choice);

    /* return the value of choice */
    return choice;
}
