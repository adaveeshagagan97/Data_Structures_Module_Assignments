#include <stdlib.h>
#include "Dll.h"

int dl_delete_element(Dlist ** head, Dlist ** tail, data_t data)
{
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    Dlist * temp = *head;

    while (temp)
    {
	if (temp->data == data)
	{
	    if (*head == *tail)
	    {
		free(temp);
		*head = *tail = NULL;
		return SUCCESS;
	    }

	    if (temp->prev == NULL)
	    {
		*head = temp->next;
		free(temp);
		(*head)->prev = NULL;
		return SUCCESS;
	    }

	    if (temp->next == NULL)
	    {
		*tail = temp->prev;
		free(temp);
		(*tail)->next = NULL;
		return SUCCESS;
	    }

	    (temp->prev)->next = temp->next;
	    (temp->next)->prev = temp->prev;
	    free(temp);
	    return SUCCESS;
	}

	temp = temp->next;
    }

    return DATA_NOT_FOUND;
}
