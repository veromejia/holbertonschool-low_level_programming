#include "binary_trees.h"
#include<stdbool.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: input binary tree
 * Return: number of descendant child nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (tree == NULL)
		return (0);

	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);
	return (1 + l_size + r_size);
}

/**
 * isComplete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * @index: node index to check
 * @number_nodes: number of nodes in the tree
 * Return: true if the tree is complete otherwise false
 */
bool isComplete(const binary_tree_t *tree, size_t index, size_t number_nodes)
{
	if (tree == NULL)
		return (true);

	if (index >= number_nodes)
		return (false);

	return (isComplete(tree->left, 2 * index + 1, number_nodes) &&
		isComplete(tree->right, 2 * index + 2, number_nodes));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if the tree is complete, 0 if the tree is not complete or NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_size(tree);

	return (isComplete(tree, 0, size));
}
