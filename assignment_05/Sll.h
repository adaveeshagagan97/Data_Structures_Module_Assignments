#ifndef SLL_H
#define SLL_H

/* Enum definition */
enum
{
    SUCCESS,
    FAILURE,
    LIST_EMPTY,
    POSITION_NOT_FOUND
};

typedef int data_t;

/* Definition of SLL's node */
typedef struct node
{
    data_t data;
    struct node *link;
}Slist;

/* Functions prototype */
int sl_insert_last(Slist ** head, data_t data);
int sl_find_mid(Slist ** head, Slist ** mid);
int sl_get_nth_from_last(Slist ** head, int n);
int select_operation(void);
int print_list(Slist * head);

#endif
