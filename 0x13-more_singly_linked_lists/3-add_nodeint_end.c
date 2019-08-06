#include "lists.h"
/**
 * add_nodeint_end - functions that add a node at the end of the list
 * @head: first element of the list
 * @n: n elements of the list
 * Return: a new node at the end of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		last = *head;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		new->next = NULL;
	}
	return (*head);
}
