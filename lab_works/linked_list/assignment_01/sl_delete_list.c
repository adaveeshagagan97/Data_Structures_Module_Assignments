#include <stdlib.h>
#include "Sll.h"

/* Function body to delete list */
int sl_delete_list(Slist ** head)
{
    /* check whether list is empty or not */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Define two pointers */
    Slist * temp = *head;
    Slist * prev = NULL;

    /* Traverse until last node */
    while (temp!= NULL)
    {
	/* update prev */
	prev = temp->link;

	/* Free temp */
	free(temp);

	/* update temp */
	temp = prev;
    }

    /* Update head with NULL */
    *head = NULL;
    return SUCCESS;
}
