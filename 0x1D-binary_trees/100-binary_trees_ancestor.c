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

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * NULL if there is no common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_1, depth_2;

	if (!first || !second)
		return (NULL);

	depth_1 = binary_tree_depth(first);
	depth_2 = binary_tree_depth(second);

	while (depth_1 > depth_2)
	{
		first = first->parent;
		depth_1--;
	}

	while (depth_2 > depth_1)
	{
		second = second->parent;
		depth_2--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *)first);
}
