#include <stdlib.h>
#include "Sll.h"

/* Function body to find node */
int sl_find_node(Slist ** head, data_t data)
{
    /* check whether list is empty or not */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Define structure pointer */
    Slist *temp = *head;

    /* Traverse until given element is found */
    while (temp)
    {
	/* check if node contains given data or not */
	if (temp->data == data)
	{
	    return ELEMENT_FOUND;
	}
	
	/* update temp with next node address */
	temp = temp->link;
    }

    /* Return when given element is not present in list */
    return ELEMENT_NOT_FOUND;
}

