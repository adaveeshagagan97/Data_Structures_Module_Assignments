#include <stdio.h>
#include "Dll.h"

int main()
{
    char option;
    int result, choice;
    data_t data, n_data, g_data;
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

		result = dl_insert_last(&head, &tail, data);
		(result == FAILURE) ? printf("Failed: Memory not allocated\n") : printf("Data inserted successfully\n");
		break;

	    case 2:
		printf("Enter given data: ");
		scanf("%d", &g_data);

		printf("Enter new data: ");
		scanf("%d", &n_data);

		result = dl_insert_after(&head, &tail, g_data, n_data);

		if (result == LIST_EMPTY)
		{
		    printf("Failed: List is empty\n");
		}
		else if (result == FAILURE)
		{
		    printf("Failed: Memory not allocated\n");
		}
		else if (result == DATA_NOT_FOUND)
		{
		    printf("Failed: Data not found\n");
		}
		else
		{
		    printf("Data inserted successfully\n");
		}
		break;

	    case 3:
		printf("Enter given data: ");
		scanf("%d", &g_data);

		printf("Enter new data: ");
		scanf("%d", &n_data);

		result = dl_insert_before(&head, &tail, g_data, n_data);

		if (result == LIST_EMPTY)
		{
		    printf("Failed: List is empty\n");
		}
		else if (result == FAILURE)
		{
		    printf("Failed: Memory not allocated\n");
		}
		else if (result == DATA_NOT_FOUND)
		{
		    printf("Failed: Data not found\n");
		}
		else
		{
		    printf("Data inserted successfully\n");
		}
		break;

	    case 4:
		printf("Enter data to be deleted: ");
		scanf("%d", &data);

		result = dl_delete_element(&head, &tail, data);

		if (result == LIST_EMPTY)
		{
		    printf("Failed: List is empty\n");
		}
		else if (result == DATA_NOT_FOUND)
		{
		    printf("Failed: Data not found\n");
		}
		else
		{
		    printf("Data (%d) deleted successfully\n", data);
		}
		break;

	    case 5:
		result = dl_print_list(head);
		(result != LIST_EMPTY) ? : printf("Failed: List is empty\n");
		break;

	    default:
		printf("Error: Invalid choice\n");
	}

	printf("Do you want to continue (y/n): ");
	getchar();
	scanf("%c", &option);
	(option != 'y') ? : printf("***********************************\n\n");

    } while (option == 'y');

    return 0;
}

