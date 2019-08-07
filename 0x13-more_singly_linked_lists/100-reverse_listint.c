#include "lists.h"
/**
 * reverse_listint - function that reversed a list
 * @head: first element of tha list
 * Return: return a new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		*head = temp->next;
		temp->next = prev;
		prev = temp;
		temp = *head;
	}
	*head = prev;
	return (*head);
}
