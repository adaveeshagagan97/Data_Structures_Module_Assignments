#ifndef BST_H
#define BST_H

/* In-built header files */
#include <stdio.h>
#include <stdlib.h>

enum
{
    e_false,
    e_true,
    DUPLICATE_FOUND
};

/* Aliasing int to data_t */
typedef int data_t;

/* Defining tree node */
typedef struct node
{
    struct node * LC;
    data_t data;
    struct node *RC;
}tree_t;

/* Functions prototype */
int bst_insert(tree_t ** root, data_t data);
int bst_find_height(tree_t ** root);
int bst_find_nodes(tree_t ** root);
int print_inorder(tree_t * root);
int select_operation(void);

#endif

