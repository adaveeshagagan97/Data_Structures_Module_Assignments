#include <stdlib.h>
#include "Sll.h"

/* Function body to insert before given element */
int sl_insert_before(Slist ** head, data_t g_data, data_t n_data)
{
    /* Check if list is empty */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Define temp */
    Slist *temp = *head;

    /* Create node */
    Slist * new = malloc(sizeof(Slist));

    /* Check if node is created or not */
    if (new == NULL)
    {
	return FAILURE;
    }

    /* Update node */
    new->data = n_data;
    new->link = NULL;

    /* If list has only one node */
    if ((*head)->link == NULL)
    {
	/* If that node contains data */
	if ((*head)->data == g_data)
	{
	    /* Update and insert node */
	    new->link = *head;
	    *head = new;
	    return SUCCESS;
	}

	/* Else */
	return DATA_NOT_FOUND;
    }

    /* If first node contains given element */
    if ((*head)->data == g_data)
    {
	/* Update and insert ode */
	new->link = *head;
	*head = new;
	return SUCCESS;
    }
    else
    {
	/* Traverse until given element is found */
	while (temp->link)
	{
	    if ((temp->link)->data != g_data)
	    {
		if (((temp)->link)->link == NULL)
		    return DATA_NOT_FOUND;
		temp = temp->link;
	    }
	    /* If element is present */
	    break;
	}

	/* Update and insert node */
	new->link = temp->link;
	temp->link = new;
	return SUCCESS;
    }
}
