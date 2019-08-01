#include "lists.h"
/**
 * list_len -list the numbers of elements in a linked list
 * @h: pointer to a list
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
