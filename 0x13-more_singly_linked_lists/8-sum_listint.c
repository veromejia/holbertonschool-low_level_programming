#include "lists.h"

/**
 * sum_listint - functions that add the value of all nodes in the list
 * @head: first node in the list
 * Return: the additions of the nodes
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
		return (sum);

	}
	else
		return (0);
}
