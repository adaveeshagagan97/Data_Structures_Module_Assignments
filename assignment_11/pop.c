#include <stdlib.h>
#include "Stack.h"

/* Function body to pop stack array element */
int pop(Stack_t ** stack, data_t * element)
{
    /* Check if stack is created or not */
    if ((*stack)->item == NULL)
    {
	return STACK_NOT_CREATED;
    }

    /* Check if stack is empty or not */
    if (is_stack_empty(stack))
    {
	return e_false;
    }

    /* update and decrement top */
    *element = (*stack)->item[(*stack)->top];
    (*stack)->top--;
    return e_true;
}
