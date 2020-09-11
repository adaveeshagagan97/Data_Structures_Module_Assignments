#include <stdlib.h>
#include "Stack.h"

/* Function body to get top element of the stack */
int peek(Stack_t ** stack, data_t * element)
{
    /* Check if stack is empty or not */
    if (is_stack_empty(stack))
    {
	return e_false;
    }

    /* Update element with top most item of stack array */
    *element = (*stack)->item[(*stack)->top];
    return e_true;
}
