#include "Bst.h"

/* Function body to select operation */
int select_operation(void)
{
    /* Declare local variable */
    int choice;

    /* Print menu */
    printf("Select the option\n");
    printf("-----------------\n");
    printf("1. BST insert\n");
    printf("2. Find height\n");
    printf("3. Find node\n");
    printf("4. Print BST\n");
    printf("-----------------\n");

    /* Read choice from the user */
    printf("Enter the choice: ");
    scanf("%d", &choice);

    /* return the value of choice */
    return choice;
}
