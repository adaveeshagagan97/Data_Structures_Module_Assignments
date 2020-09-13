#include <stdio.h>
#include "Stack.h"

/* Function body to print stack list */
int print_stack(Stack_t *top)
{
    /* check whether stack list is empty */
    if (top == NULL)
    {
	return STACK_IS_EMPTY;
    }

    /* Traverse until last node */
    while (top)
    {
	/* print stack element */
	printf("%d ", top->data);

	/* Update top with next node address */
	top = top->link;
    }

    /* print new line */
    putchar('\n');
}
