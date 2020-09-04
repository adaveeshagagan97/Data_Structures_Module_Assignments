#include <stdio.h>

int dl_select_operation()
{
    int choice;

    printf("Select the option\n");
    printf("------------------\n");
    printf("1. Insert at first\n");
    printf("2. Insert at last\n");
    printf("3. Delete first\n");
    printf("4. Delete last\n");
    printf("5. Delete list\n");
    printf("6. Print the list\n");
    printf("------------------\n");

    printf("Enter the choice: ");
    scanf("%d", &choice);

    return choice;
}
