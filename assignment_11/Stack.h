#ifndef STACK_H
#define STACK_H

enum 
{
    e_false,
    e_true,
    STACK_NOT_CREATED
};

/* Aliasing */
typedef unsigned int un_sign;
typedef int data_t;

typedef struct stack
{
    un_sign capacity;
    data_t top;
    data_t * item;
}Stack_t;

/* Functions prototype */
int create_stack(Stack_t ** stack, int size);
int push(Stack_t ** stack, data_t element);
int pop(Stack_t ** stack, data_t * element);
int stack_select_operation(void);
int peek(Stack_t ** stack, data_t *element);
int peep(Stack_t * stack);
int delete_stack(Stack_t ** stack);
int is_stack_full(Stack_t ** stack);
int is_stack_empty(Stack_t ** stack);

#endif
