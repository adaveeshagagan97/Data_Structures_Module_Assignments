#include <stdlib.h>
#include "Sll.h"

/* Function body to insert node at first */
int sl_insert_first(Slist ** head, data_t data)
{
    /* Create a new node */
    Slist * new = malloc(sizeof(Slist));

    /* Do error checking */
    if (new == NULL)
    {
	return FAILURE;
    }

    /* Update and Insert first node */
    new->data = data;
    new->link = *head;
    *head = new;
    return SUCCESS;
}

