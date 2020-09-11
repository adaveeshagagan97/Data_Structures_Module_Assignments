#include "Stack.h"

/* Function body to check if stack created is full or not */
int is_stack_full(Stack_t ** stack)
{
    /* Compare top and return respective value */
    return ((*stack)->top == ((*stack)->capacity) - 1) ? e_true : e_false;
}
