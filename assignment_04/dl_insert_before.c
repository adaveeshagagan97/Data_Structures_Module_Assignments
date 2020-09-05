#include <stdlib.h>
#include "Dll.h"

int dl_insert_before(Dlist ** head, Dlist ** tail, data_t g_data, data_t n_data)
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

	    if (temp == *head)
	    {
		new->prev = NULL;
		new->next = temp;
		temp->prev = new;
		*head = new;
		return SUCCESS;
	    }

	    new->prev = temp->prev;
	    new->next = temp;
	    temp->prev = (new->prev)->next = new;
	    return SUCCESS;
	}

	temp = temp->next;
    }

    return DATA_NOT_FOUND;
}
