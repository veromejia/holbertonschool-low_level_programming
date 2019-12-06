#include "binary_trees.h"
/**
 * bst_checker - function to validate if tree is valid binary search tree
 * @tree: pointer to parent node
 * @minimum: value of macro INT_MIN
 * @maximum: value of macro INT_MAX
 * Return: 1 if true, 0 if false
 */

int bst_checker(const binary_tree_t *tree, int minimum, int maximum)
{
	if (tree == NULL)
		return (1);

	if (tree->n < minimum || tree->n > maximum)
		return (0);

	return ((bst_checker(tree->left, minimum, tree->n - 1)) &&
		(bst_checker(tree->right, tree->n + 1, maximum)));
}


/**
 * binary_tree_is_bst - function that checks if a binary tree
 * is a valid Binary Search Tree
 * using level-order traversal
 * @tree: pointer to parent node
 * Return: value of helper function
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bst_checker(tree, INT_MIN, INT_MAX));
}
