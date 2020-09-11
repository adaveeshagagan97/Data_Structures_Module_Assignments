#include <stdlib.h>
#include "Sll.h"

/* Function body to delete last node */
int sl_delete_last(Slist ** head)
{
    /* check whether list is empty or not */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* check if only one node is present */
    if ((*head)->link == NULL)
    {
	/* delete last node and update head */
	free(*head);
	*head = NULL;
	return SUCCESS;
    }

    /* when more than one node is present */
    /* Define structure pointers */
    Slist * temp = *head;
    Slist * prev = temp;

    /* Traverse until last node */
    while (temp->link != NULL)
    {
	prev = temp;
	temp = temp->link;
    }

    /* Delete last node and make previous node as last node */
    free(temp);
    prev->link = NULL;
    return SUCCESS;
}
