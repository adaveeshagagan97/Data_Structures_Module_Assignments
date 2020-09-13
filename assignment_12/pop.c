#include <stdlib.h>
#include "Stack.h"

/* Function body to implement pop operation on stack list */
int pop(Stack_t ** top)
{
    /* check whether stack list is empty*/
    if (*top == NULL)
    {
	return STACK_IS_EMPTY;
    }

    /* create temp pointer */
    Stack_t *temp = *top;

    /* update top */
    *top = temp->link;

    /* delete temp */
    free(temp);
    return e_true;
}
