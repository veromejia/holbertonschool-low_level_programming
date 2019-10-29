#include "sort.h"

/**
 * insertion_sort_list - Funtion that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list;
	listint_t *tmp = (*list)->next;

	while (tmp != NULL)
	{
		while (head != NULL && tmp->n < head->n)
		{
			tmp = swap_nodes(&tmp, &head);
			head = tmp->prev;
			if (head == NULL)
				*list = tmp;
			print_list(*list);
		}
		head = tmp;
		tmp = tmp->next;
	}
}
/**
 * swap_nodes - swap to given nodes
 * @node1: fist node
 * @node2: second node
 * Return: the first node
 */

listint_t *swap_nodes(listint_t **node1, listint_t **node2)
{
	listint_t *tmp;

	tmp = (*node1)->next;
	if (*node2 != NULL)
		(*node2)->next = tmp;
	if (tmp != NULL)
	{
		tmp->prev = *node2;
	}
	if (*node1 != NULL)
		(*node1)->next = *node2;
	(*node1)->prev = (*node2)->prev;
	if ((*node2)->prev != NULL)
		(*node2)->prev->next = *node1;
	((*node2)->prev) = *node1;
	return (*node1);
}
