#include <stdlib.h>
#include "Dll.h"

int dl_delete_list(Dlist ** head, Dlist ** tail)
{
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    while (*head != *tail)
    {
	Dlist * temp = *tail;
	*tail = temp->prev;
	free(temp);
	(*tail)->next = NULL;
    }

    free(*head);
    *head = *tail = NULL;
    return SUCCESS;
}


