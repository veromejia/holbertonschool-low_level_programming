#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node in n position
 * @head: first element of the list
 * @index: position of the node that should be deleted
 * Return: 1 if it succesed and -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);
	next = temp->next->next;

	free(temp->next);

	temp->next = next;
	return (1);
}
