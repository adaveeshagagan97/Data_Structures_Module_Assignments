#include <stdlib.h>
#include "Sll.h"

/* Function Body to delete element */
int sl_delete_element(Slist **head, data_t data)
{
    /* check for if list is empty */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Declare local variables */
    Slist *temp = *head;
    Slist * prev;

    /* check for if list has only one node */
    if (((*head) -> link) == NULL)
    {
	if (((*head) -> data) == data)
	{
	    /* free the node, and update head */
	    free(temp);
	    (*head) = NULL;
	    return SUCCESS;
	}
	return DATA_NOT_FOUND;
    }
    /* If list  has moulitple nodes */
    else
    {
	/* If the element is in the head */
	if(((*head) -> data) == data)
	{
	    prev = *head;
	    *head= (*head) -> link;
	    prev -> link = NULL;
	    free(prev);
	}
	else
	{
	    /* if list has multiple nodes then, iterate till last node */
	    while (temp->link)
	    {
		/* check if next node is given element */
		if (((temp->link)-> data ) != data)
		{
		    /* if no element is found at all then return */
		    if (((temp->link)-> link ) == NULL)
		    {
			return DATA_NOT_FOUND;
		    }
		    temp = temp->link;
		}

		/* if element is present break */
		break;

	    }

	    /* take a local reference to the element node */
	    prev = temp -> link;

	    /* update that node's link, free the next node that contains element */
	    (temp -> link) = prev -> link;
	    free(prev);
	}
	return SUCCESS;
    }
}
