#ifndef QUEUE_H
#define QUEUE_H

/* Inbuilt header files */
#include <stdio.h>
#include <stdlib.h>

enum
{
    e_false,
    e_true
};

/* aliasing int to data_t */
typedef int data_t;

/* Defining queue node */
typedef struct Qnode
{
    data_t data;
    struct Qnode * link;
}Queue_t;

/* Functions' prototype */
int enqueue(Queue_t ** front, data_t data, Queue_t ** rear);
int dequeue(Queue_t ** front, Queue_t ** rear);
int print_queue(Queue_t * front, Queue_t * rear);
int select_operation(void);

#endif
