#ifndef STACK_H
#define STACK_H

enum 
{
    e_false,
    e_true,
    STACK_IS_EMPTY
};

/* Aliasing int to data_t */
typedef int data_t;

/* Defining stack node */
typedef struct stack_node
{
    data_t data;
    struct stack_node * link;
}Stack_t;

/* Functions prototype */
int push(Stack_t ** top, data_t data);
int pop(Stack_t ** top);
int peek(Stack_t ** top);
int free_stack(Stack_t ** top);
int print_stack(Stack_t *top);
int select_operation(void);

#endif
