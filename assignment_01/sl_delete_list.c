#include <stdlib.h>
#include "Sll.h"

/* Function body to delete entire list */
int sl_delete_list(Slist ** head)
{
    /* Check if list is empty or not */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Traverse until last node */
    while ((*head)->link != NULL)
    {
	/* Define temp */
        Slist * temp = *head;
	/* Update head */
	*head = temp->link;
	/* Delete temp */
        free(temp);
    }

    /* Delete node */
    free(*head);
    /* Update head */
    *head = NULL;
    return SUCCESS;
}    
