#ifndef DLL_H
#define DLL_H

enum
{
    SUCCESS,
    FAILURE,
    DATA_NOT_FOUND,
    LIST_EMPTY
};

typedef int data_t;

typedef struct node
{
    struct node * prev;
    data_t data;
    struct node * next;
}Dlist;


int dl_insert_last(Dlist **head, Dlist ** tail, data_t data);
int dl_insert_after(Dlist ** head, Dlist ** tail, data_t g_data, data_t n_data);
int dl_insert_before(Dlist ** head, Dlist ** tail, data_t g_data, data_t n_data);
int dl_delete_element(Dlist ** head, Dlist ** tail, data_t data);
int dl_select_operation(void);
int dl_print_list(Dlist * head);


#endif

