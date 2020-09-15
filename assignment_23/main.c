/*
   Title       : WAF to find the height & the number of nodes in the given tree
   Author      : Gagan A
   Date        : 15/09/2020
   Description : Input : Read choice from the user
                 Output: Perform operation wrt the choice made on BST
*/

#include "Bst.h"

int main()
{
    /* Declare local variables */
    char option;
    int choice, result;
    data_t data;
    tree_t * root = NULL;

    do
    {
	/* Function call to select operation */
	choice = select_operation();

	/* Perform operation wrt the choice */
	switch (choice)
	{
	    /* Bst insert */
	    case 1:
		/* Read data from the user */
		printf("Enter data: ");
		scanf("%d", &data);

		/* Calling function and storing its value in result variable */
		result = bst_insert(&root, data);

		/* Compare result and print respective output */
		(result == e_false) ? printf("Failed: Tree not created\n") : (result == DUPLICATE_FOUND) ? printf("Failed: Duplicate found\n") : printf("Data inserted successfully\n");
		break;

		/* Find height */	
	    case 2:
		/* Calling function and storing its value in result variable */
		result = bst_find_height(&root);

		/* Compare result and print respective output */
		(result == e_false) ? printf("Failed: Tree not created\n") : (result == 1) ? printf("Height is %d\n", result) : printf("Height is %d\n", result - 1);
		break;

		/* Find nodes */	
	    case 3:
		/* Calling function and storing its value in result variable */
		result = bst_find_nodes(&root);

		/* Compare result and print respective output */
		(result == e_false) ? printf("Failed: Tree not created\n") : printf("Number of nodes is %d\n", result);
		break;

		/* Print tree using inorder traversal */	
	    case 4:
		/* Calling function and storing its value in result variable */
		result = print_inorder(root);

		/* Print new line */
		printf("\n");

		/* Compare result and print respective output */
		(result != e_false) ? : printf("Failed: Tree not created\n");
		break;

	    default:
		printf("Error: Invalid choice\n");
	}

	/* Check for continue */
	printf("Do you want to continue (y/n): ");
	getchar();
	scanf("%c", &option);
	(option != 'y') ? : printf("***********************************\n\n");

    } while (option == 'y');

    return 0;
}
