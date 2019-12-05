#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 * @tree: pointer to parent node
 * Return: Max depth from left or right side
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);

	else
	{
		while (tree->parent != NULL)
		{
			depth++;
			tree = tree->parent;
		}
		return (depth);
	}
}
