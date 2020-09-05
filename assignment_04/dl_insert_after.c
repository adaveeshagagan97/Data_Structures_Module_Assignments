#include <stdlib.h>
#include "Dll.h"

int dl_insert_after(Dlist ** head, Dlist ** tail, data_t g_data, data_t n_data)
{
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    Dlist * temp = *head;

    while (temp)
    {
	if (temp->data == g_data)
	{
	    Dlist * new = malloc(sizeof(Dlist));

	    if (new == NULL)
	    {
		return FAILURE;
	    }

	    new->data = n_data;
	    new->next = temp->next;
	    new->prev = temp;

	    (temp != *tail) ? (temp->next)->prev = new : (*tail = new);

	    temp->next = new;
	    return SUCCESS;
	}

	temp = temp->next;
    }

    return DATA_NOT_FOUND;
}
