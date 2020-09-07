#include <stdlib.h>
#include "Sll.h"

/* Function body to create a loop in SLL */
int sl_create_loop(Slist ** head, data_t g_data)
{
    /* Check if list is empty */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Define structure pointers */
    Slist * temp = *head;
    Slist * tail = *head;

    /* Make tail to point to last node by traversing */
    while (tail->link)
    {
	tail = tail->link;
    }

    /* Traverse until given element is found */
    while (temp)
    {
	/* Check if node has given element */
	if (temp->data == g_data)
	{
	    /* Create loop */
	    tail->link = temp;
	    return SUCCESS;
	}
	/* Update temp with next node address */
	temp = temp->link;
    }

    /* If given element is not found in the list */
    return DATA_NOT_PRESENT;
}
