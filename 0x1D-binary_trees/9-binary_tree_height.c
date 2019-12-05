#include "binary_trees.h"

/**
 * measure_height - helper func for binary_tree_height
 * @tree: input tree
 * Return: the maximun height between left and right nodes + 1
 */
size_t measure_height(const binary_tree_t *tree)
{
	size_t maxl, maxr, max;

	if (tree == NULL)
		return (0);

	maxl = measure_height(tree->left);
	maxr = measure_height(tree->right);
	if (maxl > maxr)
		max = maxl;
	else
		max = maxr;
	return (max + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height
 * Return: height of tree or 0 if the tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height;

	height = measure_height(tree);
	return (height - 1);
}
