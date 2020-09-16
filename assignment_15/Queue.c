#include "Queue.h"

/* Function body to create queue using array */
int create_queue_array(Queue_t ** queue, int size)
{
    /* Do error checking */
    if (size < -1)
    {
	return NOT_IN_RANGE;
    }

    /* Create queue array */
    (*queue)->item = malloc(sizeof(data_t) * size);

    /* Check if queue array is created or not */
    if ((*queue)->item == NULL)
    {
	return e_false;
    }

    /* Update queue */
    (*queue)->front = -1;
    (*queue)->rear = -1;
    (*queue)->capacity = size;
    (*queue)->count = 0;
}

/* Function body to implement enqueue operation */
int enqueue(Queue_t ** queue, data_t data)
{
    /* Check if queue array exists or not */
    if ((*queue)->item == NULL)
    {
	return QUEUE_NOT_CREATED;
    }

    /* Check if queue array is full */
    if (is_queue_full(queue))
    {
	return e_false;
    }

    /* Update front */
    if ((*queue)->front == -1)
    {
	(*queue)->front = 0;
    }

    /* Update and insert an element into queue array */
    (*queue)->rear = ((*queue)->rear + 1) % ((*queue)->capacity);
    (*queue)->item[(*queue)->rear] = data;

    /* Increment count by 1 */
    ++((*queue)->count);
    return e_true;
}

/* Function body to implement dequeue operation */
int dequeue(Queue_t ** queue, data_t * element)
{ 
    /* Check if queue array exists or not */
    if ((*queue)->item == NULL)
    {
	return QUEUE_NOT_CREATED;
    }

    /* Check if queue array is empty */
    if (is_queue_empty(queue))
    {
	return e_false;
    }

    /* Store first inserted element */
    *element = (*queue)->item[(*queue)->front];

    /* Update front to remove first inserted element */
    (*queue)->front = ((*queue)->front + 1) % ((*queue)->capacity);

    /* Decrement count by 1 */
    --((*queue)->count);
    return e_true;
}

/* Function body to check whether queue is full */
int is_queue_full(Queue_t ** queue)
{
    return ((*queue)->count == (*queue)->capacity) ? e_true : e_false;
}

/* Function body to print queue array elements */
int print_queue_array(Queue_t * queue)
{
    /* Check if queue array exists or not */
    if (queue->item == NULL)
    {
	return QUEUE_NOT_CREATED;
    }

    /* Check if queue array is empty */ 
    if (is_queue_empty(&queue))
    {
	return e_false;
    }

    /* Loop to print queue array elements */
    for (int i = queue->front; i < queue->capacity; i++)
    {
	printf("%d ", queue->item[i]);
    }

    /* Print new line */
    printf("\n");
}

/* Function body to check whether queue is empty */
int is_queue_empty(Queue_t ** queue)
{
    return ((*queue)->count == 0) ? e_true : e_false;
}

/* Function body to select operation */
int select_operation(void)
{
    /* Declare local variable */
    int choice;

    /* Print menu */
    printf("Select the option\n");
    printf("-----------------------\n");
    printf("1. Create queue array\n");
    printf("2. Enqueue operation\n");
    printf("3. Dequeue operation\n");
    printf("4. Print queue array\n");
    printf("-----------------------\n");

    /* Read choice from the user */
    printf("Enter the choice: ");
    scanf("%d", &choice);

    /* return the value of choice */
    return choice;
}
