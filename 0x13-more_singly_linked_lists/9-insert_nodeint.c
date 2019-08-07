#include "lists.h"
/**
 * insert_nodeint_at_index - inset a new node at a given position
 * @head: fist node of the list
 * @idx: index of the list where the new node should be added
 * @n: position
 * Return: a new linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (*head);
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
	new->next = temp->next;
	temp->next = new;
	return (new);
}
