#include <stdio.h>
#include "Dll.h"

int dl_print_list(Dlist * head)
{
    if (head == NULL)
    {
	return LIST_EMPTY;
    }

    while (head)
    {
	printf("%d ", head->data);
	head = head->next;
    }

    putchar('\n');
    return SUCCESS;
}
