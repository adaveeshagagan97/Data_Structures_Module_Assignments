#ifndef DLL_H
#define DLL_H

enum
{
    SUCCESS,
    FAILURE,
    LIST_EMPTY,
};

typedef int data_t;

typedef struct node
{
    struct node * prev;
    data_t data;
    struct node * next;
}Dlist;


int dl_insert_first(Dlist ** head, Dlist ** tail, data_t data);
int dl_insert_last(Dlist ** head, Dlist ** tail, data_t data);
int dl_delete_first(Dlist ** head, Dlist ** tail);
int dl_delete_last(Dlist ** head, Dlist ** tail);
int dl_delete_list(Dlist ** head, Dlist ** tail);
int dl_select_operation(void);
int dl_print_list(Dlist * head);

#endif
