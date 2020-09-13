#include <stdio.h>
#include "Sll.h"

/* Function body to select operation */
int sl_select_operation(void)
{
    /* Declare local variable */
    int choice;

    /* Print menu */
    printf("Select the operation:\n");
    printf("---------------------\n");
    printf("1. Insert at last\n");
    printf("2. Reverse using iterative method\n");
    printf("3. Reverse using recursive method\n");
    printf("4. Print the list\n");
    printf("---------------------\n");
 
    /* Read choice from the user */
    printf("Enter the choice: ");
    scanf("%d", &choice);

    /* return the value of choice */
    return choice;
}
