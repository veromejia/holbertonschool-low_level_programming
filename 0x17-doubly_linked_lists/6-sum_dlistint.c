#include "lists.h"
/**
 * sum_dlistint - functions that add the value of all nodes in the list
 * @head: first node in the list
 * Return: the additions of the nodes
 */

int sum_dlistint(dlistint_t *head)
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
