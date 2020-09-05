#include <stdlib.h>
#include "Sll.h"

/* Function body to get nth node from last */
int sl_get_nth_from_last(Slist ** head, int n)
{
    /* Check if list is empty */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Define local variables */
    int count = 0;
    Slist * ptr1 = *head;
    Slist * ptr2 = *head;

    /* Loop to move ptr2 points to nth node */
    while (count < n)
    {
	/* Do error checking */
	if (ptr2 == NULL)
	{
	    return POSITION_NOT_FOUND;
	}

	/* Update ptr and count */
	ptr2 = ptr2->link;
	count++;
    }

    /* Loop to move both pointers until ptr2 points to NULL */
    while (ptr2)
    {
	/* Update ptr1 and ptr2 */
	ptr1 = ptr1->link;
	ptr2 = ptr2->link;
    }

    /* return the nth node data from last */
    return ptr1->data;
}
