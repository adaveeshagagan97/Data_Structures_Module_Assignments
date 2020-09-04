#include <stdio.h>
#include "Dll.h"

int main()
{
    char option;
    int choice, result;
    data_t data;
    Dlist * head = NULL;
    Dlist * tail = NULL;

    do
    {
	choice = dl_select_operation();

	switch (choice)
	{
	    case 1:
		printf("Enter data: ");
		scanf("%d", &data);

		result = dl_insert_first(&head, &tail, data);
		(result == FAILURE) ? printf("Failed: Memory not allocated\n") : printf("Data inserted successfully\n");
		break;

	    case 2:
		printf("Enter data: ");
		scanf("%d", &data);

		result = dl_insert_last(&head, &tail, data);
		(result == FAILURE) ? printf("Failed: Memory not allocated\n") : printf("Data inserted succcessfully\n");
		break;

	    case 3:
		result = dl_delete_first(&head, &tail);
		(result == LIST_EMPTY) ? printf("Failed: List is empty\n") : printf("Deletion of node successful\n");
		break;

	    case 4:
		result = dl_delete_last(&head, &tail);
		(result == LIST_EMPTY) ? printf("Failed: List is empty\n") : printf("Deletion of node successful\n");
		break;
	    
	    case 5:
		result = dl_delete_list(&head, &tail);
		(result == LIST_EMPTY) ? printf("Failed: List is empty\n") : printf("Deletion of list successful\n");
		break;
	    
	    case 6:
		result = dl_print_list(head);
		(result != LIST_EMPTY) ? : printf("Failed: List is empty\n");
		break;

	    default:
		printf("Invalid choice\n");		
	}

	printf("Do you want to continue (y/n): ");
	getchar();
	scanf("%c", &option);

    } while (option == 'y');

    return 0;
}



