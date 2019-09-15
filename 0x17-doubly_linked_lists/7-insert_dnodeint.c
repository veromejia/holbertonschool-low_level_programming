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

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	for (i = 0; temp && i < idx - 1; i++)
	{
		temp = temp->next;
		if (!temp)
		{
			free(new);
			return (NULL);
		}
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h,n));
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	temp->next->prev = new;
	return (new);
}
