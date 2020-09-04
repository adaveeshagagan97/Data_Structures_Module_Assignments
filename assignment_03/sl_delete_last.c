#include <stdlib.h>
#include "Dll.h"

int dl_delete_last(Dlist ** head, Dlist ** tail)
{
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    if (*head == *tail)
    {
	free(*head);
	*head = *tail = NULL;
	return SUCCESS;
    }

    Dlist * temp = *tail;

    *tail = temp->prev;
    free(temp);
    (*tail)->next = NULL;
    return SUCCESS;
}
