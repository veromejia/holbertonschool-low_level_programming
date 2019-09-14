#include "lists.h"
/**
 * dlistint_len - function the show the len of the list
 * @h: list
 * Return: the lenght of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
