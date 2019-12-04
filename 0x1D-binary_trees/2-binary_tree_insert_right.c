#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return: pointer to the created node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = binary_tree_node(parent, value);

	if (node == NULL || parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		binary_tree_t *aux_right = parent->right;

		parent->right = NULL;
		aux_right->parent = NULL;
		node->right = aux_right;
		aux_right->parent = node;
	}
	parent->right = node;
	return (node);
}
