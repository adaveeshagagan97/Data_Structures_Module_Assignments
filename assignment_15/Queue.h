#ifndef QUEUE_H
#define QUEUE_H

/* Inbuilt header files */
#include <stdio.h>
#include <stdlib.h>

enum
{
    e_false,
    e_true,
    NOT_IN_RANGE,
    QUEUE_NOT_CREATED
};

/* aliasing int to data_t */
typedef int data_t;

/* Declaring queue array */
typedef struct Queue
{
    unsigned int capacity;
    int front, rear, count;
    data_t * item;
}Queue_t;

/* Functions prototype */
int create_queue_array(Queue_t ** queue, int size);
int enqueue(Queue_t ** queue, data_t data);
int dequeue(Queue_t ** queue, data_t * element);
int is_queue_full(Queue_t ** queue);
int print_queue_array(Queue_t * queue);
int is_queue_empty(Queue_t ** queue);
int select_operation(void);

#endif
