#include "Bst.h"

/* Function body to find height of binary search tree */
int bst_find_height(tree_t ** root)
{
    /* Check if tree is empty */
    if (*root == NULL)
	return e_false;

    /* Calculate the height of left subtree by calling function recursively */
    int l_height = bst_find_height(&((*root)->LC));

    /* Calculate the height of right subtree by calling function recursively */
    int r_height = bst_find_height(&((*root)->RC));

    /* Compare and return the maximum */
    return (l_height > r_height) ? (l_height + 1) : (r_height + 1);
}
