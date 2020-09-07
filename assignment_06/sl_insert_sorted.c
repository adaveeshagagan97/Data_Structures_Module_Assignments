#include <stdlib.h>
#include "Sll.h"

/* Function body to insert node in sorted list */
int sl_insert_sorted(Slist ** head, data_t n_data)
{
    /* Check if list is empty */
    if (*head == NULL)
    {
	return LIST_EMPTY;
    }

    /* Create a node */
    Slist * new = malloc(sizeof(Slist));

    /* Check if node is created */
    if (new == NULL)
    {
	return FAILURE;
    }

    /* Update node */
    new->data = n_data;
    new->link = NULL;

    /* Check if list has only one node */
    if ((*head)->link == NULL)
    {
	/* Check if first node's data = new data */
	if ((*head)->data == n_data)
	{
	    return DATA_ALREADY_PRESENT;
	}
	/* Compare and insert data */
	else if ((*head)->data > n_data)
	{
	    new->link = *head;
	    *head = new;
	    return SUCCESS;
	}
	else
	{
	    (*head)->link = new;
	    return SUCCESS;
	}
    }

    /* Define temp */
    Slist * temp = *head;

    /* Traverse until suitable position to insert data is found */
    while (temp->link)
    {
	/* Check if data is already present */
	if (temp->data == n_data)
	{
	    return DATA_ALREADY_PRESENT;
	}
	/* Compare with first node data and insert */
	else if ((*head)->data > n_data)
	{
	    new->link = temp;
	    *head = new;
	    return SUCCESS;
	}
	/* Compare the adjacent nodes and insert */
	else if ((n_data > temp->data) && (n_data < (temp->link)->data))
	{
	    new->link = temp->link;
	    temp->link = new;
	    return SUCCESS;
	}

	/* Update temp with next node address */
	temp = temp->link;
    }

    /* Check if last node has new data */
    if (temp->data == n_data)
    {
	return DATA_ALREADY_PRESENT;
    }
 
    /* Update and insert node at last */
    temp->link = new;
    return SUCCESS;
}
