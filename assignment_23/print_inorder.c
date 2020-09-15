#include "Bst.h"

/* Function body to print elements of BST using inorder traversal */
int print_inorder(tree_t * root)
{
    /* Define static local variable */
    static int flag = 1;

    if (flag)
    {
	if (root == NULL)
	    return e_false;

	flag = 0;
    }

    /* Traverse and print data by calling function recursively */
    if (root)
    {
	print_inorder(root->LC);
	printf("%d ", root->data);
	print_inorder(root->RC);
	return e_true;
    }
}
