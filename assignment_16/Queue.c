#include "Queue.h"

/* Function definitions */

/* Function body to insert an element into queue list */
int enqueue(Queue_t ** front, data_t data, Queue_t ** rear)
{
    /* Create new node */
    Queue_t * new = malloc(sizeof(Queue_t));

    /* Check if node is created or not */
    if (new == NULL)
    {
	return e_false;
    }

    /* Update */
    new->data = data;

    /* Check if queue list is empty */
    if (*front == NULL)
    {
	/* update */
	*front = *rear = new;
    }
    else
    {
	/* Update */
	(*rear)->link = new;
	*rear = new;
    }

    /* update to form circular queue list */
    new->link = *front;
    return e_true;
}

/* Function body to delete an element from circular queue list */
int dequeue(Queue_t ** front, Queue_t ** rear)
{
    /* Check if queue list is empty */
    if (*front == NULL)
    {
	return e_false;
    }

    /* Check if queue list has only one node */
    if (*front == *rear)
    {
	free(*front);
	*front = *rear = NULL;
    }
    /* If queue list has multiple nodes */
    else
    {
	/* Update and delete node */
	*front = (*front)->link;
	free((*rear)->link);
	(*rear)->link = *front;
    }
    return e_true;
}

/* Function body to print circular queue list */
int print_queue(Queue_t * front, Queue_t * rear)
{
    /* Check if queue list is empty */
    if (front == NULL)
    {
	return e_false;
    }

    /* Loop to print elements except last one */
    for (; front != rear; front = front->link)
	printf("%d ", front->data);

    /* To print last element of the queue list */
    printf("%d\n", front->data); 
}

/* Function body to select operation */
int select_operation(void)
{
    /* Declare local variable */
    int choice;

    /* Print menu */
    printf("Select the option\n");
    printf("--------------------\n");
    printf("1. Enqueue operation\n");
    printf("2. Dequeue operation\n");
    printf("3. Print queue\n");
    printf("--------------------\n");

    /* Read choice from the user */
    printf("Enter the choice: ");
    scanf("%d", &choice);

    /* Return the value of choice read */
    return choice;
}
