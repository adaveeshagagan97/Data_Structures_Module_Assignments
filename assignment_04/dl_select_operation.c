#include <stdio.h>

int dl_select_operation()
{
    int choice;

    printf("Select the option\n");
    printf("------------------\n");
    printf("1. Insert last\n");
    printf("2. Insert after\n");
    printf("3. Insert before\n");
    printf("4. Delete element\n");
    printf("5. Print list\n");
    printf("------------------\n");

    printf("Enter the choice: ");
    scanf("%d", &choice);

    return choice;
}
