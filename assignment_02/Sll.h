#ifndef SLL_H
#define SLL_H

enum
{
    SUCCESS, 
    FAILURE,
    LIST_EMPTY, 
    DATA_NOT_FOUND
};

typedef int data_t;

/* Definition of SLL's node */
typedef struct node
{
    data_t data;
    struct node * link;
}Slist;

/* Functions prototype */
int sl_insert_first(Slist ** head, data_t data);
int sl_insert_last(Slist ** head, data_t data);
int sl_insert_after(Slist ** head, data_t g_data, data_t n_data);
int sl_insert_before(Slist **head, data_t g_data, data_t n_data);
int sl_delete_element(Slist ** head, data_t g_data);
int sl_insert_nth(Slist **head, int index, data_t data);
int sl_print_list(Slist * head);
int select_operation(void);

#endif
