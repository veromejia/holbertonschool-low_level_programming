#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of de dlist
 * @head: doble linked list
 * @n: value of the node
 * Return: a new list with the new node at the end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	tmp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;
	tmp->prev = *head;
	return (tmp);
}
