#include "Sll.h"

/* Function body to remove duplicates in SLL */
int sl_remove_duplicates(Slist ** head)
{
    /* Check if list is empty */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Declare 3 structure pointers */
    Slist * temp, *next, *dup;

    /* Assign */
    temp = *head;

    /* Loop to select element by element */
    while (temp && temp->link)
    {
	/* Assign */
	next = temp;

	/* Loop to compare selected element with other elements */
	while (next->link)
	{
	    /* Check for duplicates */
	    if (temp->data == next->link->data)
	    {
		/* Update and delete duplicate */
		dup = next->link;
		next->link = next->link->link;
		free(dup);
	    }
	    else
	    {
		/* update */
		next = next->link;
	    }
	}

	/* update */
	temp = temp->link;
    }
    return SUCCESS;
}
