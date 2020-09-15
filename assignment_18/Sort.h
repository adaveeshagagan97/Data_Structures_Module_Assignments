#ifndef SORT_H
#define SORT_H

/* In-built header file */
#include <stdio.h>

/* Aliasing int to data_t */
typedef int data_t;

/* Functions prototype */
void bubble_sort(data_t * arr, int size);
void insertion_sort(data_t * arr, int size);
void selection_sort(data_t * arr, int size);
void populate_array(data_t * arr, int size);
void swap(data_t * first, data_t * second);
void print_array(data_t * arr, int size);
int select_operation(void);

#endif
