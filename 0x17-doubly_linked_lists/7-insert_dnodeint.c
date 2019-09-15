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
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp)
	{
		if (idx == i + 1)
		{
			if (temp->next == NULL)
				add_dnodeint(h, n);
			else
			{
				new->prev = temp;
				new->next = temp->next;
				temp->next->prev = new;
				temp->next = new;
			}
		return (new);
		}
		i++;
		temp == temp->next;
	}
	free(new);
	return (NULL);
}
