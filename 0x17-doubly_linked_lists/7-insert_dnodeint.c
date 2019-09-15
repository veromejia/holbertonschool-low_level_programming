#include "lists.h"
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

	if(h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		if(*h != NULL)
		{
			new->n = n;
			new->next = temp;
			*h = new;
			return (*h);
		}else{
			*h=new;
			return (*h);
		}

	}

	for (i = 0; i < idx -1; i++)
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
	temp->next = new;
	return (new);
}
