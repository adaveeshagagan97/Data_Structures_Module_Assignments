#include "Sort.h"

/* Function body to swap two elements */
void swap(data_t * first, data_t * second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}
