#ifndef SLL_H
#define SLL_H

/* Inbuilt header files */
#include <stdio.h>
#include <stdlib.h>

enum
{
    SUCCESS,
    FAILURE,
    LIST_EMPTY,
};

/* Aliasing int to data_t */
typedef int data_t;

/* Defining node of SLL */
typedef struct node
{
    data_t data;
    struct node * link;
}Slist;

/* Functions prototype */
int sl_insert_last(Slist ** head, data_t data);
int sl_remove_duplicates(Slist ** head);
int sl_print_list(Slist * head);
int sl_select_operation(void);

#endif
