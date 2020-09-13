#include <stdlib.h>
#include "Sll.h"

/* Function body to reverse the list using iterative method */
int sl_reverse_iterative(Slist ** head)
{
    /* Check if list is empty */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Define 3 structure pointers */
    Slist * current = *head;
    Slist * prev = NULL;
    Slist * next = NULL;

    /* Traverse until last node */
    while (current)
    {
	/* Establish link to reverse */
	next = current->link;
	current->link = prev;
	prev = current;
	current = next;
    }

    /* Update head */
    *head = prev;
}
