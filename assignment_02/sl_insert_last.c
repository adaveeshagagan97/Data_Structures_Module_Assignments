#include <stdlib.h>
#include "Sll.h"

/* Function body to insert last node */
int sl_insert_last(Slist ** head, data_t data)
{
    /* Create node */
    Slist * new = malloc(sizeof(Slist));

    /* Check if node is created or not */
    if (new == NULL)
    {
	return FAILURE;
    }
    
    /* Update node */
    new->data = data;
    new->link = NULL;

    /* Check if list is empty */
    if (*head == NULL)
    {
	*head = new;
	return SUCCESS;
    }

    /* Define temp */
    Slist * temp = *head;

    /* Traverse until last node */
    while (temp)
    {
	/* If node is not a tail node */
	if (temp->link != NULL)
	{
	    /* Update */
	    temp = temp->link;
	}
	else
	{
	    /* Update */
	    temp->link = new;
	    return SUCCESS;
	}
    }
}
