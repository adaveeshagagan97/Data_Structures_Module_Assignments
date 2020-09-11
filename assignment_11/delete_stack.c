#include <stdlib.h>
#include "Stack.h"

/* Function body to delete stack array */
int delete_stack(Stack_t ** stack)
{
    /* Check if stack is empty */
    if (is_stack_empty(stack))
    {
	return e_false;
    }

    /* Free stack array */
    free((*stack)->item);

    /* Update stack array to NULL */
    (*stack)->item = NULL;

    /* Update top */
    (*stack)->top = -1;
    return e_true;
}
