#include <stdio.h>
#include "Stack.h"

/* Function body to select operation */
int select_operation(void)
{
    /* Declare local variable */
    int choice;

    /* Print menu */
    printf("Select the operation:\n");
    printf("----------------------------------------\n");
    printf("1. Insert an element\t\t=>[Push]\n");
    printf("2. Delete an element\t\t=>[Pop ]\n");
    printf("3. Print top most element\t=>[Peek]\n");
    printf("4. Delete entire stack list\t=>[Free]\n");
    printf("5. Print stack list elements\t=>[Peep]\n");
    printf("----------------------------------------\n");
 
    /* Read choice from the user */
    printf("Enter the choice: ");
    scanf("%d", &choice);

    /* return the value of choice */
    return choice;
}

