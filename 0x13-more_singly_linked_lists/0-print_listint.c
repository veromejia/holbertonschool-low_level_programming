#include "lists.h"
/**
 * print_listint - function that print the number
 * @h: list to be print
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
