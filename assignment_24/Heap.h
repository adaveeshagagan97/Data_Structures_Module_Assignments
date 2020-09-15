#ifndef HEAP_H
#define HEAP_H

/* In-built header file */
#include <stdio.h>

/* Aliasing int to data_t */
typedef int data_t;

/* Functions prototype */
void populate_array(data_t * arr, int size);
void swap(data_t * first, data_t * second);
void print_array(data_t * arr, int size);
void heap_sort(data_t * arr, int size);
void build_maxheap(data_t * arr, int size);
void maxheapify(data_t * arr, int index, int size);

#endif
