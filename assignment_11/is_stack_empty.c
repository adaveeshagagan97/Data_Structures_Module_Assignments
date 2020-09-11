#include "Stack.h"

/* Function body to check if stack created is empty or not */
int is_stack_empty(Stack_t ** stack)
{
    /* Compare top and return respective value */
    return ((*stack)->top == -1) ? e_true : e_false;
}
