#include "lists.h"
/**
 * pop_listint -  functios that delete the last node
 * @head: first element of the list
 * Return: a list
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = (*head);
	n = (*head)->n;
	(*head) = (*head)->next;
	free(tmp);
	return(n);
}
