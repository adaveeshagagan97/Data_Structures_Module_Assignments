#include <stdlib.h>
#include "Sll.h"

/* Function body to insert a node at last */
int sl_insert_last(Slist ** head, data_t data)
{
    /* create a new node */
    Slist *new = malloc(sizeof(Slist));

    /* Do error checking */
    if (new == NULL)
    {
	return FAILURE;
    }

    /* Update new node */
    new->data = data;
    new->link = NULL;
    
    /* Do error checking */
    if (*head == NULL)
    {
	*head = new;
	return SUCCESS;
    }

    /* create a temp pointer */
    Slist *temp = *head;

    /* Traverse until last node */
    while (temp->link != NULL)
    {
	temp = temp->link;
    }
    
    /* update and insert the node at last */
    temp->link = new;
    return SUCCESS;
}
