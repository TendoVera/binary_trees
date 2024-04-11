#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to root node of the tree
 * Return: The number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves_count, right_leaves_count, total;

	total = 0;

	if (tree == NULL)
		return (0);

	left_leaves_count = binary_tree_leaves(tree->left);
	right_leaves_count = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		total++;
	else
		total = left_leaves_count + right_leaves_count;

	return (total);
}
