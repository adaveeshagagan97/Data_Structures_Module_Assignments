#include <stdlib.h>
#include "Dll.h"

int dl_insert_first(Dlist ** head, Dlist ** tail, data_t data)
{
    Dlist * new = malloc(sizeof(Dlist));

    if (new == NULL)
    {
	return FAILURE;
    }

    new->data = data;
    new->prev = NULL;
    new->next = NULL;

    if (*head == NULL)
    {
	*head = *tail = new;
	return SUCCESS;
    }

    (*head)->prev = new;
    new->next = *head;
    *head = new;
    return SUCCESS;
}
