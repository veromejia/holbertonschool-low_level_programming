#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to parent node
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side != right_side)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if ((tree->left != NULL) && (tree->right != NULL))
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));

	else
		return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to parent node
 * Return: Max height from left or right side
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	else
	{
		if (tree->left != NULL)
			left_height = binary_tree_height(tree->left) + 1;
		if (tree->right != NULL)
			right_height = binary_tree_height(tree->right) + 1;
		return (MAX(left_height, right_height));
	}
}
