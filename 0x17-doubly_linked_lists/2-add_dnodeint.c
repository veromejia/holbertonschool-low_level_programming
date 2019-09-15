#include "lists.h"
/**
 * add_dnodeint - add a new node at the beggining of the dlist
 * @head: doble list
 * @n: number of node of the list
 * Return: a new list with the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
		new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
