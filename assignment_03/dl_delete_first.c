#include <stdlib.h>
#include "Dll.h"

int dl_delete_first(Dlist ** head, Dlist ** tail)
{
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    if ((*head)->next == NULL)
    {
	free(*head);
	*head = *tail = NULL;
	return SUCCESS;
    }

    Dlist * temp = *head;

    *head = temp->next;
    free(temp);
    (*head)->prev = NULL;
    return SUCCESS;
}
