#include <stdlib.h>
#include "Sll.h"

/* Function body to reverse list using recursive method */
int sl_reverse_recursive(Slist ** head)
{
    /* Check if list is empty */
    if (*head == NULL)
    {
        return LIST_EMPTY;
    }
    
    /* Define 2 structure pointers */
    Slist * temp = *head;
    Slist * next = temp->link;
    
    /* Do error checking */
    if (next == NULL)
    {
        return SUCCESS;
    }
    
    /* Recursive function call */
    sl_reverse_recursive(&next);

    /* Establish links to reverse list */
    temp->link->link = temp;
    temp->link = NULL;

    /* Update head */
    *head = next;
    return SUCCESS;
}
