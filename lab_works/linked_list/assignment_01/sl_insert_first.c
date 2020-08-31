#include <stdlib.h>
#include "Sll.h"

/* Function body to insert node at first */
int sl_insert_first(Slist ** head, data_t data)
{
    /* Create a new node */
    Slist * new = malloc(sizeof(Slist));

    /* Do error checking */
    if (new == NULL)
    {
	return FAILURE;
    }

    /* Update data into node */
    new->data = data;

    /* Check if no node exists */
    if (*head == NULL)
    {
	/* Update and insert node at first */
	new->link = NULL;
	*head = new;
	return SUCCESS;
    }

    /* Update and insert the node at first */
    new->link = *head;
    *head = new;
    return SUCCESS;
}

