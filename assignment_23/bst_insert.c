#include "Bst.h"

/* Function body to insert an element into binary search tree */
int bst_insert(tree_t ** root, data_t data)
{
    /* Declare local variable */
    int flag;

    /* Create new node */
    tree_t * new = malloc(sizeof(tree_t));

    /* Check if node is created or not */
    if (new == NULL)
    {
	return e_false;
    }

    /* Update node */
    new->data = data;
    new->LC = NULL;
    new->RC = NULL;

    /* Check if tree is empty */
    if (*root == NULL)
    {
	/* Update and insert */
	*root = new;
	return e_true;
    }

    /* Define 2 structure pointers */
    tree_t * temp = *root;
    tree_t * parent = temp;
    
    /* Traverse and insert in appropriate place */
    while (temp)
    {
	/* Update */
	parent = temp;

	/* If true, insert in left subtree */
	if (data < temp->data)
	{
	    temp = temp->LC;
	    flag = 1;
	}
	/* If true, insert in right subtree */
	else if (data > temp->data)
	{
	    temp = temp->RC;
	    flag = 0;
	}
	/* If duplicate data is tried to get inserted */
	else
	{
	    return DUPLICATE_FOUND;
	}
    }

    /* Update the node at appropriate place */
    (flag) ? (parent->LC = new) : (parent->RC = new);
    return e_true;
}
