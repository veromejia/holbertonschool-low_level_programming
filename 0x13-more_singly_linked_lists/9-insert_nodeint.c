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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
		return (new);

	if (idx == 0)
	{
		new->next = temp;
		return (*head);
	}
	while (idx - 1 > 0)
	{
		temp = temp->next;
		idx--;
		if (!temp)
		free(new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
