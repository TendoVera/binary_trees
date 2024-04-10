#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree
 * @tree: Pointer to the root node
 * Return: Size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size, total;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	total = left_size + right_size + 1;

	return (total);
}
