#ifndef BS_H
#define BS_H

enum
{
    ELEMENT_NOT_FOUND
};

/* Aliasing int to data_t */
typedef int data_t;

/* Functions prototye */
void populate_array(data_t * arr, int size);
void sort_array(data_t * arr, int size);
int binary_iterative(data_t * arr, data_t key, int size);
int binary_recursive(data_t * arr, data_t key, int low, int high);
void print_array(data_t * arr, int size);
int select_operation(void);

#endif
