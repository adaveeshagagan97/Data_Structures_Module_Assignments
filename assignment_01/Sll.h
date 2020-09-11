#ifndef SLL_H
#define SLL_H

/* Enum definition */
enum
{
    SUCCESS,
    FAILURE,
    LIST_EMPTY,
    DATA_FOUND,
    DATA_NOT_FOUND,
};

typedef int data_t;

/* Definition of SLL's node */
typedef struct node
{
    data_t data;
    struct node *link;
}Slist;

/* Functions prototype */
int sl_insert_first(Slist ** head, data_t data);
int sl_insert_last(Slist ** head, data_t data);
int sl_delete_first(Slist ** head);
int sl_delete_last(Slist ** head);
int sl_find_node(Slist ** head, data_t data);
int sl_delete_list(Slist ** head);
int select_operation(void);
int print_list(Slist * head);

#endif
