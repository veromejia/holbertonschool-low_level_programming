#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: list to be print
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;

	}
	return (i);
}
