#include <stdlib.h>
#include "Sll.h"

/* Function body to insert after given element */
int sl_insert_after(Slist ** head, data_t g_data, data_t n_data)
{
    /* check if list is empty */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Define temp */
    Slist * temp = *head;

    /* Traverse until given element is found */
    while (temp)
    {
	/* Check if node doesnot contain given element */
	if (temp->data != g_data)
	{
	    temp = temp->link;
	}
	else
	{
	    /* Create node */
	    Slist * new = malloc(sizeof(Slist));

	    /* Check if node is created or not */
	    if (new == NULL)
	    {
		return FAILURE;
	    }
	    else
	    {
		/* Update and Insert node */
		new->data = n_data;
		new->link = temp->link;
		temp->link = new;
		return SUCCESS;
	    }
	}
    }

    /* If element is not present in the list */
    return DATA_NOT_FOUND;
}
