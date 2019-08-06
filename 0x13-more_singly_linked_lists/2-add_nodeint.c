#include "lists.h"
/**
 * add_nodeint - function that add a node into the list
 * @head: fist element of the list
 * @n: numbers of elements of the list
 * Return: a new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	if (*head == NULL)
		ptr->next = NULL;
	else
		ptr->next = *head;
	ptr->n = n;
	*head = ptr;
	return (*head);
}
