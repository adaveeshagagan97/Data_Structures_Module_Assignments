#include <stdio.h>
#include "Stack.h"

/* Function body to print stack array elements */
int peep(Stack_t * stack)
{
    /* Check if stack is created or not */
    if (stack->item == NULL)
    {
	return STACK_NOT_CREATED;
    }
    
    /* Check if stack is empty or not */
    if (is_stack_empty(&stack))
    {
	return e_false;
    }

    /* Loop to print stack array elements */
    for (; stack->top > -1; stack->top--)
    {
	printf("%d ", stack->item[stack->top]);
    }

    /* Update top */
    stack->top = stack->capacity - 1;
    return e_true;
}
