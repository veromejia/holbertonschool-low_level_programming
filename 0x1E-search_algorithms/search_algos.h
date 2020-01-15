#ifndef _SEARCH_H
#define _SEARCH_H
#include <stdio.h>
#include <stdlib.h>

/* prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_binarySearch(int *arr, int l, int r, int x);
void print_sub_array(int l, int r);
#endif
