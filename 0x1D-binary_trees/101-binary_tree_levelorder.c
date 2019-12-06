#include "binary_trees.h"

/**
 * print_level - function to print order traversal
 * @tree: pointer to parent node
 * @level: height of tree
 * @func: function given from main
 * Return: 1 if true, 0 if false
 */

int print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (level == 1)
	{
		func(tree->n);
		return (1);
	}

	left = print_level(tree->left, level - 1, func);
	right = print_level(tree->right, level - 1, func);

	return (left || right);
}

/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using level-order traversal
 * @tree: pointer to parent node
 * @func: function given from main
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level = 1;

	if (tree == NULL || func == NULL)
		return;

	while (print_level(tree, level, func))
		level++;
}
