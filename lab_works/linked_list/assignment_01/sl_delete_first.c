#include <stdlib.h>
#include "Sll.h"

/* Function body to delete first node */
int sl_delete_first(Slist ** head)
{
    /* check whether list is empty or not */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* create temp pointer */
    Slist *temp = *head;

    /* update head */
    *head = temp->link;

    /* delete temp */
    free(temp);
    return SUCCESS;
}
