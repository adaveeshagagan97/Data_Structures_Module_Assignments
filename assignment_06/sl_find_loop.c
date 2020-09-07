#include <stdio.h>
#include "Sll.h"

/* Function body to find loop in SLL */
int sl_find_loop(Slist ** head)
{
    /* Check if list is empty */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Define two reference pointers */
    Slist * ref1 = *head;
    Slist * ref2 = *head;

    while (1)
    {
	/* Check if loop exists or not*/
	if (ref2->link != NULL)
	{
	    /* Jump by 2 nodes */
	    ref2 = (ref2->link)->link;
	}
	else
	{
	    return LOOP_NOT_FOUND;
	}

	/* Jump by 1 node */
	ref1 = ref1->link;

	/* Check if loop doesnot exist */
	if (ref1 == NULL || ref2 == NULL)
	    return LOOP_NOT_FOUND;

	/* Check if loop exists */
	if (ref1 == ref2)
	    return LOOP_FOUND;
    }
}
