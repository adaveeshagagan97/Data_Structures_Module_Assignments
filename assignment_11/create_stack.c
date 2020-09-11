#include <stdlib.h>
#include "Stack.h"

/* Function body to create stack using array */
int create_stack(Stack_t ** stack, int size)
{
    /* Create stack */
    (*stack)->item = malloc(sizeof(int) * size);
    
    /* Check if stack is created or not */
    if ((*stack)->item == NULL)
    {
	return e_false;
    }

    /* Update stack */
    (*stack)->capacity = size;
    (*stack)->top = -1;
    return e_true;
}
