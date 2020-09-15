#include "Bst.h"

/* Function body to find total number of nodes in binary serach tree */
int bst_find_nodes(tree_t ** root)
{
    /* Calculate nodes by traversing through the tree and return the value */
    return (*root == NULL) ? e_false : (bst_find_nodes(&((*root)->LC)) + 1 + bst_find_nodes(&((*root)->RC)));
}
