#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to parent node
 * @value: input value
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = binary_tree_node(parent, value);

	if (node == NULL || parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		binary_tree_t *aux_left = parent -> left;

		parent -> left = NULL;
		aux_left->parent = NULL;
		node -> left = aux_left;
		aux_left->parent = node;
	}
	parent->left = node;

	return (node);
}
