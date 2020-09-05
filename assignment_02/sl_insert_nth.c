#include <stdlib.h>
#include "Sll.h"

int sl_insert_nth(Slist **head, int index, data_t data)
{

    /* Declare local variables */
    int i;

    //local reference to traverse through the link
    Slist *temp = *head;

    /* check for if list is empty */
    if (*head == NULL)
    {
	if (index == 1)
	{
	    sl_insert_first(head, data);
	    return SUCCESS;
	}
	else
	{
	    return FAILURE;
	}
    }
    else
    {
	/* if single node */
	if (((*head) -> link) == NULL)
	{
	    if (index == 1)
	    {
		sl_insert_first(head, data);
		return SUCCESS;
	    }
	    else
	    {
		return FAILURE;
	    }
	}
	/* for multi node case */
	else
	{
	    /* iterate through the link to till the index value */
	    for(i = 1; i <= index; i++)
	    {
		temp = temp -> link;
		if(temp == NULL)
		{
		    break;
		}
	    }

	    /* temp will be at the index value and so insert before this value */
	    sl_insert_before(head, temp->data, data);
	    return SUCCESS;
	}
    }
}
