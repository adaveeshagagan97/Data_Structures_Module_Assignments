#include <stdlib.h>
#include "Sll.h"

/* Function body to find mid of the list */
int sl_find_mid(Slist ** head, Slist ** mid)
{
    /* Check if list is empty */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Check if list has only one node */
    if ((*head)->link == NULL)
    {
	/* Update mid */
	*mid = *head;
	return SUCCESS;
    }

    /* Define two structure pointers */
    Slist * ptr1 = *head;
    Slist * ptr2 = *head;

    /* Traverse until last node */
    while(ptr2->link!= NULL && (ptr2->link)->link != NULL)
        {
	    /* Move ptr2 by 2 nodes */
            ptr2 = (ptr2->link)->link;
	    /* Move ptr1 by 1 node */
            ptr1 = ptr1->link;
        }

    /* Update mid */
    *mid = ptr1;
    return SUCCESS;
}
