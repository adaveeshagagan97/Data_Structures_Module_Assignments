#include <stdlib.h>
#include "Stack.h"

/* Function body to delete entire stack list*/
int free_stack(Stack_t ** top)
{
    /* Check if stack list is empty */
    if (*top == NULL)
    {
	return STACK_IS_EMPTY;
    }

    /* Traverse until last node */
    while ((*top)->link != NULL)
    {
	/* Define temp */
        Stack_t * temp = *top;
	/* Update top */
	*top = temp->link;
	/* Delete temp */
        free(temp);
    }

    /* Delete node */
    free(*top);
    /* Update top */
    *top = NULL;
    return e_true;
} 
