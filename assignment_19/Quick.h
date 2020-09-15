#ifndef QUICK_H
#define QUICK_H

/* In-built header file */
#include <stdio.h>

/* Aliasing int to data_t */
typedef int data_t;

/* Functions prototype */
void populate_array(data_t * arr, int size);
void swap(data_t * first, data_t * second);
void print_array(data_t * arr, int size);
void quick_sort(data_t * arr, int low, int high);
int partition(data_t * arr, int low, int high);

#endif
