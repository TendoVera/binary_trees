#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node
 * Return: 1 if full || Otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_is_full, right_is_full;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		left_is_full = binary_tree_is_full(tree->left);
		right_is_full = binary_tree_is_full(tree->right);

		if (left_is_full && right_is_full)
			return (1);
		else
			return (0);
	}

	return (0);
}
