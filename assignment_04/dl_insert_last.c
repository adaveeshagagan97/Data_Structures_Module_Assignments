#include <stdlib.h>
#include "Dll.h"

int dl_insert_last(Dlist ** head, Dlist ** tail, data_t data)
{
    Dlist * new = malloc(sizeof(Dlist));

    if (new == NULL)
    {
	return FAILURE;
    }

    new->data = data;
    new->next = NULL;
    new->prev = NULL;

    if (*head == NULL)
    {
	*head = *tail = new;
	return SUCCESS;
    }

    new->prev = *tail;
    (*tail)->next = new;
    *tail = new;
    return SUCCESS;
}
