#include <stdlib.h>
#include "Stack.h"

/* Function body to insert an element in stack list */
int push(Stack_t ** top, data_t data)
{
    /* Create a new node */
    Stack_t * new = malloc(sizeof(Stack_t));

    /* Do error checking */
    if (new == NULL)
    {
	return e_false;
    }

    /* Update and Insert element into stack list */
    new->data = data;
    new->link = *top;
    *top = new;
    return e_true;
}
