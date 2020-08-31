#include <stdio.h>
#include "Sll.h"

/* Function body to select operation */
int select_operation(void)
{
    /* Declare local variable */
    int choice;

    /* Print menu */
    printf("Select the operation:\n");
    printf("---------------------\n");
    printf("1. Insert at first\n");
    printf("2. Insert at last\n");
    printf("3. Delete at first\n");
    printf("4. Delete at last\n");
    printf("5. Find the node\n");
    printf("6. Delete the list\n");
    printf("7. Print the list\n");
    printf("---------------------\n");
 
    /* Read choice from the user */
    printf("Enter the choice: ");
    scanf("%d", &choice);

    /* return the value of choice */
    return choice;
}

