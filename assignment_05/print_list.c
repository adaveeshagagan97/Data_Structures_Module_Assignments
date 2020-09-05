#include <stdio.h>
#include "Sll.h"

/* Function body to print list */
int print_list(Slist *head)
{
    /* check whether list is empty or not */
    if (head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Traverse until last node */
    while (head)
    {
	/* print info of node */
	printf("%d ", head->data);

	/* Update head with next node address */
	head = head->link;
    }

    /* print new line */
    putchar('\n');
}
