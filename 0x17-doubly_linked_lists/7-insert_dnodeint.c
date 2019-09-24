#include "lists.h"
#include<stdio.h>
/**
 * insert_dnodeint_at_index - inset a new node at a given position
 * @h: fist node of the list
 * @idx: index of the list where the new node should be added
 * @n: position
 * Return: a new linked list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
		if (!temp)
		{
			free(new);
			return (NULL);
		}
	}
	new->prev = temp;
	new->next = temp->next;
	if (temp->next)
		temp->next->prev = new;
	temp->next = new;
	return (new);
}
