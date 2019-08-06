#include "lists.h"

/**
 * sum_listint - functions that add the value of all nodes in the list
 * @head: first node in the list
 * Return: the additions of the nodes
 */

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *sum = head;

	if (sum != NULL)
	{
		while (sum !=NULL)
		{
			sum += sum->next;
			i ++;
		}
		return (sum);

	}
	else
		return (0);
}
