#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	if (tree == NULL)
		return (NULL);

	tmp = tree->left;
	tmp->parent = NULL;
	tree->left = tmp->right;

	if (tree->left != NULL)
		tree->left->parent = tree;
	tree->parent = tmp;
	tmp->right = tree;

	return (tmp);
}
