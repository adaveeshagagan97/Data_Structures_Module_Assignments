#ifndef SLL_H
#define SLL_H

enum
{
    SUCCESS,
    FAILURE,
    LIST_EMPTY,
    DATA_ALREADY_PRESENT,
    DATA_NOT_PRESENT,
    LOOP_FOUND,
    LOOP_NOT_FOUND
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
int sl_insert_sorted(Slist ** head, data_t n_data);
int sl_create_loop(Slist ** head, data_t g_data);
int sl_find_loop(Slist ** head);
int sl_print_list(Slist * head);
int sl_select_operation(void);

#endif
