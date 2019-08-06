#include "lists.h"
/**
 * listint_len - function that print the number of elements in the list
 * @h: list that have the elements
 * Return: the numbers of elements (nodes) in the list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
