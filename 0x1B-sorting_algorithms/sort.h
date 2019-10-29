#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print list and print array */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void recursion_sort(int *array, size_t size, int leftIdx, int rightIdx);
int partition(int *array, size_t size, int leftIdx, int rightIdx);
listint_t *swap_nodes(listint_t *node1, listint_t *node2);


/* prototypes */
void swap_int(int *a, int *b);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

#endif
