#include <stdio.h>
#include "Sll.h"

/* Function body to print list */
int sl_print_list(Slist * head)
{
    /* Cehck if list is mepty */ 
    if (head == NULL)
    {
	return LIST_EMPTY;
    }
    
    /* Traverse until last node */
    while (head)
    {
	/* Print data of ecah node */
	printf("%d ", head->data);
	/* Update head with next node address */
	head = head->link;
    }
    /* Print new line */
    putchar('\n');
}
