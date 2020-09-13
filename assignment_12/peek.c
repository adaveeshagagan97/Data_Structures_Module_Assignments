#include <stdlib.h>
#include "Stack.h"

/* Function body to print top most element of stack list */
int peek(Stack_t ** top)
{
    /* Check if stack list is empty */
    if (*top == NULL)
    {
	return STACK_IS_EMPTY;
    }

    /* Return the top most element */
    return (*top)->data;
}
