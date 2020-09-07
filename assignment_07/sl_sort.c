#include <stdlib.h>
#include "Sll.h"

/* Function body to sort list in ascending order */
int sl_sort(Slist ** head)
{
    /* Check if list is empty */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Check if list has only one node */
    if ((*head)->link == NULL)
    {
	return SUCCESS;
    }

    /* Declare local variables */
    int count, store;
    Slist * temp = NULL;

    /* Loop to sort list in ascending order */
    do
    {
	/* Assign */
	temp = *head;
	count = 0;

	/* Traverse until last node */
	while (temp->link)
	{
	    /* Compare and swap nodes */
	    if ((temp->data) > ((temp->link)->data))
	    {
		store = temp->data;
		temp->data = (temp->link)->data;
		(temp->link)->data = store;
		count = 1;
	    }

	    /* Update temp with next node address */
	    temp = temp->link;
	}

    } while (count);

    return SUCCESS;
}
