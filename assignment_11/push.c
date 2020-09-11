#include <stdlib.h>
#include "Stack.h"

/* Function body to implement push operation */
int push(Stack_t ** stack, data_t element)
{
    /* Check if stack is created or not */
    if ((*stack)->item == NULL)
    {
	return STACK_NOT_CREATED;
    }

    /* Check if stack is full or not */
    if (is_stack_full(stack))
    {
	return e_false;
    }

    /* Incement top */
    (*stack)->top++;

    /* Push element into stack */
    (*stack)->item[(*stack)->top] = element;
    return e_true;
}
